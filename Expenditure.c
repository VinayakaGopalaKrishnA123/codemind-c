#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int d = 30*b;
    if(a>=d){
        printf("YES");
    }
    else{
        printf("NO");
    }
}