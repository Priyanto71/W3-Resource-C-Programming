#include<stdio.h>
int main(){
int i,m[99];
float n=0,sum=0,avg;
printf("Input Mathematics marks (0 to terminate): ");
for(i=0; ;i++){

scanf("%d",&m[i]);

if(m[i]<=0){
    break;
}
n++;
sum=sum+m[i];
}
avg=sum/n;
printf("Average marks in Mathematics: %.2f",avg);

}
