#include<stdio.h>
int main(){
float i,j=1,sum=0;
for(i=1;i<=7;i=i+2){
        sum=sum+(i/j);
j=j*2;
}
printf("Value of series: %.2f",sum);

}
