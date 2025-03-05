#include<stdio.h>
int add(int i, int sum);
int main(){
int a,b,i,sum=0;
scanf("%d %d",&a,&b);
printf("Input the last number of the range starting from %d : %d\n\n",a,b);

printf("The sum of numbers from %d to %d : \n",a,b);
    for(i=a;i<=b;i++){
       sum= add(i,sum);
    }

printf("%d",sum);
}
int add(int i, int sum){
    sum=sum+i;
return sum;

}
