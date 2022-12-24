#include <bits/stdc++.h>
using namespace std;

void quicksort(int a[],int start,int end,int n){
	int i=start+1,j=end;
	if(i<=j){
		int pivot=a[start];
		while(i<j)
		{
			while(a[i]<=pivot and i<end){ 
			i++;}
			while(a[j]>=pivot and j>start) {
				
			j--;
			}
			if(i<j) swap(a[i],a[j]);
			else break;
		}
	if(i>=j){
		if(a[start]>a[j]) swap(a[start],a[j]);
	
	
	}
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
		quicksort(a,j+1,end,n);
		quicksort(a,start,j-1,n);
}
}
signed main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int start=0,end=n-1;
   quicksort(a,start,end,n);
return 0;    

}
