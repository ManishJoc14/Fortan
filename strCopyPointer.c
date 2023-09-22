#include <stdio.h>
void concate_string(char *str1,char *str2,char *concated){
    int i,j;

    for( i=0; *(str1+i)!='\0'; i++){
        *(concated+i) = *(str1+i);
    }

    for( j =0;  *(str2+j)!='\0'; j++ ){
        *(concated+i+j) = *(str2+j);
    }

    *(concated+i+j)='\0';
}

int main() {
    char str1[10],str2[10],concated[20];

    printf("Enter string 1 : ");
    scanf("%s",str1);
    printf("Enter string 2 : ");
    scanf("%s",str2);

    concate_string(str1,str2,concated);
    printf("After string concatenation: %s",concated);
}