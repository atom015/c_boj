#include<iostream>
#include<stdio.h> 
using namespace std;
int arr[2188][2188];
int ans[3] = {0,0,0};

bool checking(int size,int x,int y){
	for (int i = x;i < x+size; i++){
		for (int j = y;j < y+size; j++){
			if (arr[i][j] != arr[x][y]){
				return false;
			}
		}
	}
	return true;
}

void Division(int x,int y,int size){
	if (checking(size,x,y)){
		ans[arr[x][y]+1] ++;
		return;
	}
	int div = size/3;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			Division(x+div*i,y+div*j,div);
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	Division(0,0,n);
	for (int i = 0; i < 3; i++){
		printf("%d\n",ans[i]);
	}
}
