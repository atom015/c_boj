#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

	int n,k;
	vector<int> arr;
	scanf("%d %d",&n,&k);
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			arr.push_back(i);
		}
	}
	if (arr.size() < k){
		printf("%d",0);
	}else{
		printf("%d",arr[k-1]);
	}
	return 0;
}
