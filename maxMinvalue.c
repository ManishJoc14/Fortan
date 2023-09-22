#include<stdio.h>
void findMaxMin(int *arr,int n, int *max, int *min){
    *max = *min = *arr ;
    for(int i=0; i<n; i++){
        if(*(arr+i)>*max){
            *max = *(arr+i);
        }
        if(*(arr+i)<*min){
            *min = *(arr+i);
        }
    }
}
int main(){
    int  n,max,min;
    printf("Enter  the  number of terms :");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements :",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    findMaxMin(arr,n,&max,&min);
    printf("Max: %d,  Min: %d",max,min);

}