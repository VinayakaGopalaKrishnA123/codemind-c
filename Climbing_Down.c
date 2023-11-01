#include<stdio.h>
int main(){
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    float w = a/(x*1.0);
    float j = b/(y*1.0);
    if(w>j) printf("Jesse");
    else if(w<j) printf("Walter");
    else if(w==j) printf("Both");
    
    
}