#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;	cin>>n;
	vector<int> arr(n);
	for(int la=0;la<n;la++)
		cin>>arr[la];
	sort(arr.begin(), arr.end());
	for(auto it: arr)
		cout<<it<<' ';
	cout<<endl;
	return 0;
}
