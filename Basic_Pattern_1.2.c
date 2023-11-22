#include<stdio.h>
int main(){
	int n,i,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n;k++){
			printf("%d ",k);
		}
		printf("
");
	}
}