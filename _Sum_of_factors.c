#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int s=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    printf("%d ",s);
}