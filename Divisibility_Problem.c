#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    float d = (a*1.0)/b;
    int c = ceil(d);
    int e = (c*b)-a;
    printf("%d",e);
    
}