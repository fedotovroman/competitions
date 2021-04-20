#include <iostream>

using namespace std;

int a[300002];

bool binsearch(int x,int n){
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
	if (r<n+1 && a[r]==x){
		return true;
	}else
	return false;
}

int main(){
	
	int n=0;
	int k=0;
	cin>>n>>k;
	a[0]=0;
	a[n+1]=1000000001;
	int x=0;
	bool ans[300000];
	
	for (int i=1;i<=n;i++)
		cin>>a[i];
		
	
	for (int i=0;i<k;i++){
		cin>>x;
		ans[i]=binsearch(x,n);
	}
	
	for (int i=0;i<k;i++)
		if (ans[i]) cout<<"YES"<<endl; else cout<<"NO"<<endl;
	
	return 0;
}



