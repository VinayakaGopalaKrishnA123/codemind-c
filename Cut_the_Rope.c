#include<stdio.h>
int main(){
    int n,x;
    scanf("%d%d",&n,&x);

    if ((x%2)==0 && (n-x)%2!=0) printf("NO");
    else printf("YES");
}