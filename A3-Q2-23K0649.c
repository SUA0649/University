#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
typedef struct{
    char name[30];
    char role[30];
    int Communication;
    int Teamwork;
    int Creativity;
}Roles;
int main(){
    srand(time(NULL));
    printf("ID: 23K-0649\t Name:Shaheer Uddin Ahmed\t Secion:E\n");
    char *names[20]={"Shaheer","Matthew","Tanner","Ichinose","Hagred","Zegrid","Milo","Walter","Brian","Hammad","Yuta","Yuji","Athena","Zeus","Izzazel","Hamlet","Romeo","Juliet","Luke","Arthur"}; 
    Roles R[4][5];
    char *Depatments[4]={"HR","Finance","Marketing","Logistics"};
    char *role[5]={"Director","Executive","Manager","Employee","Trainee"};
    char freq_name[20][100]; int n,count=0,count2=0;
    for(int i=0;i<4;i++){
        char freq_role[5][100];
        for(int j=0;j<5;j++){
        char* temp_name = names[rand()%20];
        char* temp_num = role[rand()%5];
        int n=0; int p=0;
        for(int k=0;k<20;k++){
        if(strcmp(freq_name[k], temp_name) == 0){
            n=0;
            break;
        }
            n=1;
        }
        if(n==0){
            j--;
        }
        else if(n==1){
        	strncpy(freq_name[count],temp_name,30);
            strcpy(R[i][j].name,temp_name);
        }
        for(int l=0;l<5;l++){
        	if(strcmp(freq_role[l],temp_num)==0){
        		count2=0;
        		break;
			}
			count2=1;
		}
		if(count2==0){
            j--;
        }
        else {
        	strncpy(freq_role[p],temp_num,30);
        	++p;
            strcpy(R[i][j].role,temp_num);
        }
        R[i][j].Communication = rand() % 100;
        R[i][j].Teamwork = rand() % 100;
        R[i][j].Creativity = rand() % 100;
        }
    }
    int sum[4]={0};
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%s\t%s\t%s\t%d %d %d\n",Depatments[i],R[i][j].name,R[i][j].role,R[i][j].Communication,R[i][j].Creativity,R[i][j].Teamwork);
            sum[i]+=(R[i][j].Communication+R[i][j].Creativity+R[i][j].Teamwork);
        }
    }
    int max=sum[0];
    for(int i=0;i<4;i++){
        if(max<=sum[i]){
            max = i;
        }
    }
    printf("\n\nBest Department: \nDepatment\tName\tRole\tCommunication\tCreativity\tTeamwork\n");
    for(int i=0;i<5;i++){
        printf("%s\t%s\t%s\t%d\t%d\t%d\n",Depatments[max],R[max][i].name,R[max][i].role,R[max][i].Communication,R[max][i].Creativity,R[max][i].Teamwork);
    }
    return 0;
}
