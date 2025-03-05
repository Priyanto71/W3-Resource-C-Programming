#include<stdio.h>
int main(){
double a,b,c,d,max,min,dif;
printf("Input four numbers:\n");
scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
if(a>b && a>c && a>d){
    max=a;
} else if(b>a && b>c && b>d){
    max=b;
} else if(c>b && a<c && c>d){
    max=c;
} else{
   max=d;
}
if(a<b && a<c && a<d){
    min=a;
} else if(b<a && b<c && b<d){
    min=b;
} else if(c<b && a>c && c<d){
    min=c;
} else{
   min=d;
}
dif=max-min;
printf("Difference is %lf",dif);
}
