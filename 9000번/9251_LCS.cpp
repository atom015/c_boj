#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int d[1001][1001];

int main(){
	int ans = 0;
	string n,m;
	cin >> n;
	cin >> m;
	n.insert(0,"0");
	m.insert(0,"0");
	for (int i = 1; i < m.length(); i++){
		for (int j = 1; j < n.length(); j++){
			if (m[i] == n[j]){
				d[i][j] = d[i-1][j-1]+1;
			}else{
				d[i][j] = max(d[i][j-1],d[i-1][j]);
			}
		}
	}
	for (int i = 1; i < m.length(); i++){
		for (int j = 1; j < n.length(); j++){
			ans = max(ans,d[i][j]);
		}
	}
	printf("%d",ans);
	return 0;
}
