#include<stdio.h>
#include<conio.h>
#include<string.h>
int confuse1(int b,int *a,int *c);
void inputNums(int *a,int *b,int *c);
int confuse2(int **a,int e[],int b,int **c, int size);
void inputArray(int a[],int size);

void main(){
    int a,b,c;
    inputNums(&a,&b,&c);
    int d = confuse1(a,b,c);
    printf("\nThe result is %d",d);
    printf("\n %d %d %d\n",a,b,c);
    getch();
}

int confuse1(int b,int *a,int *c){
    int array1[6]={1,2,3};
    int abc = confuse2(a,array1,c,b,3);
    *c =(*c)*(10);
    b = (*a)+(*c);
    for(int i=0;i<6;i++)
    printf("%d",array1[i]);
    printf("\n leaving confuse1\n");
    return abc;
    
}
 void inputNums(int *a,int *b,int *c){
    printf("Input a b and c :");
    scanf("%d %d %d",a,b,c);
 }
int confuse2(int **a,int e[],int b,int **c, int size){
    inputArray(e,size);
    **a = e[5] + e[4];
    b = b + e[3];
    **c = (**c)*(**c);
    return (**a*b);
}
void inputArray(int a[],int size){
    printf("Input %d elements", size);
    for(int i=3;i<size*2;i++){
        scanf("%d",&a[i]);
    }
}