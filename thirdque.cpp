#include <stdio.h>
int main()
{
    int arr[4], i, sum = 0;
    printf("Enter 4 elements: ");
    for (i = 0; i < 4; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 4; i++)
        sum += arr[i];

    printf("Sum of all elements = %d\n", sum);
    return 0;
}