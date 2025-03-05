#include<stdio.h>
#include<string.h>
typedef struct{
  int page;
  char w[50];
} STR;

int main(){
  STR x, str[10000];
  int i=0,j,k;
  int c=0;
  printf("Input pairs of a word and a page_no number:\n");
  while(scanf("%s %d",str[i].w,&str[i].page)!=EOF){
    i++;
  }
  for(j=0;j<i;j++){
    for(k=i-1;0<k;k--){
      if(strcmp(str[k].w,str[k-1].w)<0){
        x=str[k];
        str[k]=str[k-1];
        str[k-1]=x;
      }
      else if(strcmp(str[k].w,str[k-1].w)==0){
        if(str[k].page<str[k-1].page){
          x=str[k];
          str[k]=str[k-1];
          str[k-1]=x;
        }
      }
    }
  }
  printf("\nWord and page_no number in alphabetical order:\n");
  for(j=0;j<i;j++){
    if(j!=0){
      if(strcmp(str[j].w,str[j-1].w)==0){
        printf(" %d",str[j].page);
      }
      else{
        printf("\n%s\n%d",str[j].w,str[j].page);
      }
    }
    else{
      printf("%s\n%d",str[j].w,str[j].page);
    }
  }

  printf("\n");
}

