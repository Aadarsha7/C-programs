#include <stdio.h>
#include <string.h>
struct employee
{
    char firstname[100];
    char lastname[100];
    char address[100];
    float salary;
};

int main()
{
    int i;

    struct employee e[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter the Information of employee %d \n\n", i + 1);

        printf("Enter first name : ");
        scanf("%s", e[i].firstname);

        printf("Enter last name : ");
        scanf("%s", e[i].lastname);

        printf("Enter the address  : ");
        scanf("%s", e[i].address);

        printf("Enter the  salary : ");
        scanf("%f", &e[i].salary);
    }

    printf("The Employee  who has Salary more than 10,000 is :\n");
    for (i = 0; i < 5; i++)
    {
        if (e[i].salary >= 10000)
        {
            printf(" Name = %s %s \n", e[i].firstname, e[i].lastname);
        }
    }

    return 0;
}
