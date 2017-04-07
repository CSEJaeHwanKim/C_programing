// 다 못 풀었음!!!

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> classnum[4];

int getSum(int i, int j, int k, int l){
	return classnum[0][i] + classnum[1][j] + classnum[2][k] + classnum[3][l];
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int k, n, input, minDiff;
		bool plusminus;
		int sum, abVal;
		cin >> k >> n;
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < n; j++){
				cin >> input;
				classnum[i].push_back(input);
				//classnum[i][j] = input; // error
			}
			sort(classnum[i].begin(), classnum[i].end());
		}
		
		minDiff = 99999;
		plusminus = true;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				for(int k = 0; k < n; k++){
					for(int l = 0; l < n; l++){
						sum = classnum[0][i] + classnum[1][j] + classnum[2][k] + classnum[3][l];
						if(sum - input > 0)
					}
				}
			}
		}

		//for(int i = 0; i < 4; i++){
		//	for(int j = 0; j < n; j++){
		//		cout << classnum[i][j] << ' ';
		//		//classnum[i][j] = input; // error
		//	}
		//	cout << endl;
		//}
		

	}
	return 0;
}