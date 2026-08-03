#include <stdio.h>
int main()
 {
    int a, b, c, sum;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("Sum = %d\n", sum);
    return 0;
}