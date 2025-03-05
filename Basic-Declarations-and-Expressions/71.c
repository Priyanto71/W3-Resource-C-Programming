#include<stdio.h>
int main(){
    char s1[99],s2[99];
    int x;
    printf("Input a string: ");
    scanf("%s",&s1);
    for(x=0;s1[x]!='\0';x++){
        s2[x]=s1[x];
        s2[x]='\0';
    }
    printf("Original string: %s\n",s2);
    printf("Number of characters = %d\n",x);
}
