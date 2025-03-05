#include<stdio.h>
int main(){
int money,total;
printf("Input the amount: ");
scanf("%d",&money);
total=money/100;
printf("There are: \n");
printf("%d Note(s) of 100.00\n",total);
money=money-(total*100);
total=money/50;
printf("%d Note(s) of 50.00\n",total);
money=money-(total*50);
total=money/20;
printf("%d Note(s) of 20.00\n",total);
money=money-(total*20);
total=money/10;
printf("%d Note(s) of 10.00\n",total);
money=money-(total*10);
total=money/5;
printf("%d Note(s) of 5.00\n",total);
money=money-(total*5);
total=money/2;
printf("%d Note(s) of 2.00\n",total);
money=money-(total*2);
total=money/1;
printf("%d Note(s) of 1.00\n",total);
}
