#include<stdio.h>
int main(){
    int n,m,i;
    scanf("%d%d",&n);
    i=1;
    while(i<=12){
        m=n*i;
        printf("%d x %d = %d
",n,i,m);
        i++;
    }
}