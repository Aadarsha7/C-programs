#include <stdio.h>
int main(){
    int n, i,sum=0;
    printf("ENter a number :");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        sum =sum+i;
    }
    printf("The sum is %d",sum);

    return 0;
}