#include <stdio.h>
#include <math.h>

int main()
{
    int num, original, digit, sum = 0, count = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    // Step 3 & 4: Count digits
    int temp = num;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    // Step 6–8: Extract digits and calculate sum
    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    // Step 9–10: Compare and print result
    if (sum == original)
        printf("Valid Armstrong Number\n");
    else
        printf("Invalid Armstrong Number\n");

    return 0;
}
