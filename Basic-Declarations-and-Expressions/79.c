#include<stdio.h>
int main(){
int a,b,c,d;
printf("  x\tx+2\tx+4\tx+6\n");
printf("--------------------------------\n");
for(a=1;a<=15;a=a+3){
        b=a+2;
        c=a+4;
        d=a+6;
    printf("  %d\t%d\t%d\t%d\n",a,b,c,d);
}
}
