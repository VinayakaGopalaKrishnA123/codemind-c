#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    int d=n;
    int s=0;
    while (d>0){
        c=d%10;
        s=s*10+c;
        d/=10;
    }
    printf("%d",s);
}