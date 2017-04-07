#include<iostream>
using namespace std;
int main(void)
{
	int a=0,b=0,c=0;
	float result1,result2;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		result1=((float)b*(float)c)/2;
		result2=(float)b/2;
		if(a==1)
		{
			if (b==c)
				printf("-1\n");
			else
				printf("%.2f\n",result1);
		}
		else
		{
			if(b==c)
				printf("%.2f\n",result2);
			else
				printf("-1\n");
		}
		
	}
	return 0;
}

