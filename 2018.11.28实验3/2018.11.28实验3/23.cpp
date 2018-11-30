#include<stdio.h>
void main()
{
int i,j,t,a[10];
for(i=0;i<10;i++)
	scanf("%d",&a[i]);
for(j=0;j<9;j++)
	for(i=0;i<9-j;i++)
		if(a[i]>a[i+1])
		{t=a[i];a[i]=a[i+1];a[i+1]=t;}
int n,m,top,bot,mid;
top=m=1;
bot=9;
printf("请输入一个数字");
	scanf("%d",&n);
while(top<=bot)
{
	mid=(top+bot)/2;
	if(n==a[mid])
	{
		printf("这是第%d个元素的值.\n",mid+1);
		m=0;
		break;
	}
	else if(n>a[mid])
		top=mid+1;
	else if(n<a[mid])
		bot=mid-1;
}
if(m)
	printf("无此数。\n");
}