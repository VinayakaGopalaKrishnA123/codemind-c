#include<stdio.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=65;k<=65+n-i;k++){
            printf("%c ",k);
        }
        printf("
");
    }
}