#include <stdio.h>    //file handling functions
#include <stdlib.h>
int main()
{
	FILE *fp;
	
	fp = fopen("Name.txt","w");
	if(fp == NULL)
	{
		printf("File not opened");
	}
	
	return 0;
}
