#include<stdio.h>
int main(){
    int n[5],i,position=0,j,max=0;
printf("Input 5 integers: \n");
for(i=0;i<5;i++){
scanf("%d",&n[i]);
}
for(j=0;j<5;j++){
    if(n[j]>max){
        max=n[j];
        position=j;
    }
}
printf("Highest value: %d\n",max);
printf("Position: %d",position+1);
}
