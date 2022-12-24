#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define ha "YES"
#define na "NO"
#define fo(i,a,b) for(int i=a;i<b;i++)
#define arrin int n;cin>>n;vector<int> a(n);for(int i=0;i<n;i++)cin>>a[i];
#define sumarr int sum=0;for(int i=0;i<n;i++)sum+=a[i];
#define forloop for(int i=0;i<n;i++)
#define allr(v) (v).rbegin(),(v).rend()
#define vi vector <int>
#define set_bits __builtin_popcountll
#define mp map<int,int>
#define pb push_back
#define po pop_back
#define int long long
#define endl "\n"
#define F first
#define S second
#define mod 1e9 + 7
#define inf 1e15
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
    	int j=i-1;
    	int key=a[i];
    	while(j>=0 and key<a[j]){
    		a[j+1]=a[j];
    		j--;
    	}
    	a[j+1]=key;
    	for(int k=0;k<n;k++) cout<<a[k]<<" ";
    	cout<<endl;
    }
return 0;    

}
