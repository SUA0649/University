#include<stdio.h>
#include<stdlib.h>
int main(){
    int data[5]={1,2,3,4,6};
    FILE *f1;
    f1 = fopen("Data.dat","wb");
    if(f1==NULL){
        printf("Error opening the file.");
        return -1;
    }
    else{
        fwrite(data,sizeof(data),1,f1);
        printf("Writing complete.");
    }

    return 0;
}