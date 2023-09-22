#include<stdio.h>
#include<string.h>
struct student {
    char name[10];
    int roll;
}s[2],temp;

int main(){

    for(int i=0; i<2; i++){
        printf("Student %d",i+1);
        printf("Enter Name :");
        scanf("%s",s[i].name);
        printf("Enter Roll :");
        scanf("%d",&s[i].roll);
        printf("\n");
    }

    printf("Before sorting:");
    for(int i=0; i<2; i++){
        printf("\nStudent %d  ",i+1);
        printf("%s  ",s[i].name);
        printf("%d  ",s[i].roll);
        printf("\n");
    }


    for(int i=0; i<2; i++){
      for(int j=0; j<2-i; j++){
         if(strcmp(s[j+1].name,s[j].name)){
             temp= s[j+1];
             s[j+1]=s[j];
             s[j]=temp;
         }
        }
    }
    
    printf("After sorting:");
    for(int i=0; i<2; i++){
        printf("\nStudent %d  ",i+1);
        printf("%s  ",s[i].name);
        printf("%d  ",s[i].roll);
        printf("\n");
    }

    return 0;
}