#include<stdio.h>

struct book
{
    char bookname[100];
    char author[100];
    float bookprice;
};

int main()
{
    float totalcost=0;
    struct book b[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("Enter details of book %d\n", i+1);
        
        printf("Enter book name: ");
        scanf("%s", b[i].bookname);
        printf("Enter book author: ");
        scanf("%s", b[i].author);
        printf("Enter book price: ");
        scanf("%f", &b[i].bookprice);
    }

    for(i=0; i<4; i++){
        totalcost = (totalcost+b[i].bookprice);

    }
    printf("The total book price is %.2f",totalcost);
    
        
    return 0;
}