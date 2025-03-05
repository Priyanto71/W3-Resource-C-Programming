#include<stdio.h>
int main(){
int x,y;
printf("Input the first number: ");
scanf("%d",&x);
printf("Input the second number: ");
scanf("%d",&y);
if(x%y==0 || y%x==0){
printf("Multiplied!");
}else {
printf("Not Multiplied!");
}
}
