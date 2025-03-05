#include<stdio.h>
#include<math.h>
int main(){
long i,j=1,m,sum=0;
printf("Input a positive number less than 100: ");
scanf("%ld",&m);
if(m<1 || m>100){
    printf("Invalid Input");
}else{
for(i=1;j<=m;i++){
    sum=sum+(j*j*j*j);
    j=j+i;
}
printf("Sum of the series is %ld",sum);
}
}
