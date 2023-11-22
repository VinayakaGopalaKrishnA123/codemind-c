#include<stdio.h>
int main(){
    int n,i,k;
    char c='A';
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n;k++){
            printf("%c ",c);
        }
        c+=1;
        printf("
");
    }
}
    