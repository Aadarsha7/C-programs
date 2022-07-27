#include <stdio.h>
int main(){

    int num;
    printf("Enter a number :");
    scanf("%d",&num);
   if (num==0){
    printf("The number %d is  neither odd nor even",num);
   }
    else if (num %2 ==0)
    {
        printf("The number %d is even",num);

    }
    else{
        printf("The number %d is odd",num);
    }
    

    return 0;
}