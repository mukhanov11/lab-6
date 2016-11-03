#include <iostream>
using namespace std;
	bool isprime=true;
	bool num(int x){
		int coun=0;
		for(int i=2; i*i<=x; i++){
			if(x%i==0) coun++;
		}
		if(coun>=1) isprime=false;
	}

int main(){
	int n;
	cin>>n;
	
	num(n);
	if(isprime==true) cout<<"prime";
	else cout<<"composite";

return 0;
}