#include<stdio.h>
#include<math.h>
int main(){
    int i,n,cnt=0;
    scanf("%d",&n);
    for(i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt>1) printf("Not Prime");
    else printf("Prime");
}