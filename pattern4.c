/*          N
          e e e
        p p p p p 
      a a a a a a a 
    l l l l l l l l l 

*/
#include<stdio.h>
#include<string.h>

int main(){
    int i,j,space;

    char str[]="Nepal";
    int len = strlen(str);

    for(i=0; i<len; i++){
        for(space =len-i-1; space>=0; space--){
            printf("\t");
        }
        for(j=0; j< 2*i+1; j++){
            printf("%c\t",str[i]);
            // printf("*\t");
        }
        printf("\n");
    }

}