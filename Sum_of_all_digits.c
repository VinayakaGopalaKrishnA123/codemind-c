#include<stdio.h>
int main(){
    int n,r;
    scanf("%d",&n);
    int s=0;
    while(n>0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("%d",s);
}