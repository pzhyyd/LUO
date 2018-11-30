#include<stdio.h>
void main()
{
	int a,b,c;
	char answer;
	printf("请依次输入a，b，c的值（中间用一个空格分开）");
	scanf("%d %d %d",&a,&b,&c);
		if((a+b>c)||(b+c>a)||(a+c>b))
			{
				printf("输入值可以构成三角形");
				if((a==b)||(b==c)||(a==c))
					printf("且为等腰三角形");
				if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
					printf("且为直角三角形");
				if(a==b,b==c,a==c)
					printf("且为等边三角形");
		    }
		else
		    printf("输入值不满足构成三角形");
}