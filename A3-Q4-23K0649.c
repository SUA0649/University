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
    int H=0,Ac=0,Ad=0;
    struct Worker D[8]={{1,"Monkia","Arora",100000,"2014-02-20 09:00:00","HR"},{2,"Niharika","Verma",80000,"2014-06-11 09:00:00","Admin"},{3,"Vishal","Singhal",300000,"2014-02-20 09:00:00","HR"},{4,"Amitabh","Singh",500000,"2014-02-20 09:00:00","Admin"},{5,"Vivek","Bhati",500000,"2014-06-11 09:00:00","Admin"},{6,"Vipul","Diwan",200000,"2014-06-11 09:00:00","Account"},{7,"Satish","Kumar",75000,"2014-01-20 09:00:00","Account"},{8,"Geetika","Chauhan",90000,"2014-04-11 09:00:00","Admin"}};
    int ID_Max[3]={0}; // Supposing that HR is ID_Max[0] , Admin is ID_Max[1], and ID_Max[2] is Account
    for(int i=0;i<8;i++){
        if(strcmp(D[i].Department,"HR")==0){
            if(D[ID_Max[0]].Salary>D[i].Salary){
            ID_Max[0] = i;
            }
        }
    }



    return 0;
}