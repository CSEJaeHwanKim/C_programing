//기울기 문제
#include<stdio.h>
int main(void)
{
	int a=0,a1=0;
	int b=0,b1=0;
	int c=1,c1=0;
	int result1_1,result1_2;
	int result2_1,result2_2;
	scanf("%d %d",&a,&a1);
	scanf("%d %d",&b,&b1);
	result1_1=(a1/a);
	result1_2=(a1%a);
	result2_1=(b1/b);
	result2_2=(b1%b);
	if(a==b&&a1==b1)
	{
		printf("%d %d",c,c1);
	}
	if(result1_1==result2_1&&result1_2==result2_2)
	{
		printf("%d %d",result1_1,result1_2);
	}
	
	else
	{
		return 0;
	}

	return 0;
}

