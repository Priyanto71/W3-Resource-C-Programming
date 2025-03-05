#include<stdio.h>
int main(){
int y,m,d;
printf("Input no. of days: ");
scanf("%d",&d);
y=d/365;
d=d-(y*365);
m=d/30;
d=d-(m*30);
printf("%d Year(s)\n%d Month(s)\n%d Day(s)",y,m,d);
}
