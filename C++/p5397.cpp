#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
	
	list<char>pw;
	list<char>::iterator cur;
	list<char>::iterator del;
	int T;
	string input;
	
	cin >> T;
	for(int tc=0; tc<T; tc++) {
		vector<char>pri;
		cur=pw.begin();
		cin >> input;
		for(int i=0; i<input.size(); i++) {
			if(input[i]=='<' && cur!=pw.begin()) {
				cur--;
			}
			else if(input[i]=='>' && cur!=pw.end()) {
				cur++;
			}
			else if(input[i]=='-' && !pw.empty() && cur!=pw.begin()) {
				del=cur;
				del--;
				pw.erase(del);
			}
			else if(input[i]!='<' && input[i]!='>' && input[i]!='-'){
				pw.insert(cur, input[i]);
			}
		}
		for(auto print=pw.begin(); print!=pw.end(); print++) {
			pri.push_back(*print);
		}
		for(int i=0; i<pri.size(); i++) {
			if(i==pri.size()-1) cout << pri[i] << "\n";
			else cout << pri[i];
		}
		pw.clear();
	}
	
	return 0;
}
