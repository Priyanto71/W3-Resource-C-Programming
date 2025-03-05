#include<stdio.h>
#include<string.h>
int main(){
    short len1,len2;
    char n1[50],n2[50];
    printf("Input the first string:\n");
    scanf("%s",&n1);
    printf("Input the second string:\n");
    scanf("%s",n2);
    len1=strlen(n1);
    len2=strlen(n2);
    printf("Is second string present in the last part of the first string?\n");
    if(len1==len2){
        if(strcmp(n1,n2)==0){
            printf("Present!\n");

        }else{
            printf("Not Present!\n");
        }
    }else if(len1<len2){
        printf("Not Present!\n");
    }else if(strstr(&n1[len1 - len2 - 1], n2)){
        printf("Present!\n");
    }else{
        printf("Not Present!\n");

    }
}
