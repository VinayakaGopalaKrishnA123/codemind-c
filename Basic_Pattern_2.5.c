#include<stdio.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    int d=65+n-1;
    char c=d;
    for(i=1;i<=n;i++){
        for(k=1;k<=i;k++){
            printf("%c ",c);
        }
        c--;
        printf("
");
    }
}