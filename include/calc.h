#ifndef CALC_H
#define CALC_H

/**
 * @brief 执行二元运算
 * @param a 第一个操作数
 * @param op 操作符 ('+', '-', '*', '/')
 * @param b 第二个操作数
 * @param result 输出结果指针
 * @return 0 成功, -1 错误（如除零）
 */


int calculate(double a, char op, double b, double *result);

#endif // CALC_H