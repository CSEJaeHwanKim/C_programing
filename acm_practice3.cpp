

//http://183.106.113.109/30stair/coci_tablica/coci_tablica.php?pname=coci_tablica
#include<iostream>
using namespace std;
int main(void)
{
	int a,b,c,d;
	int i;
	int count=0;
	int result=0,result1=0,result2=0,result3=0,result_final=0;
	int arr[4]={0};
	int answer=0;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	result=((double)a/c+(double)b/d);
	result1=((double)c/d+(double)a/b);
	result2=((double)d/b+(double)c/a);
	result3=((double)b/a+(double)d/c);
	arr[0]+=result;
	arr[1]+=result1;
	arr[2]+=result2;
	arr[3]+=result3;
	for(i=0;i<4;i++)
	{
		if(arr[i]<result_final)
		{
			continue;
		}
		else 
		{
			result_final=arr[i];
		}
		if(arr[i]==result_final)
			answer=i;
	}
	printf("%d\n",answer);
	
	
	return 0;
}

