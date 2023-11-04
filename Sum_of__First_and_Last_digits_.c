#include<stdio.h>
#include<math.h>
int main(){
	int n,b,e,c;
	scanf("%d",&n);
	b=n%10;
	int d=n;
	int cnt=0;
	while(d>0){
		cnt++;
		d=d/10;
	}
	c=pow(10,(cnt-1));
	e=n/c;
	printf("%d",b+e);
}