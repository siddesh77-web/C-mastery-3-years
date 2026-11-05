#include <stdio.h>
int main()
{
	int a[10],i,n,ele,found=0;
	printf("Enter n :\n");
	scanf("%d",&n);
	printf("Enter elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched :\n");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
	   if(a[i]==ele)
		{
		found = 1;
		break;
	    }
	}
	    if(found == 1)
	    {
	    	printf("ele found");
		}
	else
	{
		printf("not found");
	}
	return 0;
}

	

