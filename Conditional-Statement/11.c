#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
double x1,x2,d,e;
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
e=sqrt(d);
x1=(-b+e)/2*a;
x2=(-b-e)/2*a;
if(d<0){
    printf("Root are imaginary;\nNo solution.");
}else{
    printf("x1= %lf\nx2= %lf",x1,x2);
}

}
