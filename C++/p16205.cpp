#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<string>words;
	vector<int>points;
	int pidx=0;
	int sw;
	string input;
	cin >> sw >> input;
	
	
	if(sw==1 || sw==3) {
		points.push_back(0);
		int i=0;
		if(sw==3) i=1;
		for(i; i<input.size(); i++) {
			if(input[i]==toupper(input[i])) {
				points.push_back(i);
			}	
		}
		points.push_back(input.size());
		
		for(int i=0; i<points.size()-1; i++) {
			string temp=input.substr(points[pidx], points[pidx+1]-points[pidx]);
			words.push_back(temp);
			pidx++;
		}
	}
	else if(sw==2) {
		points.push_back(-1);
		for(int i=0; i<input.size(); i++) {
			if(input[i]=='_') {
				points.push_back(i);
			}
		}
		points.push_back(input.size());
		for(int i=0; i<points.size()-1; i++) {
			string temp=input.substr(points[pidx]+1, points[pidx+1]-(points[pidx]+1));
			words.push_back(temp);
			pidx++;
		}
	}
	
	for(int i=0; i<words.size(); i++) {
		if(i==0) words[i][0]=tolower(words[i][0]);
		else words[i][0]=toupper(words[i][0]);
	}
	for(int i=0; i<words.size(); i++) {
		cout << words[i];
	}
	cout << "\n";
	
	for(int i=0; i<words.size(); i++) {
		words[i][0]=tolower(words[i][0]);
	}
	for(int i=0; i<words.size(); i++) {
		if(i==words.size()-1) cout << words[i];
		else cout << words[i] << "_";
	}
	cout << "\n";
	
	for(int i=0; i<words.size(); i++) {
		words[i][0]=toupper(words[i][0]);
	}
	for(int i=0; i<words.size(); i++) {
		cout << words[i];
	}
	
	return 0;
}
