#include "interpolation.h"

double newton_interpolation(const std::vector<double>& x, 
                            const std::vector<double>& y, 
                            double target_x) {
    int n = x.size();
    std::vector<std::vector<double>> div_diff(n, std::vector<double>(n, 0.0));

    // Первый столбец — значения y
    for (int i = 0; i < n; i++) {
        div_diff[i][0] = y[i];
    }

    // Вычисляем таблицу разделенных разностей
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            div_diff[i][j] = (div_diff[i+1][j-1] - div_diff[i][j-1]) / (x[i+j] - x[i]);
        }
    }

    // Считаем значение полинома в точке target_x
    double result = div_diff[0][0];
    double product = 1.0;
    for (int i = 1; i < n; i++) {
        product *= (target_x - x[i-1]);
        result += div_diff[0][i] * product;
    }

    return result;
}