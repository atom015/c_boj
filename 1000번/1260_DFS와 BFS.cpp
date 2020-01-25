#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;


void dfs(vector<int> arr[],bool v[], int nd){
	cout << nd << " ";
	v[nd] = true;
	for (int i = 0; i < arr[nd].size(); i++){
		if (v[arr[nd][i]] == false){
			dfs(arr,v,arr[nd][i]);
		}
	}
}
int main(){
	int n,m,s,a,b;
	queue<int> q;
	scanf("%d %d %d",&n,&m,&s);
	vector<int> arr[n+1];
	bool v[n+1];
	fill(v, v + n + 1, false);
	for (int i = 0; i < m; i++){
		scanf("%d %d",&a,&b);
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for (int i = 1; i <= n; i++){
		sort(arr[i].begin(),arr[i].end());
	}
	dfs(arr,v,s);
	cout << "\n";
	fill(v, v + n + 1, false);
	q.push(s);
	v[s] = true;
	while (!q.empty()){
		int p = q.front();
		q.pop();
		cout << p << " ";
		for (int i = 0; i < arr[p].size(); i++){
			if (v[arr[p][i]] == false){
				q.push(arr[p][i]);
				v[arr[p][i]] = true;
			}
		}
	}
	return 0;
}
