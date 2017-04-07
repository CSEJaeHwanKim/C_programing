// Åë°ú!

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T;
	int result[101];
	cin >> T;
	while(T--){
		int n, input, increaseNum = 1;
		vector<pair<int, int> > inputVector;
		bool possible = true;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> input;
			inputVector.push_back(pair<int, int>(i, input));
			//result[i] = 0;
		}
		while(possible && increaseNum != n+1){
			for(int i = inputVector.size()-1; i >= 0; i--){
				if(inputVector[i].second == 0){
					result[inputVector[i].first] = increaseNum;
					increaseNum++;
					inputVector.erase(inputVector.begin() + i);
					for(int j = i; j < inputVector.size(); j++){
						if(inputVector[j].second > 0)
							inputVector[j].second--;
					}
					/*for(int i = 0; i < n; i++){
						cout << result[i] << ' ';
					}
					cout << endl;*/
					break;
				}
				if(i == 0){
					possible = false;
					break;
				}
			}
		}

		if(!possible) cout << "IMPOSSIBLE" << endl;
		else{
			for(int i = 0; i < n; i++){
				cout << result[i] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}