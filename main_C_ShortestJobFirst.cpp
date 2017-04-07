#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n, in;
		long long sum = 0;
		vector<int> input;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> in;
			input.push_back(in);
		}
		sort(input.begin(), input.end());
		for(int i = 0; i < n; i++){
			sum += input[i] * (n - (i+1));
		}
		cout << sum << endl;
	}
	return 0;
}