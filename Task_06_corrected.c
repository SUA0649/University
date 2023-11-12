//23K-0649
#include<stdio.h>
int main(){
	char s[500];
	int count_vowels=0,count_consonants=0;
	printf("Enter the string: ");
	scanf(" %s",s);
	char *ptr=s;
	while(*ptr!='\0'){
		if(*ptr=='a'||*ptr=='e'||*ptr=='o'||*ptr=='i'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='O'||*ptr=='I'||*ptr=='U'){
			++count_vowels;
			*ptr++;
		}
		else{
		++count_consonants;
		*ptr++;
		}
	}
	
	printf("The number of vowels are: %d",count_vowels);
	printf("\nThe number of consonants are: %d",count_consonants);
	
	
	return 0;
}