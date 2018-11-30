#include<stdio.h>
void main()
{
	int i,n,x=0;
		for(i = 100; i < 300;i++)
		{	
			int n = 0;
			for(n = 2; n < i; n++)
			  {
				  if(i%n==0)
					  break;
			  }
			if(n==i)
			{
			printf("%4d",i);
			x++;
			}
			if(x % 7 == 0)
				printf("\n");//每7个输出一行
		}
}