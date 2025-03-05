#include<stdio.h>
int main(){
char a;
printf("\n");
for(a=65;a<=122;a=a+1){
    if(a>90 && a<97)
        continue;

    printf("[%d-%c]",a,a);


}


}
