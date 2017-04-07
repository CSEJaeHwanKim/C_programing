
//http://183.106.113.109/30stair/even/even.php?pname=even
#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
	int a=0,b=0;
	int result=0,result1=0,result3=1;
	scanf("%d %d",&a,&b);
	//for(int i=a;i<=b;i++)
	//{
		//result=(int)sqrt((double)i);
		
		//if(result*result==(int)i)
		//	result1++;}
	result = (int)sqrt((double)a);
	if(a==b)
	{
		
		if(result * result == (int)a)
			cout<<result1<<endl;
		else
			cout << result3<<endl;
	}
	else if(a!=1&&result * result != (int)a)
	{
		cout<<(b-(int)sqrt((double)b))-(a-(int)sqrt((double)a))+1<<endl;
	}
	else
		cout<<(b-(int)sqrt((double)b))-(a-(int)sqrt((double)a))<<endl;

	//cout<<((b-a+1)-result1)<<endl;
	return 0;
}
