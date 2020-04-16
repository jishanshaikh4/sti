// store_process.cpp

#include <bits/stdc++.h>

using namespace std;

int main(){
	freopen("store.txt", "r", stdin);
	freopen("normalized_store.txt", "w", stdout);	

	for(int i=0; i<26985; i++){
		string x;
		cin >> x;
		if(x == "N10"){
			cout << "N9a" << endl;
		}else{
			cout << x << endl;
		}
	}
	return 0;
}
