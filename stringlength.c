#include <stdio.h>
#include <string.h>
int main(){
    int length;
    char str[100];
    printf("Enter a string :");
    fgets(str,100,stdin);
    length = strlen(str)-1;

    printf("The lenght of the given string is %d",length);

    return 0;
}


