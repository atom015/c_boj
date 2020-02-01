#include<stdio.h>
#include<iostream>

using namespace std;

int sum(int d[][12],int i){
	int s = 0;
	for (int j = 0;j < 10; j++){
		s += d[i][j];
	}
	return s;
}

int main(){
	int n;
	scanf("%d",&n);
	int d[1002][12];
	for (int i = 0; i < 10; i++){
		d[0][i] = 1;
	}
	for (int i = 1; i < n; i++){
		int tmp = sum(d,i-1);
		d[i][0] = tmp;
		for (int j = 1; j < 10; j++){
			d[i][j] = (tmp-d[i-1][j-1])%10007;
			tmp -= d[i-1][j-1];
		}
	}
	int ans = sum(d,n-1);
	printf("%d",ans%10007);
	return 0;
}
