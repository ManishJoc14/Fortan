#include<stdio.h>
int main(){
    int n;
    float sum=0;
    printf("Enter the value  of n: ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n; i++){
        sum += ((i*(i+1))/2) * 10*i;
    }

    printf("Sum is : %f",sum);
}