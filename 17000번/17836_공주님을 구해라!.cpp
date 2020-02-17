#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

int n,m,t,ans = 0;
int arr[101][101];
bool v[101][101][2];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
struct info{int x,y,cnt,chk;};
queue<info> q;

int bfs(){
	q.push({0,0,0,0});
	v[0][0][0] = true;
	while (!q.empty()){
		info fo = q.front();
		q.pop();
		if (fo.x == n-1 && fo.y == m-1){
			if (fo.cnt <= t){
				return fo.cnt;
			}
		}
		for (int i = 0; i < 4; i++){
			int nx = dx[i]+fo.x,ny = dy[i]+fo.y;
			if (0 <= nx && nx < n && 0 <= ny && ny < m){
				if (v[nx][ny][fo.chk] == false){
					if (arr[nx][ny] == 1 && fo.chk == 1){
						q.push({nx,ny,fo.cnt+1,fo.chk});
						v[nx][ny][fo.chk] = true;
					}else if(arr[nx][ny] == 0){
						q.push({nx,ny,fo.cnt+1,fo.chk});
						v[nx][ny][fo.chk] = true;
					}else if(arr[nx][ny] == 2){
						q.push({nx,ny,fo.cnt+1,1});
						v[nx][ny][1] = true;
					}
				}
			}
		}
	}
	return 0;
}

int main(void)
{
	scanf("%d %d %d",&n,&m,&t);
	for (int i = 0;i < n; i++){
		for (int j = 0;j < m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int ret = bfs();
	if (ret == 0){
		printf("Fail");
	}else{
		printf("%d",ret);
	}
    return 0;
}

