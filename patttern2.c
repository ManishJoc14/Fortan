    // 1, 11, 111, 1111

#include<stdio.h>
void printPattern(int n,int val){
    if(n==0) return;

    val = val*10 + 1;
    printf("%d ", val);
    printPattern(n-1,val);
}
int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    printPattern(n,0);

    return  0;
}