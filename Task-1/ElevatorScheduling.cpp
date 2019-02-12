#include <bits/stdc++.h>
using namespace std;

int main() {
	int floor,a,b,dis=0,big;
	cin>>floor;
	cout<<floor<<" ";
	vector <int> v(0);
	while (cin>>a) {
		v.push_back(a);
		
	}
	int j=v.size();
	sort (v.begin(),v.end());
	for(int i=0;i<v.size();i++)
		if(v[i]>floor){
			cout<<v[i]<<" ";
			dis+=v[i]-floor;
			floor=v[i];
			big=v[i];
		}
		else
			b=i;
			
	for(int i=b;i>=0;i--){
		cout<<v[i]<<" ";
		dis+=big-v[i];
		big=v[i];
	}
	cout<<"\nTotal Distance:"<<dis;

return 0;

}
