
//http://183.106.113.109/30stair/prd/prd.php?pname=prd
#include<iostream>
#define MAX 1000 
using namespace std;
int main(void)
{
	int arr[MAX]={1,1,2,0};
	int a;
	scanf("%d",&a);
	arr[a]=((3*arr[a-1])-(arr[a-2]))%100000;
	printf("%d\n",arr[a]);
	return 0;
}

