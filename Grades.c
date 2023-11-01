#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int s=(a+b+c+d+e);
    float p=s/5;
    if(p>=90.0)printf("Grade A");
    else if(p>=80.0)printf("Grade B");
    else if(p>=70.0)printf("Grade C");
    else if(p>=60.0)printf("Grade D");
    else if(p>=40.0)printf("Grade E");
    else if(p<40.0)printf("Grade F");
    
}