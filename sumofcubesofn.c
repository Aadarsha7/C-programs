#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    i = 0;
    while (i <= num)
    {
        sum = sum + (i * i * i);
        i++;
    }
    printf("The output is %d", sum);
    return 0;
}
