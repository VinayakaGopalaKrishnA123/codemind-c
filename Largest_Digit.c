#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    int a=n%10;
    int d=n/10;
    while(d>0){
        c=d%10;
        if(c>a) a=c;
        d=d/10;
    }
    printf("%d",a);
}