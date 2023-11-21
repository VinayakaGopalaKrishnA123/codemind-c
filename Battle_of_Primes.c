#include<stdio.h>
#include<math.h>
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
int main(){
	int e,a,b,k;
	scanf("%d %d",&a,&b);
	for(e=a+b+1;e>0;e++){
		if(prime(e)){
			k=e;
			break;
		}
		
	}
	printf("%d",abs(a+b-k));
}