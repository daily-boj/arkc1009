#include <iostream>
#include <algorithm>

using namespace std;

int chk(string s, int a) {
	int be = s[a]-'0';
	int af = s[a+1]-'0';
	
	return be-af;
}

int main() {
	
	string k;
	
	cin >> k;
	
	int dif = chk(k, 0);
	bool sw=false; //false ���¸� ���� 
	
	for(int i=1; i<k.size()-1; i++) {
		if(chk(k, i)==dif) continue;
		sw=true;
		break;
	}
	
	if(!sw) cout << "?(?????)?..�Ƣ� ����!!"; 
	else cout << "��ĩ��!! <(�� ? ��)>";
	
	return 0;
}
