#include<stdio.h>
int main(){
    int i,j;
    char str[11]="Programming";
        int size=11;

    for(i=0;i<=size/2; i++){
        for(j=i; j<11-i; j++){
            printf("%c ",str[j]);
        }
        printf("\n");
    }
    return 0;
}