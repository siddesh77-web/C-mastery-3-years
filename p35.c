#include <stdio.h>
#include <math.h>
void update(int *a,int *b)
{
	int i,j;
	i = *a + *b;
	j = abs(*a - *b);
	*a = i;
	*b = j;
	
}
int main()
{
	int a,b;
	int *pa=&a ,*pb=&b;
	printf("Enter values :");
	scanf("%d %d",&a,&b);
	update(pa,pb);
	printf("sum = %d\nDiff = %d",a,b);
	
	return 0;
	
}
