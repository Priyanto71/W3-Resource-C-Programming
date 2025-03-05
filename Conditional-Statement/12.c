#include<stdio.h>
int main(){
    int r,p,c,ca,sum=0;
    char n[101];
    float percent;

printf("Input the Roll Number of the student :");
scanf("%d",&r);
printf("Input the Name of the Student :");
scanf("%s",n);
printf("Input the marks of Physics, Chemistry and  Computer Application : ");
scanf("%d%d%d",&p,&c,&ca);
sum=p+c+ca;
printf("Roll No : %d\n",r);
printf("Name of Student : %s\n",n);
printf("Marks in Physics : %d\n",p);
printf("Marks in Chemistry : %d\n",c);
printf("Marks in Computer Application : %d\n",ca);
printf("Total Marks = %d\n",sum);
percent=sum/3.0;
printf("Percentage = %.2f\n",percent);
if(percent>=60){
    printf("Division = First");
}else if(percent<60 && percent>=48){
    printf("Division = Second");
}else if(percent<48 && percent>=36){
    printf("Division = Third");
}else{
    printf("Fail");
}
}
