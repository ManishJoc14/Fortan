#include<stdio.h>
int main(){
    int n,i,j,temp;

    // Asking for array size 
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]<=arr[j+1]){   //if it is less swap to last i.e descending sort
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("After sorting :");
        for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }  

    return 0;
}