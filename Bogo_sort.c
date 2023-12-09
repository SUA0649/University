#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
bool isSorted(int *a,int n);
void shuffle(int *a,int n);
void bogosort(int *a,int n);
int main(){
    srand(time(NULL));
    int a[]= {3,4,9,7,2,1,5,8,6,10};
    int n = sizeof(a)/sizeof(a[0]);
    printf("The sorted array is: \n");
    bogosort(a, n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
void bogosort(int *a,int n){
    while(!isSorted(a,n))
        shuffle(a,n);
   
}
void shuffle(int *a,int n){
    int i, t, r;
    for (i = 0; i < n; i++) {
        t = a[i];
        r = rand() % n;
        a[i] = a[r];
        a[r] = t;
    }
}
bool isSorted(int *a,int n){
    while(--n >= 1){
        if(a[n] < a[n-1]){
            return false;
        }
   }
     return true; 
}