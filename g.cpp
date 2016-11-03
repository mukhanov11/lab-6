#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double x, p, y;
	cin>>x;
	cin>>p;
	cin>>y;

	int year=0;
	while (x<y) {
		x*=(1+p/100.0);
		x*=100;
		x=(int)x;
		x/=100;
		year++;
	}
	
	cout<<year;

return 0;
}