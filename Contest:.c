#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d = b+(2*c);
    if(d>=a){
        printf("Qualify");
    }
    else if(d<a){
        printf("Not Qualify");
    }
}