#include <stdio.h>
int main(){
    int week;
    printf("Enter a number from 1 to 7 :");
    scanf("%d",&week);
    switch (week)
    {
        case 1:
            printf("sunday");
            break;
        case 2:
            printf("monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
        printf("INVALID NUMBER");
        }

    return 0;
}