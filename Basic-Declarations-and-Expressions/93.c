#include<stdio.h>
int prime1(int n);
int main(){
int prime[3500],prime2=0;
prime[prime2++]=2;
for(int n=3;n*n<=1000000000;n++){
   int f=1;
    for(int id=0;id<prime2;id++){
        if(n%prime[id]==0){
        f=0;
        break;
        }
    }
    if(f)prime[prime2++]=n;
}
int N,n;
scanf("%d",&n);
int f=0;
for(int j=0;(j<prime2) && (prime[j]*prime[j]<=n);j++){
    if(n%prime[j]==0){
        n/=prime[j];
        f=1;
        break;
    }
}
if(f && prime1(n))
 printf("It is a Nearly prime number.\n");
 else
    printf("It is not a Nearly prime number.\n");
 return 0;
}
int prime1(int n){
if(n!=2 && n%2==0)
    return 0;
for(int factor =3;factor*factor<=n;factor=factor+2){
    if(n%factor==0)
        return 0;
}
return 1;
}
