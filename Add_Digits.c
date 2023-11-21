#include<stdio.h>
int main(){
	int n,d,b=1,i=0;
	scanf("%d",&n);
	int a=0;
	while(b>0){
		d=n%10;
	
		i=n/10;
		a=d+i;
		n=a;
		if(a<10){
			printf("%d",a);
		    break;
	    }
	}
}