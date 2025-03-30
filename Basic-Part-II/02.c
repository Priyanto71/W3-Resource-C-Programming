#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int n1,n2;
    char t;
    scanf("%d%d",&n1,&n2);
    if(isupper(s[n1-1])){
        s[n1-1]=tolower(s[n1-1]);
    }
    t=s[n1-1];
    s[n1-1]=s[n2-1];
    s[n2-1]=t;
    printf("%s",s);
}
