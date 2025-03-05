#include<stdio.h>
int main(){
int x,i,j,n[10];
printf("Input number of histogram bar (Maximum 10):\n");
scanf("%d",&x);
if(x>10){
    printf("Invalid output");
    return 0;
}
printf("Input the values between 0 and 10 (separated by space):\n");
for(i=0;i<x;i++){
scanf("%d",&n[i]);
if(n[i]<0 || n[i]>10){
    break;
}
}
printf("Histogram:\n");
for(i=0;i<x;i++){
        for(j=0;j<n[i];j++){

printf("#");
        }
        printf("\n");
}

}
