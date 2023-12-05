#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Worker{
    int Worker_ID;
    char First_Name[30];
    char Last_Name[30];
    int Salary;
    char Joining_Date[30];
    char Department[10];
};
struct Bonus{
    int Worker_Ref_ID;
    char Bonus_Date[30];
    int Bonus_Amount;
};
struct Tile{
    int Worker_Ref_ID;
    char Worker_Title[20];
    char Affected_From[50];
};
int main(){
    printf("ID: 23K-0649\t Name: Shaheer Uddin Ahmed\t Secion:E");
    int H=0,Ac=0,Ad=0,total[3]={0};
    struct Worker D[8]={{1,"Monkia","Arora",100000,"2014-02-20 09:00:00","HR"},{2,"Niharika","Verma",80000,"2014-06-11 09:00:00","Admin"},{3,"Vishal","Singhal",300000,"2014-02-20 09:00:00","HR"},{4,"Amitabh","Singh",500000,"2014-02-20 09:00:00","Admin"},{5,"Vivek","Bhati",500000,"2014-06-11 09:00:00","Admin"},{6,"Vipul","Diwan",200000,"2014-06-11 09:00:00","Account"},{7,"Satish","Kumar",75000,"2014-01-20 09:00:00","Account"},{8,"Geetika","Chauhan",90000,"2014-04-11 09:00:00","Admin"}};
    int ID_Max[3]={0}; // Supposing that HR is ID_Max[0] , Admin is ID_Max[1], and ID_Max[2] is Account
    ID_Max[0] = H;
    ID_Max[1] = Ad;
    ID_Max[2] = Ac;
    for(int i=0;i<8;i++){
        if(strcmp(D[i].Department,"HR")==0){
            H=i;
            total[0] += D[i].Salary;
            if(D[ID_Max[0]].Salary<D[H].Salary){
            ID_Max[0] = i;
            }
        }
        else if(strcmp(D[i].Department,"Admin")==0){
            Ad=i;
            total[1] += D[i].Salary;
            if(D[ID_Max[1]].Salary<D[Ad].Salary){
                ID_Max[1] = i;
            }
        }
        else if(strcmp(D[i].Department,"Account")==0){
            Ac = i;
            total[2] += D[i].Salary;
            if(D[ID_Max[2]].Salary<D[Ac].Salary){
                ID_Max[2] = i;
            }
        }
    }
    printf("\nFollowing people have the maximum salary in their department: \n");
    for(int i=0;i<3;i++){
        printf("00%d\t%s\t%s\t%d\t%s\t%s\n",D[ID_Max[i]].Worker_ID,D[ID_Max[i]].First_Name,D[ID_Max[i]].Last_Name,D[ID_Max[i]].Salary,D[ID_Max[i]].Joining_Date,D[ID_Max[i]].Department);
    }
    for(int i=0;i<3;i++){
        printf("%s - %d\n",D[ID_Max[i]].Department,total[i]);
    }
    return 0;
}