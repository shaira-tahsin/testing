#include<stdio.h>
int main()
{
    int x, y;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);

    int result = x+y;
    printf("Result is euqal to = %d", result);
}