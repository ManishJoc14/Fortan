#include<stdio.h>
int main(){
    int index,value;
    int arr[]={1,2,3,4};

    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the index:");
    scanf("%d",&index);
    printf("Enter value to be placed:");
    scanf("%d",&value);

    int arrNew[len+1];
    for (int i = 0; i < len+1 ; i++)
    {
        if(i<index){
            arrNew[i]=arr[i];
        }
        if(i==index){
            arrNew[i]=value;
        }
        if(i>index){
            arrNew[i]=arr[i-1];
        }
    }
    
    printf("After updating:");
    for (int i = 0; i < len+1; i++)
    {
       printf("%d ",arrNew[i]);
    }
    
}