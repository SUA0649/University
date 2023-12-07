#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("ID:23K-0649\tName:Shaheer Uddin Ahmed\tSection: E\n");
    int n=0;
    printf("Enter the size of the matrices: ");
    scanf("%d",&n);
    if(n%2==0){
    int roll_no;
    printf("\nThe size of the matrix is: %dx%d\n",n,n); // Always is a even number which is divisible by 2
    int arr[n][n];
    int temp[n/2][n/2];
    printf("Enter the last 4 digits of your roll no. : ");
    scanf("%d",&roll_no);
    for(int i=0;i<n;i++){
        int b=10;
        for(int j=0;j<n;j++){
            arr[i][j] = roll_no%b;
            b*=10; 
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("Your matrix is not of 2 matrix. Hence it cannot be divided into 2 matrices.");
    }
    return 0;
}