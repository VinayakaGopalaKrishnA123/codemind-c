#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i,k,cnt,j=0;
    for(i=1;i<=a;i++){
    	cnt=0;
        for(k=1;k<=i;k++){
            if(i%k==0) cnt++;
        }
        if(cnt==9) {
            j++; 
            printf("%d ",i);
        }
        
    }
    printf("
Total=%d",j);
}