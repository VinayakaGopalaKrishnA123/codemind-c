#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float d=(float)b*c;
    int e=ceil(a/d);
    printf("%d",e);
    
}