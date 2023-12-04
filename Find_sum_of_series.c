#include<stdio.h>
int main(){
    int n,i;
    float e,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        e=1.0/i;
        s=s+e;
    }
    printf("%.2f",s);
}
