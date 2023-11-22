#include<stdio.h>
int main(){
    int n,i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n;k++){
            if(i%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("
");
    }
}