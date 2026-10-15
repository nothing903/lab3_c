#include <iostream>

int gcd(int a, int b) {
    // БАГ: '=' вместо '=='
    if (b = 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1 = 48, num2 = 18;
    std::cout << "Вычисление НОД для " << num1 << " и " << num2 << std::endl;
    int result = gcd(num1, num2);
    std::cout << "НОД: " << result << std::endl;
    return 0;
}
