#include <stdio.h>
int main()
{
	int num , i , n , count = 0;
	printf("Enter n vlaue : ");
	scanf("%d",&n);
	
	for(num = 2 ; num <= n ; num ++)
	{
		count = 0;
		for(i = 1 ; i <= num ; i++)
		{
			if(num % i == 0 )
			count++;
		}
	        if(count == 2)
	        {
	        printf("%d ",num);
	        }
    }
	return 0;
}

