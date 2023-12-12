#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    int b[n],sum1=0,sum2=0;
    for(i=0;i<=n-1;i++){
        scanf("%d",&b[i]);
        if(b[i]%2==0) sum1=sum1+b[i];
        if(b[i]%2!=0) sum2=sum2+b[i];
    }
    printf("%d",abs(sum1-sum2));
    
}