#include<stdio.h>
int main(){
int x,a,b,c,d,e,n=0;
printf("Input a five-digit number: ");
scanf("%d",&x);
if(x<9999 || x>99999){
    printf("Invalid Value");
    return 0;
}else{
n=x;
a=x%10;
x=x/10;
b=x%10;
x=x/10;
c=x%10;
x=x/10;
d=x%10;
x=x/10;
e=x%10;
}
if(a==b && b==c && c==d && d==e){
    printf("%d is a palindrome.",n);
}else{
printf("%d is not a palindrome.",n);
}
}
