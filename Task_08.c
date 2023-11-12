#include<stdio.h>
void ProductsList(void){
    char Products[10][6]={"Milk","Loaf","Beef","Eggs","Fish","Surf","Cake","Soap","Lamb","Corn"};
    float Prices[10]={80.23,347.52,50.36,50,85,56.58,70.236,103.63,50.23,70.236};
    int i=0;
    while(i<10){
        printf("%s\t%.3f\n",Products[i],Prices[i]);
        i++;
    }
    AddProduct(Products,Prices);
}
void AddProduct(char Prod[10][6],float price[10]);
void CalculateBill(char Prod[10][6],char cart[7][6],float price[10],int Frequency[10]);
void DisplayProductsBill(char cart[7][6],float price[10],float total);

int main(){
    ProductsList();
    return 0;}

void AddProduct(char Prod[10][6],float price[10]){
	int Frequency[10]={0};
	int flag;
    char cart[7][6];
    printf("Enter the products(no more than 5) that you want to add(-1 to exit): ");
    int i=0;
     while(i<7){
     
        scanf("%s",cart[i]);
        if(strcmp(cart[i],"-1")==0){
        	break;
		}
		else if(i>5){
			printf("Enter your list again number cart overload.");
			i=0;
		}
        int j=0;
        while(j<10){
        if(strcmp(cart[i],Prod[j])==0){
        	++Frequency[j];
            i++;
            flag=1;
            break;
        }
        else{
        	flag=0;
		}
    	j++;
        }
        if(flag==0){
        	printf("Invalid Product. Enter another: \n");
		}
    }
	    CalculateBill(Prod,cart,price,Frequency);
}
void CalculateBill(char Prod[10][6],char cart[7][6],float price[10],int Frequency[10]){
	int i=0,j=0;
	float total=0,c_price[5]={0};
	while(i<7){
		j=0;
	while(j<10){
		if(strcmp(cart[i],Prod[j])==0){
			c_price[i]=price[j];
			if(Frequency[j]>0){
			total += c_price[i];
			Frequency[j]=0;
		}
			break;
			}
			j++;
		}
		i++;
	}
    DisplayProductsBill(cart,c_price,total);
}
void DisplayProductsBill(char cart[5][6],float price[5],float total){
    for(int i=0;i<5;i++){
        printf("\n%s\t%.2f",cart[i],price[i]);
    }
    printf("\nYour total is: %.2f",total);
}