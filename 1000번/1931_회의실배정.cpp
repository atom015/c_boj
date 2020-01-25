#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

struct Time{
	int s;
	int e;
};

bool func(Time f,Time s){
	if (f.e == s.e){
		return f.s < s.s;
	}else{
		return f.e  < s.e;
	}
}

int main(){
	int n,arr[100000],cnt = 1;
	scanf("%d",&n);
	vector<Time> t(n);
	for (int i = 0; i < n; i++){
		cin >> t[i].s >> t[i].e;
	}
	sort(t.begin(),t.end(),func);
	int e = t[0].e;
	for (int i = 1; i < n; i++){
		if (e <= t[i].s){
			e = t[i].e;
			cnt += 1;
		}
	}
	printf("%d",cnt);
	
	return 0;
}
