#include <stdio.h>
#include <string.h>
struct student
{
    char firstname[100];
    char lastname[100];
    int roll;
    float percentage;

} ;

int main()
{
    int i, n;
    printf("Enter the number of the students : ");
    scanf("%d", &n);
    printf("\n");
    struct student s[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the Information of the students %d \n\n",i+1);

        printf("Enter first name : ");
        scanf("%s", s[i].firstname);
    

        printf("Enter last name : "); 
        scanf("%s", s[i].lastname);

        printf("Enter the roll number : ");
        scanf("%d", &s[i].roll);

        printf("Enter the  percentgae : ");
        scanf("%f", &s[i].percentage);
    }

     printf("The student who has secured more than 60 percentage :\n");
    for ( i = 0; i < n; i++)
    {
       if(s[i].percentage>=60.00){
        printf(" Name = %s %s \n",s[i].firstname,s[i].lastname);
       }

    }
    

    return 0;
}
