#include<stdio.h>
int main(){
    int n,c,d;
    scanf("%d",&n);
    d=n>0?n:-1*n;
    int s=0;
    while (d>0){
        c=d%10;
        s=s*10+c;
        d/=10;
    }
    n>0?printf("%d",s):printf("%d",-1*s);
}