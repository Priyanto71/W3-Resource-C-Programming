#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int h,m;
double a;
int n[13]={0,30,60,90,120,150,180,210,240,270,300,330,0};
printf("Input hour(h) and minute(m) (separated by a space):");
scanf("%d%d",&h,&m);
a = n[h] - m*5.5;
if(a<0){
    a=-a;
}
if(a>180){
    a=360-a;
}
if(m<10){
    printf("At %d:0%d the angle is %.1lf degrees.\n",h,m,a);
}else{
  printf("The angle is %.1lf degrees at %d:%d.",a,h,m);
}
}
