#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    int cnt=0;
    for(i=a;i<=b;i++){
        if(i%3==0){
            cnt++;
        }
    }
    printf("%d",cnt);
}