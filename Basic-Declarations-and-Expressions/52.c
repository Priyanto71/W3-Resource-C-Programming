#include<stdio.h>
int main(){
int i,n[5],j,min=100;
printf("Input the array elements:\n");
for(i=0;i<5;i++){
    scanf("%d",&n[i]);


}
for(i=0;i<5;i++){

    if(n[i]<min){
        min=n[i];
        j=i;
    }
}
printf("Smallest Value: %d\n",min);
printf("Position of the element: %d",j);


}
