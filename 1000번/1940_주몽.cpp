#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int n,m,arr[15001],tmp,cnt = 0;
	scanf("%d",&n);
	scanf("%d",&m);
	for (int i = 0; i < n; i++){
		scanf("%d",&tmp);
		arr[i] = tmp;
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			if ((arr[i]+arr[j]) == m){
				cnt += 1;
			}
		}
	}
	printf("%d",cnt);
	return 0;
}
