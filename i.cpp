#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int A, f1=0, f2=1, s=0;
	cin>>A;

	int i=1;
	while(s<A) {
		s=f1+f2;
		f1=f2;
		f2=s;
		i++;
	}
	
	if(s==A) cout<<i;
	else cout<<-1;


return 0;
}