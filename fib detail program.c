#include <stdio.h>

int main() {
    int i, n;
    int t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;

    // 获取输入的项数
    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // 返回非零值表示错误
    }

    // 打印斐波那契数列
    printf("Fibonacci Series: %d, %d", t1, t2);
    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        if (i < n) {
            printf(", %d", nextTerm);
        } else {
            printf(" %d", nextTerm); // 最后一个数字后不加逗号
        }
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n"); // 添加换行符以美化输出

    return 0;
}