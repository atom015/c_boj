#include<iostream>
#include<stdio.h> 
#include<stdlib.h>
using namespace std;

int s,arr[100],ans,n;
bool ch[20000005];


void dfs(int i,int w){
	ch[w] = true;
	if (i >= n){
		return;
	}
	dfs(i+1,w);
	dfs(i+1,w+arr[i]);
	dfs(i+1,abs(w-arr[i]));
}

int main(){
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
		s += arr[i];
	}
	dfs(0,0);
	for (int i = 1;i <= s; i++){
		if (!ch[i]){
			ans += 1;
		}
	}
	printf("%d",ans);
}
