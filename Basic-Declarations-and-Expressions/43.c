#include<stdio.h>
int main(){
int p,q,i,j,x=1;
printf("Input number of lines: ");
scanf("%d",&p);
printf("Number of characters in a line: ");
scanf("%d",&q);
for(i=1;i<=p;i++){
for(j=1;j<=q;j++){
    printf("%d ",x);
    x++;
}
printf("\n");
}



}
