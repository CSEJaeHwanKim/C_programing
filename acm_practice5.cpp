//ATM ¹®Á¦
#include <iostream>
using namespace std;
int main(void)
{
	float a=0;
	float b=0;
	float c=0.5;
	float result;
	int a1=0;
	float b1=0;
	scanf("%f %f",&a,&b);
	result = (b-a-c);
	a1=((int)a%5);
	b1=(b-a);
	if (a1!=0||a>b||a==b||b1<c)
		printf("%.2f",b);
	else
		printf("%.2f",result);
	
	return 0;
}

