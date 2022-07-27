// factorial using recursion
#include <stdio.h>
int fact(int n);
int main()
{
    int n, fa;
    printf("Enter a number :");

    scanf("%d", &n);
    fa = fact(n);
    printf("The factorial of %d is %d .", n, fa);

    return 0;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factNM1 = fact(n - 1);
    int factN = factNM1 * n;
    return factN;
}