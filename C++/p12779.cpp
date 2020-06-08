#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long int gcd(long long int a, long long int b)
{
	long long int c;
	while(b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	
	long long int a, b, up, down;

    cin >> a >> b;

    down=b-a;

    a=sqrt(a);
    b=sqrt(b);

    up=b-a;

    if(up==0 || down==0) {
        cout << 0;
    }
    else {
    	long long int temp=gcd(down, up);
    	cout << up/temp << "/" << down/temp;
	}
    
    
	return 0;
}
