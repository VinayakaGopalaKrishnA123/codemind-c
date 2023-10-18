#include<stdio.h>
int main(){
	int n,k,x,y;
	scanf("%d%d%d%d",&n,&k,&x,&y);
	if (y>x){
		printf("%d",n*x);
	}
	if(x>y){
		
		printf("%d",(k*x)+((n-k)*y));
		
	} 
}