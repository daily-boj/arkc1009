#include <iostream>
#include <vector>

//�������� Ž���ϴµ�,, ������ ��� ������ �𸣰ڴ�.. 

using namespace std;
vector<long long int>sum;

int ser(int n) {
	
}

int main() {
	
	int n, temp;
	int cnt=0;
	long long int k;
	
	
	cin >> n;
	
	for(int i=0; i<n; i++) {
		cin >> temp;
		if(i==0) sum.push_back(temp);
		else sum.push_back(sum[i-1]+temp); 
		//������ �۾� 
	}	
	
	int s=0, f=sum.size()-1;
	int j=f;
	cin >> k;
	// sum[j]-k > sum[i-1]
	for(int i=0; i<n; i++) {
		s=i;
		f=sum.size()-1;
		while(j-i>1) {
			j=(f+s)/2;
			cout << "s : " << s << " f : " << f << " j : " << j << "\n";
			if(i-1<0) {
				cout << sum[j] << " : " << k << "\n";
				if(sum[j]>k) {
					cnt+=(n-j);
					cout << "cnt+!" << "\n";
					break;	
				}
				else {
					s=f;
					f=sum.size()-1;
				} 
			}
			else {
				cout << sum[j]-k << " : " << sum[i-1] << "\n";
				if(sum[j]-k > sum[i-1]) {
					cnt+=(n-j);	
					cout << "cnt+!" << "\n";
					break;
				}
				else {
					s=f;
					f=sum.size()-1;
				}
			}	
		}
		cout << "\n";			
	}
	
	cout << cnt;
	
	return 0;
}
