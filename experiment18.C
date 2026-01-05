#include <stdio.h>

int main() {
    int a[2][2], sum = 0;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }

    printf("Sum = %d", sum);
    return 0;
}
