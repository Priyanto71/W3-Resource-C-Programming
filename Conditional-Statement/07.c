#include<stdio.h>
int main(){
int h;
scanf("%d",&h);
if(h>=165){
    printf("The person is Tall.");
}else if(h==150){
    printf("The person is Average height.");
}else if(h<150){
    printf("The person is Dwarf.");
}else{
    printf("The person is Abnormal height.");
}

}
