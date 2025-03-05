#include <stdio.h>
int main() {
int a,b,c;
printf("Input 3 integers: ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
printf("\n---------------------------\n");
printf("Original numbers: %d, %d, %d\n",a,b,c);
 if(a>b && b>c && a>c){
     printf("Sorted numbers: %d, %d, %d",c,b,a);
 }else if(b>a && a>c && b>c){
     printf("Sorted numbers: %d, %d, %d",c,a,b);
 }else if(a>b && b<c && a>c){
     printf("Sorted numbers: %d, %d, %d",b,c,a);
 }else if(c>a && b>c && b>a){
     printf("Sorted numbers: %d, %d, %d",a,c,b);
 }else if(b<a && b<c && c>a){
     printf("Sorted numbers: %d, %d, %d",b,a,c);
 }else{
     printf("Sorted numbers: %d, %d, %d",a,b,c);
 }
}
