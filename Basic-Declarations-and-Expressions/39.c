#include<stdio.h>
int main(){
int x,y,i,sum=0;
printf("Input the first integer: ");
scanf("%d",&x);
printf("Input the second integer: ");
scanf("%d",&y);
for(i=x;i<=y;i++){
    if(i%17!=0){
        sum=sum+i;
    }

}
printf("Sum: %d",sum);
}
