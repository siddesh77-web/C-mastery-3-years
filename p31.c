#include <stdio.h>
void linearsearch(int a[],int n,int ele);
int main ()
{
	int a[20],n,i,ele;
	printf("Enter n value : ");
	scanf("%d",&n);
	printf("Enter elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter ele to be searched : ");
	scanf("%d",&ele);
	
	linearsearch(a,n,ele);//function call
	
	return 0;
}
void linearsearch(int a[],int n,int ele) //function definition
{
	int i,found = 0;
	for(i=0;i<n;i++)
	{
		if(ele == a[i])
		{
			found = 1;
			break ;
		}
	}
	if(found == 1)
	{
		printf("Element found");
	}
	else
	{
		printf("Element not found");
	}
}
