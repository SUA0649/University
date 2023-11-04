#include<stdio.h>
int main(){
    int a;
    printf("Enter a value to convert it into its Roman equivalent: ");
    scanf("%d",&a);
    while(a>0){
        if(a>=1 && a<5){
            printf("i");
            a=a-1;
        }
        
        else if(a>=5 && a<10){
            printf("v");
            a = a-5;
        }
        else if(a>=10 && a<50){
            printf("x");
            a = a-10;
        }
        
        else if(a>=50 && a<100){
            printf("l");
            a = a-50;
        }
        else if(a>=100 && a<500){
            printf("c");
            a = a-100;
        }
        else if(a>=500 && a<1000){
            printf("d");
            a = a-500;
        }
        else{
            printf("m");
            a = a-1000;
        }
        
    }


    return 0;
}