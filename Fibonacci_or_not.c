#include<stdio.h>
int main(){
    int n,i,c3;
    scanf("%d",&n);
    int c1=0;
    int c2=1;
    int count=0;
    for(i=1;i<=n+2;i++){
        c3=c1+c2;
        if(c3==n){
            count=1;
            printf("True");
            break;
        }
        else count=0;
        c2=c1;
        c1=c3;
    }
    if(count==0) printf("False");
}