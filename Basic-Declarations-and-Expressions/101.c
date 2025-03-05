#include <stdio.h>
int main(){
float x;

printf("Input a number: ");
scanf("%f",&x);
if(x>=0 && x<=30){
    printf("Range (0,30]");
}else if(x>30 && x<=50){
    printf("Range (30,50]");
}else if(x>50 && x<=80){
    printf("Range (50,80]");
}else if(x>80 && x<=100){
    printf("Range (80,100]");
}else{
    printf("Out of range");
}
}
