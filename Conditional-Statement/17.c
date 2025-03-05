#include<stdio.h>
int main(){
char a;
scanf("%c",&a);
if(a=='A' || a=='a' || a=='E' ||a=='e' ||a=='I' ||a=='i' ||a=='O' ||a=='o' ||a=='U' ||a=='u'){
    printf("The alphabet is a vowel.");
}else{
    printf("The alphabet is a consonant.");
}

}
