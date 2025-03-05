#include<stdio.h>
#include<ctype.h>
int main(){
char a;
scanf("%c",&a);
if(isalpha(a)!=0){
    printf("This is an alphabet.");
}else if(isdigit(a)!=0){
    printf("This is a digit.");
}else{
printf("This is a special character.");
}



}
