#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	vector<int>menu[3]; 
	// menu[0] = buggers, menu[1] = side, menu[2] = drinks
	int inputs[3]; // inputs[0] = B, inputs[1] = C, inputs[2] = D
	int price;
	int before=0;
	int after=0;
	
	cin >> inputs[0] >> inputs[1] >> inputs[2];
	
	for(int i=0; i<3; i++) {
		for(int j=0; j<inputs[i]; j++) {
			cin >> price;
			menu[i].push_back(price);
			before+=price;
		}
	}
	
	int min_size=min(min(menu[0].size(), menu[1].size()), menu[2].size());
	
	for(int i=0; i<3; i++) {
		sort(menu[i].begin(), menu[i].end(), greater<int>());
		for(int j=0; j<inputs[i]; j++) {
			if(j<min_size) after+=(menu[i][j]*0.9);
			else after+=menu[i][j];		
		}
	}
	
	cout << before << "\n" << after;
	
	return 0;
}

