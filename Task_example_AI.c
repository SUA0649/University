#include<stdio.h>
#include<string.h>
int counter(char *s,char);
int main(){
    char s[1000];
    printf("Enter text: ");
     gets(s);
    char ch;
    printf("Enter the character: ");
    scanf(" %c",&ch);
    printf("The character %c is repeated %d times",ch,counter(s,ch));
}

int counter(char *s,char c)
{
    int count=0;
    char *a = s;
    if(strchr(s,c)==NULL){
        return 0;
    }
    else if(*s==c){
        return 1+counter(a+1,c);
    }
    else 
    return counter(a+1,c);


}