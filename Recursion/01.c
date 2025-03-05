#include<stdio.h>
void num(int i);
int main(){
    int i;
printf("The natural numbers are : \n");

for(i=0;i<50;i++){
    num(i);
}
return 0;



}
void num(int i){
printf("%d ",i+1);
}

