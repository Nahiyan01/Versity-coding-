#include<stdio.h>
int main(){
    int n;
    int *p1;
    p1 = &n;
    scanf("%d",p1);
    if(*p1>0) printf("Positive");
    else if(*p1<0) printf("Negetive");
    else printf("Zero");
return 0;}


