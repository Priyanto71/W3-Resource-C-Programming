#include<stdio.h>
int main(){
int n[5],j,i;
printf("Input the 5 members of the array: ");
for(i=0;i<5;i++){
    scanf("%d",&n[i]);
}
for(i=0;i<5;i++){
        if(i<3){
        j=n[i];
        n[i]=n[4-i];
        n[4-i]=j;
        }
}
for(i=0;i<5;i++){
    printf("array_n[%d] = %d\n",i,n[i]);
}
}
