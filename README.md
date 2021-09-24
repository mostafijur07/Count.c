# Count.c
//program of counting number of letter in a name in c programming language using pointer;
//Example of call by reference;
//In c prgramming language only arrays passing through a function taken by call by reference;
//otherwise for all other parametr passing we taken the course to call by value;


#include<stdio.h>

int Count();
int Space();

int main()
{
	int x,y;
	char name[40];
	char *ptr;
	printf("Enter your name :");
	gets(name);
	ptr=name;
	x=Count(ptr);
	y=Space(ptr);
	printf("number of letter in your name is %d",x-y);
	
	
}




int Count(char b[])
{
	int i,count=0;
	for(i=0;b[i]!='\0';i++)
	{
		count++;
	}
	
	return(count);
}


int Space(char c[])
{
	int i,j,space=0;
    for(i=0;c[i]!='\0';i++)
	{
	   if(c[i]==32)
	   space++;
	}
	return(space);
}