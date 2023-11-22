#include<stdio.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k='A';k<='A'+i-1;k++){
            printf("%c ",k);
        }
        printf("
");
    }
}
    