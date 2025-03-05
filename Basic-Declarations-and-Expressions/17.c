#include<stdio.h>
int main(){
int h,m,s;
printf("Input seconds: ");
scanf("%d",&s);
h=s/3600;
s=s-(h*3600);
m=s/60;
s=s-(m*60);
printf("There are:\nH:M:S - %d:%d:%d",h,m,s);
}
