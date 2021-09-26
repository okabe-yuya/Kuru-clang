#include <stdio.h>

// 1本198円の清涼飲料水1本と、1本138円の牛乳2本を購入し、
// 千円札で払った場合のお釣りを求めよ。
// ただし、5%の消費税を追加し、お釣りの額は整数とする。
// なお、消費税を四捨五入するかどうかは自由とする。

int main (void) {
  int drink, milk, hasMoney, rest, total;
  double taxRate;
  hasMoney = 1000;
  drink = 198;
  milk = 138;
  taxRate = 1.05;
  total = (int)((198 + 138 * 2) * taxRate);
  rest = hasMoney - total;
  printf("%d\n", total);
  printf("Your rest money: %d\n", rest);
  return 0;
}