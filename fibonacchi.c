// 0,1,1,2,3,5,8
#include <stdio.h>
int main()
{
    int num;
    int t1 = 0;

    int t2 = 1;
    int nextterm;

    printf("Enter a number");
    scanf("%d", &num);
    printf("The fibonacci series is %d %d ", t1, t2);
    nextterm = t1 + t2;
    while (nextterm <= num)
    {
        printf("%d, ", nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }

   

    return 0;
}
