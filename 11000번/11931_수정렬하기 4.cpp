#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n,tmp;
	vector<int> arr;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&tmp);
		arr.push_back(tmp);
	}
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	for (int i = 0; i < n; i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
