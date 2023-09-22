#include<stdio.h>
int isArmstrong(int n){
    int rem,sum=0,num;
    num=n;
    while (n!=0)
    {
        rem = n % 10;
        sum+= rem*rem*rem;
        n  /= 10;
    }
    return (num==sum) ;   
}
int main(){
    int lower,upper;

    printf("Enter the lower and upper limit to find armstrong numbers :  ");
    scanf("%d%d",&lower,&upper);

    printf("Armstrong Numbers: ");
    for(int i = lower; i < upper; i++){
        if(isArmstrong(i)){
            printf("%d ",i);
        }
    }

}