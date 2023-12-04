#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=2*n;i>=1;i-=2){
        printf("%d ",i);
    }
}