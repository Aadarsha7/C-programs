#include <stdio.h>
int main(){
    int i,sum=0;
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    
    for(i=0;i<10;i++){
        sum = sum+A[i];

    }
    printf("The sum is %d",sum);

    return 0;
}