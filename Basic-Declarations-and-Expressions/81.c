#include<stdio.h>
int main(){
int i,j,x;
scanf("%d",&x);
if(x<1 || x>10){
    printf("Invalid value");
    return 0;
}
for(i=1;i<=x;i++){

for(j=1;j<=x;j++){
       if(i==1 || i==x || j==1 || j==x){
        printf("#");
       }else{
           printf(" ");
    }
}
printf("\n");
}
}
