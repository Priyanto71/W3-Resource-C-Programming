#include<stdio.h>
int main(){
    int max,min,i,j,k,x,n,s[8]={0};
    printf("Input an integer created by 8 numbers (0 to 9):\n");
    scanf("%d",&n);
    for(i=0;n!=0;i++){
        s[i]=n%10;
        n/=10;
    }
     for(i=0;i<8;i++){
         for(j=1;j+i<8;j++){
             if(s[j-1]<s[j]){
                 x=s[j-1];
                 s[j-1]=s[j];
                 s[j]=x;
             }
         }
     }
     max= 0;
  for (i = 0; i < 8; i++) {
    max *= 10;
    max+= s[i];
  }
  for (i = 0; i * 2 < 8; i++) {
    x = s[i];
    s[i] = s[7 - i];
    s[7 - i] = x;
  }

     min=0;
     for(i=0;i<8;i++){
         min*=10;
         min+=s[i];
     }
     printf("The difference between the largest integer and the smallest integer.\n");
     printf("%d - %d = %d",max,min,max-min);
}


