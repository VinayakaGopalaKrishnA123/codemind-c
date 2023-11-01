#include<stdio.h>
int main(){
    int a,n;
    scanf("%d%d",&a,&n);
    if((2*a)>=(n*(n+1))) printf("YES");
    else printf("NO");
}