#include <iostream>
using namespace std;
int main() {
	bool stu[31]={false};
	int input;
	for(int i=1; i<=28; i++) {
		cin >> input;
		stu[input]=true;
	}
	for(int i=1; i<=30; i++) if(!stu[i]) cout << i << "\n";
	return 0;
}
