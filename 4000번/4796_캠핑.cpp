#include<stdio.h>
#include<iostream>

using namespace std;


int main(){
	int l,p,v,cnt = 1,ans;
	while (1){
		scanf("%d %d %d",&l,&p,&v);
		if (l == 0 && p == 0 && v == 0){
			break;
		}
		if (l >= v%p){
			ans = (v/p)*l+v%p;
		}else{
			ans = (v/p)*l+l;
		}
		printf("Case %d: %d\n",cnt,ans);
		cnt += 1;
	}
	return 0;
}
