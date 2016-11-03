#include <iostream>
#include <cmath>
using namespace std;

bool  Xor (bool x, bool y) {

	if((x==0 && y==1) || (x==1 && y==0)) return true;
	else return false;
}

int main() {

	bool x, y;
	cin>>x>>y;

	cout<<Xor(x, y);

return 0;
}