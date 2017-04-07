// Åë°ú!

#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

int main(){
	int T;
	char input[51];
	scanf("%d", &T);
	while(T--){
		stack<char> parStack;
		int len;
		bool isCorrect = true;
		scanf("%s", input);
		len = strlen(input);
		for(int i = 0; i < len; i++){
			if(input[i] == '('){
				parStack.push(input[i]);
			}
			else{
				if(parStack.size() > 0){
					parStack.pop();
				}
				else{
					isCorrect = false;
					break;
				}
			}
		}
		if(parStack.size() > 0)
			isCorrect = false;

		if(isCorrect)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}