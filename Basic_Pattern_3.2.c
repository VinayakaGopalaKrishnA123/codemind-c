#include<stdio.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=n;k>=i;k--){
            printf("%d ",i);
        }
        printf("
");
    }
}