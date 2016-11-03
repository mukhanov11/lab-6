#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N, k=0;
	cin>>N;

	int pow2=1;

	while(pow2<N){
		pow2<<=1;
		k++;
	}

	cout<<k;
	
return 0;
}