#include<stdio.h>
int main(){
    int n;
char *c="abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("List of integer equivalents of letters (a-z, A-Z).\n");
printf("==================================================\n");

for(n=0;n<53;n++){
    printf("%d ",c[n]);
    if((n+1)%6==0){
        printf("\n");
    }
}



}
