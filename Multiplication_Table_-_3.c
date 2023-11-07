#include<stdio.h>
int main(){
    int n,a,b,m,i;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++){
        m=n*i;
        printf("%d x %d = %d
",n,i,m);
    }
}