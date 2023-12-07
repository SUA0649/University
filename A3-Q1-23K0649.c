#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int greater(int arr[2][2]);
int main(){
    printf("ID:23K-0649\tName:Shaheer Uddin Ahmed\tSection: E\n");
    int n=0;
    printf("Enter the size of the matrices: ");
    scanf("%d",&n);
    if(n%2==0){
    char roll_no_full[10];
    printf("\nThe size of the matrix is: %dx%d\n",n,n); // Always is a even number which is divisible by 2.
    int arr[n][n],count=0;
    int main[n/2][n/2],temp[2][2];
 	printf("Enter your roll no. : ");
 	scanf("%s",roll_no_full);
    char* roll = strchr(roll_no_full,'-')+1;               //It is used to get the number after - in 23K-####
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(count==4){  // This is done in order to reset for a matrix higher than 4.
                count=0;
            }
            arr[i][j]=(int )(*(roll+count) - '0');           
                count++;
        }
    }
    printf("\n The inputted array is: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<=n-2;i+=2){
        for(int j=0;j<=n-2;j+=2){
            for(int k=0;k<2;k++){
                for(int q=0;q<2;q++){
                    temp[k][q] = arr[i+k][j+q];
                }
            }
            main[i][j] = greater(temp);
        }
    }
    printf("\nThe resultant matrix is: \n");
    for(int i=0;i<=n-2;i+=2){
        for(int j=0;j<=n-2;j+=2){
            printf("%d ",main[i][j]);
        }
        printf("\n");
    }
    
    }
    else{
        printf("Your matrix is not of 2 matrix. Hence it cannot be divided into 2 matrices.");
    }
    return 0;
}
int greater(int arr[2][2]){
    int max=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(max<=arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    return max;
}