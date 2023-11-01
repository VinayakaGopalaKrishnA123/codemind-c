#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((2*a)<=b) printf("%d",1500-(6*a)-(4*b));
    else printf("%d",1500-(2*a)-(6*b));
}