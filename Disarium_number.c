#include<stdio.h>
#include<math.h>
int main(){
    int i,n,c,cnt=0;
    scanf("%d",&n);
    int d=n;
    while(d>0){
        cnt++;
        d/=10;
    }
    int l=n;
    int sum=0;
    while(l>0){
        for(i=cnt;i>=1;i--){
            c=l%10;
            l=l/10;
            sum=sum+pow(c,i);
        }
    }
    if(sum==n) printf("True");
    else printf("False");
}