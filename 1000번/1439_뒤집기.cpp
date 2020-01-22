#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	int ans[2] = {0,0};
	string s;
	cin >> s;
	char c = s[0];
	if (c == '0'){
		ans[0] = 1;
	}else{
		ans[1] = 1;
	}
	for (int i = 1; i < s.length(); i++){
		if (s[i] != s[i-1]){
			if (s[i] == '0'){
				ans[0] += 1;
			}else{
				ans[1] += 1;
			}
		}
	}
	printf("%d",min(ans[0],ans[1]));
	return 0;
}
