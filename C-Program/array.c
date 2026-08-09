#include <stdio.h>
int main()
{
    int a[4], i, sum = 0;
    printf("Enter 4 elements: ");
    for(i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Addition of all elements = %d", sum);
    return 0;
}