#include<stdio.h>
int main(){
    int i,n,d,s,p;
    scanf("%d",&n);
    s=0;
    p=1;
    i=n;
    while(i>0){
        d=i%10;
        s=s+d;
        p=p*d;
        i=i/10;
    }
    if(s==p) printf("Spy Number");
    else printf("Not Spy Number");
}