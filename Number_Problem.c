#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int d=abs(a-b);
    int n=(d+9)/10;
    printf("%d",n);
}