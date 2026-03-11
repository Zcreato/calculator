#include "calc.h"
#include <stdio.h>

int calculate(double a, char op, double b, double *result) {
    if (!result) return -1;

    switch (op) {
        case '+':
            *result = a + b;
            return 0;
        case '-':
            *result = a - b;
            return 0;
        case '*':
            *result = a * b;
            return 0;
        case '/':
            if (b == 0.0) {
                return -1; // 除零错误
            }
            *result = a / b;
            return 0;
        default:
            return -1; // 不支持的操作符
    }
}