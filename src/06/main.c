#include <stdio.h>

// int main (void) {
//   int data;
//   printf("Enter your number\n");
//   scanf("%d", &data);
//   printf("%d\n", data);

//   return 0;
// }

// お題は、簡易シグマ計算とさせていただきます。

// シグマと言うのは高校の数学で習うことですが、基本的にはそんなに難しくありません。
// 1+2+3+4+5+････100 などを計算するのがシグマです。

int main (void) {
  int min, max, sum;

  printf("最小値と最大値を,区切りで入力してください\n");
  scanf("%d, %d", &min, &max);

  sum = ((min + max) * (max - min + 1 )) / 2;
  printf("%d\n", min);
  printf("%d\n", max);
  printf("sum: %d\n");
  return sum;
}