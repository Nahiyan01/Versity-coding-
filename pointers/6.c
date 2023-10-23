#include<stdio.h>
int main(){
    char n,m;
    char*p1=&n,*p2=&m;
    scanf("%c %c",p1,p2);
    if(*p1>*p2) printf("%c",*p1);
    else printf("%c",*p2);
return 0;}


