#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	vector<int> arr;
	int s = 0,a,b,com = 0;
	for (int i = 0; i < 10; i++){
		scanf("%d %d",&a,&b);
		s -= a;
		s += b;
		arr.push_back(s);
	}
	for (int i = 0;i < arr.size(); i++){
		com = max(com,arr[i]);
	}
	printf("%d",com);
	return 0;
}
