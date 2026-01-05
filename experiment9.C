#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("%d is largest", a);
    else if (b > c)
        printf("%d is largest", b);
    else
        printf("%d is largest", c);

    return 0;
}
