#include<stdio.h>
int main(){
long c=0;
int l=0,w=0,chr,x=0,y=0;
printf("Input some text:\n");
while((chr=getchar())!=EOF){
    c++;
    if(chr==' ' || chr=='\t'){
        x=0;
    }else if(chr=='\n'){
    l++;
    x=0;
    }else{
    if(x==0){
        w++;
    }
    x=1;
    }
    if(x==0 && y==0){
        printf("\n");
        y=1;
    }else{
    putchar(chr);
    y=0;
    }
}
}
