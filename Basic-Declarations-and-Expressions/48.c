#include<stdio.h>
int main(){
int n[5],i,a;
printf("Input the 5 members of the array:\n");
for(i=0;i<5;i++){
    scanf("%d",&a);
    if(a>0){
        n[i]=a;
    }else{
    n[i]=100;
    }
}
printf("Array values are:\n");
for(i=0;i<5;i++){
    printf("n[%d] = %d\n",i,n[i]);
}




}
