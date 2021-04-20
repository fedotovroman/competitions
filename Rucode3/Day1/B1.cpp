#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> a(100000);

int binsearch1(int x,int n){
	int l=0;
	int r=n+1;
	while (l<r-1){
		int mid = (r+l)/2;

		if (a[mid]>x) {
			r=mid;
		}else{
			l=mid;
		}
	}
	return r-1;
}


int binsearch2(int x,int n){
	int l=0;
	int r=n+1;
	while (l<r-1){
		int mid = (r+l)/2;

		if (a[mid]>=x) {
			r=mid;
		}else{
			l=mid;
		}
	}
	return r-1;
}

int main(){

	int n,k;
	cin>>n;
	a[0]=-1000000001; a[n+1]=1000000001;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a.begin(), a.begin()+n+1);
    int l,r;

    //cin>>k;
    int ans[100000];

	for (;;){
		cin>>l>>r;
		int l_up_b=binsearch2(l,n);
		int r_up_b=binsearch1(r,n);
		cout<<l_up_b<<" - "<<r_up_b<<endl;
	}





}
