// 1 2 3 4 5 4 3 2 1  
//   1 2 3 4 3 2 1   
//     1 2 3 2 1     
//       1 2 1        
//         1          

#include<stdio.h>
int main(){
    int i,j,spaces=0;

    for(i=5; i>=1; i--){
        for(spaces=0; spaces<=5-i; spaces++){
            printf("\t");
        }
           for(int j=1; j<=i; j++){
             printf("%d\t",j);
           }
           for(int j=i-1; j>=1; j--){
             printf("%d\t",j);
           }
        printf("\n");
    }

    return 0;
}