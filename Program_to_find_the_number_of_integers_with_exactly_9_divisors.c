#include<stdio.h>
int main(){
	int n,i,k,cnt;
	scanf("%d",&n);
	int tot=0;
	for(i=1;i<=n;i++){
		k=0;
		cnt=0;
		for(k=1;k<=n;k++){
			if(i%k==0){
				cnt++;
			}
		}
		if(cnt==9){
			tot++;
			printf("%d ",i);
		}
	}
	printf("
Total=%d",tot);
}