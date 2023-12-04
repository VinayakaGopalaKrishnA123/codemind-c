#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%d",i);
        }
        for(k=i+1;k<=n;k++){
            printf("*");
        }
        printf("
");
    }
}