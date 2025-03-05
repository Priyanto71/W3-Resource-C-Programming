#include<stdio.h>
int main(){
int mat,phy,che,matPhy,sum=0;
printf("Input the marks obtained in Physics :");
scanf("%d",&phy);
printf("Input the marks obtained in Chemistry :");
scanf("%d",&che);
printf("Input the marks obtained in Mathematics :");
scanf("%d",&mat);
sum=phy+che+mat;
matPhy=mat+phy;
if((mat>=65 && phy>=55 && che>=50) && (sum>=190 || matPhy>=140)){
    printf("The candidate is eligible for admission.");
}else{
    printf("The candidate is not eligible for admission.");
}
}
