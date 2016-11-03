#include <iostream>
#include <cmath>
using namespace std;

int mini(int a, int b, int c, int d) {

	//min(a, min(b, min(c, d)));
	if (a<b && a<c && a<d) return a;
	if (b<a && b<c && b<d) return b;
	if (c<a && c<b && c<d) return c;
	if (d<a && d<b && d<c) return d;
}

int main() {
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	
	cout<<mini(a, b, c, d);

return 0;
}
	
	