#include <iostream>
using namespace std;
	bool Election(bool x, bool y, bool z) {
		if((x+y+z)>1) return true;     
		else return false;
	}
	
int main() {

	bool x, y, z;
	cin>>x>>y>>z;
	
	cout<<Election(x, y, z);

return 0;
}