#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
  char t[1536];
  int c= 0;
  char *x;
  printf("English sentences consisting of delimiters and alphanumeric characters on one line:\n");
  fgets(t, sizeof(t), stdin);
  printf("\nExtract words of 3 to 6 characters length from the said sentence:\n");
  for (x = strtok(t, " .,\n"); x != NULL; x = strtok(NULL, " .,\n")) {
    const int l = strlen(x);
    if (3 <= l && l <= 6) {
      if (c++) putchar(' ');
      fputs(x, stdout);
    }
  }
  puts("");
}

