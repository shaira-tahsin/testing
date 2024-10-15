#include<stdio.h>
int main()
{
    int x, y;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);

    int result = x+y;
    printf("Result is euqal to = %d \n", result);

    int a,b;
    printf("Enter 2 more numbers: ");
    scanf("%d %d", &a, &b);

    int result2 = a+b;
    printf("New result is euqal to = %d\n", result2);

}