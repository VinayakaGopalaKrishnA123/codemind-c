#include<stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    int b[n],sum=0;
    for(i=0;i<=n-1;i++){
        scanf("%d",&b[i]);
        sum=sum+b[i];
    }
    printf("%d",sum);
}