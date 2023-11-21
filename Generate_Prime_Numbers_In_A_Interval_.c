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
	int e,a,b;
	scanf("%d %d",&a,&b);
	for(e=a+1;e<b;e++){
		if(prime(e)){
			printf("%d
",e);
		}
		
	}
}