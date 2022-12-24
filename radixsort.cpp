#include <bits/stdc++.h>
using namespace std;

void radixsort(int a[],int n){
	int ma=*max_element(a,a+n);
	string s=to_string(ma);
	int l=s.length();
	queue<int>q[10];
	for(int i=0;i<n;i++){
		q[a[i]%10].push(a[i]);
	}
	int d=10;
	while(l--){
		int c=0;
		for(int i=0;i<10;i++){
			while(!q[i].empty()){
				a[c]=q[i].front();
				q[i].pop();
				c++;
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
			q[(a[i]/d)%10].push(a[i]);
		}
		d*=10;
		cout<<endl;
	}
}
signed main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
  
   radixsort(a,n);
return 0;    

}
