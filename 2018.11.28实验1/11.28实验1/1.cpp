#include<stdio.h>
void main()
{
	int a,b,c;
	char answer;
	printf("����������a��b��c��ֵ���м���һ���ո�ֿ���");
	scanf("%d %d %d",&a,&b,&c);
		if((a+b>c)||(b+c>a)||(a+c>b))
			{
				printf("����ֵ���Թ���������");
				if((a==b)||(b==c)||(a==c))
					printf("��Ϊ����������");
				if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
					printf("��Ϊֱ��������");
				if(a==b,b==c,a==c)
					printf("��Ϊ�ȱ�������");
		    }
		else
		    printf("����ֵ�����㹹��������");
}