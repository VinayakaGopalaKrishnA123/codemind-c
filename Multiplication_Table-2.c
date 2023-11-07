#include<stdio.h>
int main(){
    int n,a,b,m,i;
    scanf("%d%d",&n,&b);
    i=1;
    while(i<=b){
        m=n*i;
        printf("%d x %d = %d
",n,i,m);
        i++;
    }
}