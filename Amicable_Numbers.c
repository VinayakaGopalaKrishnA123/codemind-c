#include<stdio.h>
int main(){
    int a,b,i,k;
    scanf("%d %d",&a,&b);
    int x=0,y=0;
    for(i=1;i<a;i++){
        if(a%i==0){
            x=x+i;
        }
    }
    for(k=1;k<b;k++){
        if(b%k==0){
            y=y+k;
        }
    }
    if(x==b && y==a){
        printf("Amicable");
    }
    else printf("Not Amicable");
}