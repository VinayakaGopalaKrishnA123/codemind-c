#include<stdio.h>
int prime(int a){
	int num=a;
	int factorcnt=0;
    int i = 1;
    while(i<=num){
        
        if(num%i==0){
            factorcnt++;
        }
        i++;
    }
    
	if(factorcnt>2){
		return 0;
	}
	else return 1;
}
int palindrome(int b){
	int originalnum=b;
	int res=0;
	while (b>0){
		int r=b%10;
		b=b/10;
		res = res*10+r;
	}
	return res==originalnum;
}



int main(){
	int e,n;
	scanf("%d",&n);
	for(e=n+1;e>0;e++){
		if(palindrome(e)){
			if(prime(e)){
				printf("%d",e);
				break;
			}
		}
	}
	
}