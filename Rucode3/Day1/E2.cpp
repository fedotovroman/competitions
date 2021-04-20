#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n;
    cin>>n;
    for ( int d=2;d<=sqrt(n);++d){
        while (n%d==0){
            cout<<d<<" ";
            n/=d;
        }
    }
	if (n!=1){
        cout<<n;
	}
}
