#include<stdio.h>
#include<string.h>

int main() {

    
    int a,b,c;

    printf("Enter the value of a \n");
    scanf("%d",&a);

    printf("Enter the value of b \n");
    scanf("%d",&b);

    printf("Enter the value of c \n");
    scanf("%d",&c);
    int e=a+b+c;
    int p=a*b*c;
    int m=(a/b);
    
    printf("the sum of a b c is %d  the product is %d the division is %d \n",e,p,m);   
    


    printf("the value of a, b, c is %d %d %d \n", a,b,c);
   return 0;
}