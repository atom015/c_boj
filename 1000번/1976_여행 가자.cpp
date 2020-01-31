#include<stdio.h>
#include<iostream>

using namespace std;

int gp(int p[],int x){
	if (p[x] == x){
		return x;
	}
	return p[x] = gp(p,p[x]);
}

void up(int p[],int a,int b){
	a = gp(p,a);
	b = gp(p,b);
	if (a < b){
		p[b] = a;
	}else{
		p[a] = b;
	}
}

int main(){
	int n,m,t1,t2;
	bool chk = true;
	scanf("%d\n%d",&n,&m);
	int p[1005];
	int arr[202][202];
	int plan[1005];
	for (int i = 0;i < n; i++){
		for (int j = 0;j < n; j++){
			scanf("%d",&t1);
			arr[i][j] = t1;
		}
	}
	for (int i = 0;i < m; i++){
		scanf("%d",&t2);
		plan[i] = t2;
	}
	for (int i = 0; i < m+1; i++){
		p[i] = i;
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (arr[i][j] == 1){
				up(p,i+1,j+1);
			}
		}
	}
	int c = p[plan[0]];
	for (int i = 1;i < m; i++){
		if (c != p[plan[i]]){
			chk = false;
			break;
		}
	}
	if (chk){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}
