#include<stdio.h>
int main(){
	char s[500];
	int count_vowels=0,count_consonants=0;
	printf("Enter the string: ");
	scanf(" %s",s);
	char *ptr=s;
	while(*ptr!='\0'){
		if(*ptr=='a'||*ptr=='e'||*ptr=='o'||*ptr=='i'||*ptr=='u'){
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