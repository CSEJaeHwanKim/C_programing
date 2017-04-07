
//http://183.106.113.109/30stair/pmin/pmin.php?pname=pmin
#include<iostream>
#define MAX 100
using namespace std;
int main(void)
{
	int n=0,n1=0;
	//int result1=0;
	int count=0;
	int arr[MAX]={0};
	int result[MAX]={0};
	scanf("%d",&n);
	if(n>100&&n<1)
	{
		return 0;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&n1);
			arr[i]+=n1;
			if(arr[i]>result[i])
			{
				continue;
			}
			else if(arr[i]<result[i])
			{
				result[i]=arr[i];
			}
			else 
			{
				result[i+1]+=arr[i];
				continue;
			}
			
			if(arr[i]==result[i])
				count=i+1;
		}
		printf("%d\n",count);
	}
	
	return 0;
}

