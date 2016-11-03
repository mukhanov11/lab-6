#include <iostream>
#include <cmath>
using namespace std;
	double my_pow(double a, int n){
		double s=1;
		for(int i=0; i<abs(n); i++){
			s*=a;}
		if(n>0) return s;
		else return 1.0/s;
	}
int main() {

        double a;
	int n, s=1;
	cin>>a>>n;

	cout<<my_pow(a, n);

return 0;
}