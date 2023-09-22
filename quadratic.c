#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,D;

    printf("Enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);

    D = b*b - 4*a*c;

    if (D>0)
    {
        int x1= (-b + sqrt(D))/(2*a);
        int x2= (-b - sqrt(D))/(2*a);
        printf("Roots : %d, %d", x1,x2);
    }
    else if(D==0){
        int x = -b/(2*a);
        printf("Root : %d",x);
    }
    else{
        int x = -b/(2*a);
        int y = sqrt(-D)/(2*a);
            if(y<0){
                printf("Root %d +- %di",x,-y);
            }else {
                printf("Root %d +- %di",x,y);
            }
    }

    return 0;
}