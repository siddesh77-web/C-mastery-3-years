#include<stdio.h>
main()
{
	int a,b,c,*ptr1,*ptr2,ch;
	printf("ENTER a,b:\n");
	scanf("%d%d",&a,&b);
	ptr1 = &a;
	ptr2 = &b;
	printf("enter choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("sum=%d",*ptr1+*ptr2);
			break;
		case 2:
			printf("mul=%d",*ptr1**ptr2);
			break;	
		case 3:
			printf("div=%d",*ptr1 / *ptr2);
			break;		
		case 4:
			printf("sub=%d",*ptr1-*ptr2);
			break;		
	    default:
	        printf("ERROR"); 
    }
}
