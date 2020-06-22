#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	vector<string>inputs;
	string input;
	
	for(int i=0; i<N; i++) {
		getchar();
		getline(cin, input, '\n');
		inputs.push_back(input);
		int cnt = inputs[i].find(' ');
		inputs[i].replace(0, cnt, "god");
	}

	for(int i=0; i<N; i++) {
		inputs[i].erase(remove(inputs[i].begin(), inputs[i].end(), ' '), inputs[i].end());
		cout << inputs[i] << "\n";
	}
	
	return 0;
}
