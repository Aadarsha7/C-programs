#include <stdio.h>
int main(){

int arr[10],i,j,store;
printf("Enter 10 values in array : \n");
for(i=0;i<10;i++){
    scanf("%d",&arr[i]);

}
for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
        if(arr[i]>arr[j]){
            store =arr[i];
            arr[i]=arr[j];
            arr[j]=store;
        }
    }
}
printf("The elements in ascending order is ");
for(i=0;i<10;i++){
    printf("%d\n",arr[i]);
}


    return 0;
}


