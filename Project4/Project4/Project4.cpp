#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a, i = 2;
    printf("Enter Number : ");
    scanf("%d", &a);
    printf("Factoring Result : ");
    while (a != 1)
    {
        while (a % i == 0)
        {
            printf(" %d ", i);
            a = a / i;
        }
        i++;
    }
    return 0;
}