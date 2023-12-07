#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 typedef struct{
    int ID;
    char Name[30];
    int Salary;
}Details;
int main(){
    printf("ID: 23K-0649\t Name:Shaheer Uddin Ahmed\t Secion:E");
    FILE *f1,*f2,*f3;
    Details d[3];
    f1 = fopen("Personal.txt","r");
    f2 = fopen("Department.txt","r");
    f3 = fopen("Combine.txt","w");
    if(f1==NULL||f2==NULL||f3==NULL){
        printf("One of the files had trouble opening. Error 101");
    }
    else{
        int i=0,temp,t_salary;
      	 while(!feof(f1)){
            fscanf(f1,"%d	%s",&d[i].ID,d[i].Name);  
            i++;
        }
        
        while(!feof(f2)){
            fscanf(f2,"%d	%d",&temp,&t_salary);
            for(int j=0;j<3;j++){
                if(temp==d[j].ID){
                    d[j].Salary=t_salary;
                }    
            }
        }
        fprintf(f3,"ID\tName\tSalary\n");
        for(int i=0;i<3;i++){
            fprintf(f3,"%d\t%s\t%d\n",d[i].ID,d[i].Name,d[i].Salary);
        }
    }


    return 0;
}