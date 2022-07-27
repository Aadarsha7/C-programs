// add 3 numbers using pointer
#include <stdio.h>
int main(){
    int a,b,c,sum;
    int *p,*q,*r;
    printf("Enter 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);

    p =&a;
    q =&b;
    r =&c;
    sum = (*p+*q+*r);

    printf("The sum of the numbers is %d",sum);


    return 0;
}


