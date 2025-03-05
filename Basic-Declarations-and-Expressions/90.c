#include<stdio.h>
int compute(int n){
if(n==9)
    return 11;
int r=0,x,y=1;

for(x=n/10;x>0;x=x/10){


    r=r*10+x%10;
    y=y*10;
}
return n*y+r;
}
int p(int n){
    int i,f;
    for(i=2;i*i<=n;i++){
        f=0;
        if(n%i==0){
            f=1;
            break;
        }
    }
    if(f==0){
        printf("%d\n",n);
    }
}
int main(){
int a,b,x=0;
printf("Input two numbers (separated by a space):");
scanf("%d%d",&a,&b);
printf("List of prime palindromes:\n");
for(;x<=b;a++){
    x=compute(a);
    p(x);
}
}
