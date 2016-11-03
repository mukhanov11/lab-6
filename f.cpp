#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double x, y;
	cin>>x;
	cin>>y;

	int d=1;
	while (x<y) {
		x+=x*0.1;
		d++;
	}
	
	if (x>=y) cout<<d;

return 0;
}