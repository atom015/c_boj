#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n,a,b,c,com = 100000;
	scanf("%d",&n);
	vector<vector<int> > arr(1001, vector<int>(3,0));
	vector<vector<int> > dp(1001, vector<int>(3,0));
	for (int i = 0; i < n; i++){
		scanf("%d %d %d",&a,&b,&c);
		if (i == 0){
			dp[i][0] = a;
			dp[i][1] = b;
			dp[i][2] = c;
		}
		arr[i][0] = a;
		arr[i][1] = b;
		arr[i][2] = c;
	}
	for (int i = 1; i < n; i++){
		for (int j = 0; j < 3; j++){
			if (j == 0){
				dp[i][j] = min(arr[i][j]+dp[i-1][1],arr[i][j]+dp[i-1][2]);
			}
			else if(j == 1){
				dp[i][j] = min(arr[i][j]+dp[i-1][0],arr[i][j]+dp[i-1][2]);
			}else{
				dp[i][j] = min(arr[i][j]+dp[i-1][0],arr[i][j]+dp[i-1][1]);
			}
		}
	}
	for (int i = 0;i < 3; i++){
		com = min(com,dp[n-1][i]);
	}
	printf("%d",com);
	return 0;
}
