#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
	int n,dp[1001],tmp,arr[1001],ans = 0;
	scanf("%d",&n);
	for (int i = 0;i < n; i++){
		scanf("%d",&tmp);
		arr[i] = tmp;
	}
	for (int i = 0; i < n; i++){
		int m = 0;
		for (int j = 0; j < i; j++){
			if (arr[j] < arr[i]){
				m = max(dp[j],m);
			}
		}
		dp[i] = m+1;
	}
	for (int i = 0; i < n; i++){
		ans = max(ans,dp[i]);
	}
	printf("%d",ans);
	return 0;
}
