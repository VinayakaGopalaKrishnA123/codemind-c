#include<stdio.h>
int main(){
    int n,i,k,d,cnt,np;
    scanf("%d",&n);
    np=0;
    for(i=1;i<=n;i++){
        cnt=0;
        if(n%i==0){
            k=i;
            for(d=1;d<=k;d++){
                if(k%d==0){
                    cnt++;
                }
            }
            if(cnt>2){
              np++;
            }
        }
    }
    printf("%d",np+1);
}