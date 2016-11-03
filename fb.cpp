#include <iostream>
#include <cmath>
using namespace std;

double power(double a, int n) {
	double s=1.00;
	for (int i=1; i<=n; i++) {
		s*=a;
	}
return s;
}


int main() {

	double a; int n;
	cin>>a>>n;

	cout<<power(a, n);

return 0;
}