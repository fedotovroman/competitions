#include <iostream>
#include <vector>
using namespace std;

vector<long> a(100000,0);
int n,q;
int size;
void siftdown(int el){
	while(2*el+1<n){
				int u=2*el+1;
				if ((2*el+2<n) && (a[2*el+2]<a[u])){
					u=2*el+2;
				}
				if (a[el]>a[u]) {
					swap(a[el],a[u]);
					el=u;
				}	else
				{
					break;
				}
			}
}

void siftup(int el){
	while (el!=0){
				if (a[el]<a[(el-1)/2]){
					swap(a[el],a[(el-1)/2]);
					el=(el-1)/2;
				}else{
					break;
				}
			}
}

void buildheap(){
	for (int i=n/2;i>=0;--i)
		siftdown(i);
	}

int getmin(){
	int min = a[0];
	swap(a[0],a[n-1]);
	n--;
	siftdown(0);
	return min;
}

int main(){
	cin>>n;
	int size=n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}

	buildheap();

	for (int i=0;i<size;i++)
		cout<<getmin()<<" ";

	return 0;
}
