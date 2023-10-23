#include<stdio.h>
#include<string.h>
int main(){
    char n[100],m[100];
    char*p1=&n,*p2=&m;
    scanf("%s %s",p1,p2);
    if(*p1>*p2) printf("%s",*p1);
    else printf("%s",*p2);
return 0;}


