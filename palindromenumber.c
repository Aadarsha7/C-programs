#include <stdio.h>
int main()
{
    int num, rev = 0, orginal, remainder;
    printf("Enter a number :");
    scanf("%d", &num);
    orginal = num;
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }
    if(rev==orginal){
        printf("The number is palindrome");

    }
    else{
        printf("The number is not palindrome");
    }

    return 0;
}