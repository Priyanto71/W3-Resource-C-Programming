#include<stdio.h>
int main(){
int x[99],i;
float sum=0,avg,n;
printf("Input each number on a separate line (888 to exit):");
for(i=0; ;i++){
scanf("%d",&x[i]);
if(x[i]==888){
    break;

}
sum=sum+x[i];
n++;
}
avg=sum/n;
printf("The average value of the said numbers is %f",avg);




}
