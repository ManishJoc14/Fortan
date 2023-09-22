#include<stdio.h>
int  calculateSumOfdigits(int n){
    int rem , sum=0;
    if(n<10) return n;
    while(n!=0){
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    calculateSumOfdigits(sum);
}
int main(){
    int n;

    printf("Enter the value of number : ");
    scanf("%d",&n);

    printf("Sum of digits until single digit is : %d", calculateSumOfdigits(n));
    
    return 0;
}