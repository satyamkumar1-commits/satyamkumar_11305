#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "Hello";
    char s2[20] = "World";

    printf("Length of s1: %lu\n", strlen(s1));
    strcpy(s1, s2);
    printf("After strcpy: %s\n", s1);
    strcat(s1, "!");
    printf("After strcat: %s\n", s1);
    printf("strcmp result: %d", strcmp(s1, s2));

    return 0;
}
