#include<stdio.h>
int main(){
int x,y,i;
printf("Input the first integer: ");
scanf("%d",&x);
printf("Input the second integer: ");
scanf("%d",&y);
for(i=x;i<y;i++){
    if(i%7==2 || i%7==3){
        printf("%d\n",i);
    }

}

}
