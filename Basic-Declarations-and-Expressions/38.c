#include<stdio.h>
int main(){
float x,y,div;
printf("Input two numbers:\n");
printf("x: ");
scanf("%f",&x);
printf("y: ");
scanf("%f",&y);
if(y!=0){
    div=x/y;
    printf("%.1f",div);
}else{
printf("Division is not possible");
}
}
