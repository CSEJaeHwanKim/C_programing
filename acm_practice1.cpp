//퓨즈 문제
#include<stdio.h>
int main(void)
{
	int a=0,b=0,c=0;
	float a1=2.5,b1=2.0,c1=0.5;
	float result1,result2,result3;
	int final_result;
	int final_result1;
	scanf("%d %d %d",&a,&b,&c);
	result1=a1*a;
	result2=b1*b;
	result3=c1*c;
	final_result=(result1+result2+result3)*2;
	final_result1=(final_result%10);
	if(final_result1==0)
	{
		printf("%d amperes\n",final_result);
	}
	
	else if(final_result1!=0)
	{
		if(final_result1==1)
		{
			printf("%d amperes\n",final_result+9);
		}
		else if(final_result1==2)
		{
			printf("%d amperes\n",final_result+8);
		}
		else if(final_result1==3)
		{
			printf("%d amperes\n",final_result+7);
		}
		else if(final_result1==4)
		{
			printf("%d amperes\n",final_result+6);
		}
		else if(final_result1==5)
		{
			printf("%d amperes\n",final_result+5);
		}
		else if(final_result1==6)
		{
			printf("%d amperes\n",final_result+4);
		}
		else if(final_result1==7)
		{
			printf("%d amperes\n",final_result+3);
		}
		else if(final_result1==8)
		{
			printf("%d amperes\n",final_result+2);
		}
		else if(final_result1==9)
		{
			printf("%d amperes\n",final_result+1);
		}
	}
	return 0;
}


