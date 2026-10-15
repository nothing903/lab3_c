#pragma once
#include <vector>

// Интерполяция методом Ньютона (правые разделенные разности)
double newton_interpolation(const std::vector<double>& x, 
                            const std::vector<double>& y, 
                            double target_x);