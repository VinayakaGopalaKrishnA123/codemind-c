#include<stdio.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("
");
    }
}