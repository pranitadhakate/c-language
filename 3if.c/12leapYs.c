#include<stdio.h>

int main()
{	
	int Y;
	scanf("%d",&Y);
		if (Y%4==0 && Y%100!=0 && Y%400==0)
		{
			printf("It is leap year");
	        }
	        else
	        {
	           printf(" It is not leap year");
	        }
	        return 0;
}
	        
