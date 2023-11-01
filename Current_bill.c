#include<stdio.h>
int main(){
    int u;
    float uc,sc;
    scanf("%d",&u);
    if(u<200) uc=1.20;
    else if(u<400) uc=1.50;
    else if(u<600) uc=1.80;
    else if(u>600) uc=2.00;
    if(u<400) sc=100;
    if(u>=400) sc=0.3*u;
    printf("%.2f",(u*uc)+sc);
    
}