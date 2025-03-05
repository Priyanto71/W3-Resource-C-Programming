#include<stdio.h>
int main(){
char grade;
printf("Input the grade :");
scanf("%c",&grade);
if(grade=='E'){
    printf("You have chosen : Excellent");
}else if(grade=='V'){
    printf("You have chosen : Very Good");
}else if(grade=='G'){
    printf("You have chosen : Good");
}else if(grade=='A'){
    printf("You have chosen : Average");
}else if(grade=='F'){
    printf("You have chosen : Fail");
}


}
