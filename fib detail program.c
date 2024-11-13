#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

// 如果用户请求超过2个项，则进入循环打印后续项
  for (i = 2; i < n; ++i) {
    int nextTerm = t1 + t2; // 在循环内部直接计算下一个Fibonacci数
    printf(", %d", nextTerm);
    t1 = t2;
    t2 = nextTerm;

    // 如果不是最后一个项，打印逗号（避免最后一个项后面也有逗号）
    if (i < n - 1) {
      printf(", ");
    }
  }

  // 换行符，美化输出
  printf("\n");

  return 0;
}
