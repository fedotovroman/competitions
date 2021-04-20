#include <iostream>
using namespace std;
int main(){
	long long a,b,pr;
	cin>>a>>b;
	pr=a*b;
	if (b>a) swap(a,b);
	while (b!=0){
		a=a % b;
		swap(a,b);
	}
	cout<<(pr/(a));
}
