#include <stdio.h>
#include <stdlib.h>
#include "calc.h"  // 注意：从 include/ 引入

int main() {
    double a, b, result;
    char op;
    print();
    printf("简易计算器: 输入格式 a op b (例如: 3 + 5)\n");
    printf("> ");

    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        fprintf(stderr, "错误: 请输入有效表达式 (如 2 * 3)\n");
        return 1;
    }

    if (calculate(a, op, b, &result) != 0) {
        fprintf(stderr, "错误: 无效操作或除零\n");
        return 1;
    }

    printf("结果: %g\n", result);
    print();
    return 0;
}