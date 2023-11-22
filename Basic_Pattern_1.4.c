#include<stdio.h>
int main(){
    int n,i;
    char k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k='A';k<='A'+n-1;k++){
            printf("%c ",k);
        }
        printf("
");
    }
}
    