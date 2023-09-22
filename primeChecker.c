#include<stdio.h>
#include<math.h>
int isprime(int n){
    for(int i=2; i< n;  i++){
        if(n%i ==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;

    printf("Enter the  value of n :");
    scanf("%d",&n);

    if(isprime(n)){
        printf("%d is a prime number\n",n);
    }else{
        printf("%d is  not a prime number \n",n);
    }
    
    printf("Prime numbers upto %d: ",n);
    for(int i=2; i<n; i++){
        if(isprime(i)){
            printf("%d ",i);
        }
    }

    return 0;
}