#include<stdio.h>
int main(){
    float x,y;
    printf("Input the item price: ");
    scanf("%f",&x);
    if(x>=100 && x<=400){
        y=x*0.14;
        x=x+y;
        printf("New Item price: %.2f\n",x);
        printf("Increased price: %.2f\n",y);
        printf("Increase Percentage: 14%%");
    }else if(x>=400.01 && x<=800){
        y=x*0.11;
        x=x+y;
        printf("New Item price: %.2f\n",x);
        printf("Increased price: %.2f\n",y);
        printf("Increase Percentage: 11%%");
    }else if(x>=800.01 && x<=1200){
        y=x*0.09;
        x=x+y;
        printf("New Item price: %.2f\n",x);
        printf("Increased price: %.2f\n",y);
        printf("Increase Percentage: 9%%");
    }else if(x>=1200.01 && x<=2000){
        y=x*0.06;
        x=x+y;
        printf("New Item price: %.2f\n",x);
        printf("Increased price: %.2f\n",y);
        printf("Increase Percentage: 6%%");
    }else if(x>2000){
        y=x*0.03;
        x=x+y;
        printf("New Item price: %.2f\n",x);
        printf("Increased price: %.2f\n",y);
        printf("Increase Percentage: 3%%");
    }
}
