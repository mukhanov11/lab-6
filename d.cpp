#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N;
	cin>>N;

	int a=0;
	while (N) {
		a+=N%2;
		N/=2;
	}
	
	if (a==1) cout<<"YES";
	else cout<<"NO";

return 0;
}