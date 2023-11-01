#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c && b>c) printf("%d",a+b);
    else if(a>b && a>c && c>b) printf("%d",a+c);
    else if(b>a && b>c && a>c) printf("%d",a+b);
    else if(b>a && b>c && c>a) printf("%d",b+c);
    else if(c>b && c>a && a>b) printf("%d",c+a);
    else if(c>b && c>a && a<b) printf("%d",c+b);
    
}