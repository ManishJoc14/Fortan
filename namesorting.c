#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n;
    char  temp[10];

    printf("Enter the size of array:");
    scanf("%d",&n);
    char arr[n][10];

    printf("Enter %d names : ",n);
    for (int  i = 0; i < n; i++){
        scanf("%s",arr[i]);
    }

    for (int  i = 0; i < n; i++)
    {
         for (int  j = 0; j < n-i-1; j++)
         {
            if(strcmp(arr[j],arr[j+1])){
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
         }  
    }
    
    printf("Names in sorted order:");
        for (int  i = 0; i < n; i++){
        printf("%s ",arr[i]);
    }
}