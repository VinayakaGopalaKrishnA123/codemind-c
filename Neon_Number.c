#include<stdio.h>
int main(){
    int n,i,s=0;
    scanf("%d",&n);
    int d=n*n;
    while(d>0){
        i=d%10;
        s=s+i;
        d=d/10;
    }
    if(s==n) printf("Neon Number");
    else printf("Not Neon Number");
}