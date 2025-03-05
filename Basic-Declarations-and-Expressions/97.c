#include<stdio.h>
int main(){
int c,x;
long chr=0,w=0,l=0;
printf("Input a string and get number of charcters, words and lines:\n");
while((c=getchar()) !=EOF){
    chr++;
    if(c==' ' || c=='\t'){
        x=0;
    }else if(c=='\n'){
    l++;
    x=0;
    }else{
    if(x==0){
    w++;
    }
    x=1;
}
}
printf("Number of Characters = %ld\n",chr);
printf("Number of words = %ld\n",w);
printf("Number of lines = %ld\n",l);
}
