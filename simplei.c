#include<stdio.h>
#include<math.h>

void main(){

int p,t,r;
printf("Enter  principle, time and intrest respectively");
scanf("%d %d %d ",&p,&t,&r);


int ans= (p*t*r)/100;

printf("The intrest is %d ",&ans);
}