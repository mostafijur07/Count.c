//count the number of letter inside a name

#include<stdio.h>

int Count();
int Space();

int main()
{
	int x,y;
	char name[40];
	char *ptr;            //decleration of a pointer;
	printf("Enter your name :");
	gets(name);          //gets() function used to read string with space;otherwise we can use fgets(name,size,stdin);
	ptr=name;            //pointer get the address of the first index of the array;By geting the address of the first index we caan pass whole array into a function by pointer;
	x=Count(ptr);        //we passing array name[40], into function count() By pointer ptr;
	y=Space(ptr);
	printf("number of letter in your name is %d",x-y);
	
	
}




int Count(char b[])     //Hear count() function expecting to come an array through a pointer;
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
