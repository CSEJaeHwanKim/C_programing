
//http://183.106.113.109/30stair/triangular_sum/triangular_sum.php?pname=triangular_sum
#include<iostream>
using namespace std;
int main(void)
{
	int n;
	int result=0;
	int a=3,b=3;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		result+=i*(((i+1)*(i+2))/2);
	}
	cout<<result<<endl;
	return 0;
}

