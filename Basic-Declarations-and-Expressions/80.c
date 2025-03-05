#include<stdio.h>
int main(){
int i,j,x;
scanf("%d",&x);
if(x<1 || x>10){
    printf("Outside limit");
}else{
for(i=1;i<=x;i++){
    for(j=1;j<=x;j++){
        printf("#");
    }
    printf("\n");
}
}
}
