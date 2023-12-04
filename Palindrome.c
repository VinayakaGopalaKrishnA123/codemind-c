#include<stdio.h>
int main(){
    int n,p,pn,d;
    scanf("%d",&n);
    p=n;
    pn=0;
    while(p>0){
        d=p%10;
        pn=pn*10+d;
        p=p/10;
    }
    if(pn==n){
        printf("Palindrome");
    }
    else printf("Not Palindrome");
}