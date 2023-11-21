#include<stdio.h>
int main(){
    int n,k,a=0;
    scanf("%d",&n);
    for(k=1;k<n;k++){
        if(n%k==0){
            a+=k;
        }
    }
    if(a==k){
        printf("True");
    }
    else{
        printf("False");
    }
}