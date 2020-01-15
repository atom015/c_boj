#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

int main(){
	int n,arr[51],del,tmp,ans = 0,node,child_node;
	vector<int> Node[51];
	queue<int> q;
	bool v[51];
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d ",&tmp);
		arr[i] = tmp;
	}
	scanf("\n%d",&del);
	for (int i = 0; i < n; i++){
		if (arr[i] == -1){
			q.push(i);
			v[i] = true;
		}else{
			Node[arr[i]].push_back(i);
		}
	}
	if (q.front() != del){
		v[del] = true;
		while (!q.empty()){
			child_node = 0;
			node = q.front();
			q.pop();
			for (int i = 0; i < Node[node].size(); i++){
				if (v[Node[node][i]] == false){
					child_node += 1;
					q.push(Node[node][i]);
					v[Node[node][i]] = true;
				}
			}
			if (child_node == 0){
				ans += 1;
			}
			
		}
	}
	printf("%d",ans);
	return 0;
}
