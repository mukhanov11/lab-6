#include <iostream>
#include <cmath>
using namespace std;
	int phi(int x){
		int f1=0, f2=1, s=0;
		int i=0;
		while(s<x){
		s=f1+f2;
		f1=f2;
		f2=s;
		i++;
		}
	if(s==x) return i;
	}
int main() {
	int n;
	cin>>n;

	cout<<phi(n);

return 0;
}