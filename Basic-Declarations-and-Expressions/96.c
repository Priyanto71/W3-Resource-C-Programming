#include<stdio.h>
#include<conio.h>
int main(){
int b=0,l=0,t=0,c;
printf("Number of blanks, tabs, and newlines:\n");
printf("Input few words/tab/newlines\n");
for (; (c = getchar()) != EOF;){
    if(c==' '){
        ++b;
    }
    if(c=='\n'){
        ++l;
    }
    if(c=='\t'){
        ++t;
    }
}
printf("blank=%d,tab=%d,newline=%d",b,t,l);

}
