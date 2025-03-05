#include<stdio.h>
int main(){
int x,i;
long sqr;
printf("n= ");
scanf("%d",&x);
for(i=1;i<=x;i++){
    if(i%2==0){
        printf("%d^%d = %d\n",i,i,i*i);

    }
}
}
