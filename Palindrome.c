#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int d=n,pn=0;
    while(d>0){
        i=d%10;
        pn=pn*10+i;
        d=d/10;
    }
    if(n==pn) printf("True");
    else printf("False");
    
}