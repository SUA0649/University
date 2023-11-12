#include<stdio.h>
#include<stdlib.h> //Using a pre-defined maze (refference Sir Shahzad's Assignment 02)
int i=0,j=0;
int find_way(char[5][5]);
int main(){
	char maze[5][5]={ {'S','W','O','W','O'},{'O','W','O','O','W'},{'O','W','O','W','O'},{'O','W','O','W','O'},{'O','O','O','E','W'}};
	find_way(maze);
	return 0;
}

int find_way(char a[5][5]){
	if(a[i][j]=='E'){
		printf("\n Congratulations you complete the maze. ");
		printf("(%d,%d)",i,j);
	}
	else if((a[i][j]=='S'||a[i][j]=='O') && (a[i][j+1]=='O' ||a[i][j+1]=='E')){
		printf("(%d,%d)\n",i,j);
		j++;
		find_way(a);
	}
	else if((a[i][j]=='S'||a[i][j]=='O')&& a[i][j+1]=='W'&& (a[i+1][j]=='O'||a[i+1][j]=='E')){
		printf("(%d,%d)\n",i,j);
		i++;
		find_way(a);
	}
	else if(a[i][j]=='O'&& a[i][j-1]=='O'&& a[i][j+1]=='W'&& a[i+1][j]=='W'){
		printf("(%d,%d)\n",i,j);
		a[i][j]='W';
		i=0;j=0;
		printf("Encountered blockade! Resetting..\n");
		find_way(a);
	}
	else{
		printf("No path possible. ");
	}
}

/*
S O O W O
O W O O W
W W O W O
W W O W O
W W O E W

*/