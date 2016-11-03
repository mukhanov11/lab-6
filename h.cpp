#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n, i=2, f1=0, f2=1, a;
	cin>>n;

	while (i<=n){
		a=f1+f2;
		f1=f2;
		f2=a;
		i++;
  	}

	if (n<=1) cout<<n;
	else cout<<a;

return 0;
}