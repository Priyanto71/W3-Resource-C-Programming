#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int i;
char s1;
FILE *hi;
hi=fopen("rand.dat","w");
if(hi==NULL){
    printf("ERROR\n");
}
srand(time(NULL));
fprintf(hi, "%d\n",50);
for(i=1;i<=50;i++){
    fprintf(hi, "%.4f\n",(rand()%2001-1000)/2.e3);

}
fclose(hi);
hi=fopen("rand.dat","r");
s1=fgetc(hi);
while(s1!=EOF){
    printf("%c",s1);
    s1=fgetc(hi);

}
fclose(hi);
}
