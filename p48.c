#include <stdio.h> //to find factorial of number
int main()
{
	int n,i,fact = 1;
	printf("Enter n value : ");
	scanf("%d",&n);
	
	for(i=n;i>1;i--)
	fact = fact * i;
	
	printf("Factorial of %d is %d ",n,fact);
	
	return 0;
}
