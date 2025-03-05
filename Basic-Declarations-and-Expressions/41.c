#include<stdio.h>
int main(){
int x=0,i,j=1,a;
printf("Input number of lines: ");
scanf("%d",&a);
for(i=1;i<=a;i++){

    while(x<3){
        printf("%d ",j++);
    x++;
    }
    x=0;
    printf("\n");
}



}
