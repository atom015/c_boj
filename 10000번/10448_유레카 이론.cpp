#include<iostream>
#include<stdio.h>
using namespace std;

int func(int n,int arr[]){
	for (int i = 1; i < 47; i++){
		for (int j = 1; j < 47; j++){
			for (int k = 1; k < 47; k++){
				if (arr[i]+arr[j]+arr[k] == n){
					return 1;
				}
			}
		}
	}
	return 0;
}

int main(){
	int t,k,arr[100];
	for (int i = 0; i < 47;i++){
		arr[i] = i*(i+1)/2;
	}
	scanf("%d",&t);
	for (int i = 0; i < t;i++){
		scanf("%d",&k);
		printf("%d\n",func(k,arr));
	}
	return 0;
}
