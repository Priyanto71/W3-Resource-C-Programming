#include<stdio.h>
int main(){
int i,n;
printf("Input number of lines: ");
scanf("%d",&n);
for(i=1;i<=n;i++){

    printf("%d %d %d\n",i,i*i,i*i*i);
}


}
