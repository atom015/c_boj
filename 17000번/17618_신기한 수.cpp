#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n,cnt=0;
	cin >> n;
	for (int i = 1; i < n+1; i++){
		int nn = i,s=0;
		while (nn){
			s += nn % 10;
			nn /= 10;
		}
		if (i % s == 0){
			cnt += 1;
		}
	}
	cout << cnt;
	return 0;
}
