#include<stdio.h>
#include<math.h>

int main(){

    int x1,x2,y1,y2;
    printf("Hello please enter x1:");

    scanf("  %d",&x1);
    printf("Hello please enter x2:");
    scanf("  %d",&x2);
    printf("Hello please enter y1:");
      scanf("  %d",&y1);

    
    printf("Hello please enter y2:");
    scanf("  %d",&y2);

    float ans = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("ans %f \n",ans);


    return ans;
    
}