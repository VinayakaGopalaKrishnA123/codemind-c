#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && c==b && c==a){
        printf("Equilateral triangle");
    }
    else if(a!=b && c!=b && c!=a){
        printf("Scalene triangle");
    }
    else{
        printf("Isosceles triangle");
    }
}