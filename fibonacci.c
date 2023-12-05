#include<stdio.h>
int main(){
    int n,i,c3;
    scanf("%d",&n);
    int c1=0;
    int c2=1;
    printf("%d ",c1);
    for(i=1;i<=n-1;i++){
        c3=c1+c2;
        printf("%d ",c3);
        c2=c1;
        c1=c3;
    }
}