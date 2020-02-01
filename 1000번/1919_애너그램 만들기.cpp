#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
	string n,m;
	bool chkn[1000] = {false,};
	bool chkm[1000] = {false,};
	int cntn = 0,cntm = 0;
	cin >> n;
	cin >> m;
	for (int i = 0; i < n.length(); i++){
		for (int j = 0; j < m.length(); j++){
			if (n[i] == m[j] && chkn[i] == false && chkm[j] == false){
				chkn[i] = true;
				chkm[j] = true;
				cntn += 1;
				cntm += 1;
			}
		}
	}
	printf("%d",(n.length()-cntn)+(m.length()-cntm));
	return 0;
}
