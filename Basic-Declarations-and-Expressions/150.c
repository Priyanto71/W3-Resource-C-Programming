#include <stdio.h>
#include <string.h>
int addsub();
int muldiv();
int term();

char in[101];
int p = 0;
int term(){
  int n = 0;
  if(in[p] == '('){
    p++;
    n = addsub();
    if(in[p] == ')'){
      p++;
      return n;
    }
  }else{
    while('0' <= in[p] && in[p] <= '9'){
      n = n*10 + (in[p] - '0');
      p++;
    }
  }
  return n;
}

int muldiv(){
  int f,s;

  f = term();

  for(;;){
    if(in[p] == '*'){
      p++;
      s = term();
      f *= s;
    }else if(in[p] == '/'){
      p++;
      s = term();
      f/= s;
    }else{
      return f;
    }
  }
}
int addsub(){
  int f,s;

  f = muldiv();

  for(;;){
    if(in[p] == '+'){
      p++;
      s = muldiv();
      f += s;
    }else if(in[p] == '-'){
      p++;
      s = muldiv();
      f -= s;
    }else{
      return f;
    }
  }
}

int main(){
  int n,i,j;
  printf("Input an expression using +, -, *, / operators:\n");
  scanf("%s",in);
  printf("%d\n",addsub());
}

