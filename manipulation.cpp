// manipulation.cpp
// Source File (C++14)
// AUTHOR: JISHAN SHAIKH (jishanshaikh9893@gmail.com)
// GitHuB: github.com/jishanshaikh4/ LinkedIn: linkedin.com/in/jishanshaikh
// SUBMITTED TO: Store Transaction Imputation (Hackathon organized by Nielson (India) Pvt. Ltd.)
// COMPILE IT AS: g++ manipulation.cpp -o manipulation
// EXECUTE IT AS: ./manipulation

// Now, You will ask why C++, and why not Python3, it is the language of data science?
// Because of fast processing of data at runtime FOR THIS TASK. And, choice of language depends on each task. 
// We have to get our work done, no matter what the language is. And, don't think that I don't know Python.'

/*
	INPUT FILE: values.txt
		- Processed sorted data values for MONTH, STORE, and GROUP (Total 26985 values)
		- For sorting and consistency purposes, N10 is renamed as N9a.
	
	OUTPUT: output.txt
		- Total values 
*/
#include <bits/stdc++.h>

using namespace std;

// A very efficient string matching algorithm implementation in O(string_size)
bool mmmatch(string a, string b){
	if(a.size() != b.size())
		return false;
	for(int i=0; i<a.size(); i++)
		if(a[i] != b[i])
			return false;
	return true;
}

// Driver code for testing and execution
int main(){
	freopen("values.txt", "r", stdin);
	freopen("outputt.txt", "w", stdout);

	// Data holders
	double value[26985];
	string month[26985];
	string store[26985];
	
	// group array is an array of unique group items
	// And out of 26985, there are only 81 unique groups :)
	string group[81];

	// Instead of storing all the text info of groups, we store group_array uniquely, and matched them as group_ids
	// Basically idea of hashing from group_strings to group_strings_unique as per ids, which are stored below
	int group_ids[26985];
	
	int results[3][10][81];
	
	// Taking input from stdin, values.txt
	for(int i=0; i<81; i++){
		string s;
		getline(cin, s);
		group[i] = s;
	}

	for(int i=0; i<26985; i++){
		value[i] = 0.0;
	}

	for(int i=0; i<26985; i++){
		cin >> value[i];	
	}
	
	for(int i=0; i<26985; i++){
		cin >> month[i];
	}

	for(int i=0; i<26985; i++){
		cin >> store[i];
	}
	
	for(int i=0; i<26985; i++){
		string x;
		getline(cin, x);
		for(int j=0; j<81; j++){
			if(mmmatch(x, group[j])){
				group_ids[i] = j;
			}
		}
	}	
	
	// Descriptors for month_index, store_index, and group_index
	int mi = 0, si = 0, gi = 0;
	
	//for(int i=0; i<26985; i++)
	//	cout << month[i] << " " << store[i] << " " << value[i] << " " << group_ids[i] << endl;
	// STORING ALL VALUES IN SORTED ORDER (STORE, MONTH, GROUP)

	for(int i=0; i<26985; i++){
		if(month[i] == "M1")		mi = 0;
		else if(month[i] == "M2")	mi = 1;
		else if(month[i] == "M3")	mi = 2;

		if(store[i] == "N1")		si = 0;
		else if(store[i] == "N2")	si = 1;
		else if(store[i] == "N3")	si = 2;
		else if(store[i] == "N4")	si = 3;
		else if(store[i] == "N5")	si = 4;
		else if(store[i] == "N6")	si = 5;
		else if(store[i] == "N7")	si = 6;
		else if(store[i] == "N8")	si = 7;
		else if(store[i] == "N9")	si = 8;
		else if(store[i] == "N9a")	si = 9;

		results[mi][si][group_ids[i]] += value[i];
		
		// Checking out manually for a few values
		//cout << mi << "\t" << si << "\t" << value[i] << "\t" << group_ids[i] << endl;
	}
	
	// IDs starting for mi = 0, si = 0, and group_index = 0
	long long fid = 1112535LL;
	
	cout << "ID" << "\t" << "VALUE" << endl;

	for(int i=0; i<3; i++){
		for(int j=0; j<10; j++){
			for(int k=0; k<81; k++){
				cout << fid << "\t" << results[i][j][k] << endl;
				fid += 4;
			}
		}
	}

	return 0;
}
