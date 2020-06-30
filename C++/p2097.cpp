#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	int a=1, b=N;
	
	for(int i=1; a<b; i++) {
		a=i;
		b=N/a;
	}
	
	if(a*b!=N) {
		if(min(a, b)==a) a++;
		else b++;
	}
	
	a-=1;
	b-=1;
	
	if(a==0) a=1;
	if(b==0) b=1;
	
	cout << (a*2)+(b*2);
	
	return 0;
}
