#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n=1299710;

    vector<bool> prime(n,true);

    for (int i=2; i<n; i++){
        if (prime[i]){
            for (int k=2;k*i<n;k++){
                prime[k*i]=false;
            }
        }
    }



    int numb;
    int countcall;

    cin>>countcall;
    int ans[countcall];
    for (int i=0;i<countcall;i++){
        cin>>numb;
        int k=2;
        while (numb>0){
            if (prime[k]) numb--;
            k++;
        }
        ans[i]=k-1;
    }
    vector
    for (int i=0;i<countcall;i++){
        cout<<ans[i]<<" ";
    }
}

