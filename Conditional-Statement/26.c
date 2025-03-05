#include<stdio.h>
int main(){
int x,a,b;
float div;
scanf("%d",&a);
scanf("%d",&b);
printf("1-Addition\n");
printf("2-Substraction\n");
printf("3-Multiplication\n");
printf("4-Division\n");
scanf("%d",&x);
switch(x){
case 1:
    printf("The Addition of %d and %d is: %d",a,b,a+b);
    break;
case 2:
    printf("The Substraction of %d and %d is: %d",a,b,a-b);
    break;
case 3:
    printf("The Multiplication of %d and %d is: %d",a,b,a*b);
    break;
case 4:
    if(b==0){
            printf("The 2nd integer is zero. Divided by zero.");
    }else{
        div=(a*1.0)/b;
    printf("The division of %d and %d is: %.2f",a,b,div);
    }
    break;
}
}
