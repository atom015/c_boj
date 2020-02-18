#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{
	int n,ret=0,ans=0;
	int t[20],p[20],d[20] = {0,};
	scanf("%d",&n);
	for (int i=1;i<= n;i++){
		scanf("%d %d",&t[i],&p[i]);
	}
	for (int i = 1;i < n+2;i++){
		for (int j=1;j<i;j++){
			d[i] = max(d[i],d[j]);
			if (j+t[j] == i){
				d[i] = max(d[j]+p[j],d[i]);
			}
		}
		ans = max(d[i],ans);
	}
	printf("%d",ans);
	
    return 0;
}

