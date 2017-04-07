// 통과!

#include <iostream>
#include <list>
using namespace std;

int main(){
	int T, fiboArr[50];
	fiboArr[0] = 0;
	fiboArr[1] = 1;
	for(int i = 2; fiboArr[i-1] < 1000000000; i++){
		fiboArr[i] = fiboArr[i-2] + fiboArr[i-1];
	}
	// index 44까지만 의미있음
	cin >> T;
	while(T--){
		int i, input;
		list<int> ansList;
		cin >> input;
		while(input > 0){
			for(i = 0; ;i++){
				if(input < fiboArr[i])
					break;
			}
			ansList.push_front(fiboArr[i-1]);
			input -= fiboArr[i-1];
		}
		while(!ansList.empty()){
			cout << ansList.front() << ' ';
			ansList.pop_front();
		}
		cout << endl;
	}
	return 0;
}