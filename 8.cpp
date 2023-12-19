/*
	Name: basic8»ØÎÄÊý
	Copyright:
	Author:
	Date: 18/12/23 23:12
	Description:
*/

#include<bits/stdc++.h>
using namespace std;
bool checkgood(int num, int n) {
	vector<int> pos;
	while(num) {
		pos.push_back(num % 10);
		num /= 10;
	}
	int sum = 0;
	bool huiwen = 1;
	vector<int> rpos(pos.rbegin(), pos.rend());
	for(vector<int>::size_type i = 0; i < pos.size(); i++) {
		if(pos[i] != rpos[i]) {
			huiwen = 0;
			break;
		}
	}
//	for(auto item : pos) {
//		sum += item;
//	}


	for(unsigned int i = 0; i < pos.size(); i++) {
		sum += pos[i];
	}
	if(sum == n && huiwen) {
		return 1;
	} else {
		return 0;
	}
}
int main() {
	int n;
	cin>>n;
	vector<int> ans;
	int mina = 10000, maxa = 999999;
	for(int i = mina; i <= maxa; i++) {
		if(checkgood(i, n)) {
			ans.push_back(i);
		}
	}

//	for(auto item : ans) {
//		cout<<item<<" ";
//	}
	cout<<"num:"<<ans.size()<<endl;
	for(size_t i = 0; i < ans.size(); i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}

