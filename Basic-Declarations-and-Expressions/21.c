#include<stdio.h>
int main(){
int x;
printf("Input an integer: ");
scanf("%d",&x);
if(x>=0 && x<=20){
printf("Range [0, 20]");
}
else if(x>=21 && x<=40){
printf("Range (21, 40]");
}
else if(x>=41 && x<=60){
printf("Range (41, 60]");
}
else if(x>=61 && x<=80){
printf("Range (61, 80]");
}else{
printf("Not in any range");
}
}
