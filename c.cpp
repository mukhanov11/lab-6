#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N;
	cin>>N;

	int pow2=1;
	while (pow2<=N) {
		cout<<pow2<<" ";
		pow2*=2;
	}

return 0;
}