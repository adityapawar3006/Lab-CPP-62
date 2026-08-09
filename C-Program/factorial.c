#include <stdio.h>
int main()
{
    int n, i;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %lld", fact);
    return 0;
}