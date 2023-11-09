#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int i,k,n,count;
    for(i=a;i<=b;i++){
       n=i;
       while(n>0){
           k=n%10;
           if(k!=0 && i%k==0){
              count = 1;
              n=n/10;
            }
            else {
                count=0;
                n=0;
            }
        }
        if(count==1) printf("%d ",i);
    }
}