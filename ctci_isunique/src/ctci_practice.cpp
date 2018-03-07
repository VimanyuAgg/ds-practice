//Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
//cannot use additional data structures?

#include <iostream>
#include <string>
#include <vector>
#include <bitset>
using namespace std;

bool isUnique(const string& arr){
	vector<bool> visited (256,false);

	for(size_t i=0;i<arr.length();i++){
		if(visited[arr[i]]){
			return false;
		}
		else{
			visited[arr[i]] = true;
		}
	}
	return true;
}

bool isUnique_optimized(const string& arr){
	bitset<256> visited(0);
	for(size_t i=0;i<arr.length();i++){
		if(visited.test(arr[i])){
			return false;
		}
		else{
			visited.set(arr[i]);
		}
	}
	return true;
}

bool isUnique_noExternalDS(const string& s){
	for (size_t i=0;i<s.length();i++){
		for(size_t j=i+1;j<s.length();j++){
			if (s[i] == s[j]){
				return false;
			}
		}
	}
	return true;


}

int main() {
	string str = "";
	cout<<isUnique(str)<<endl;
	cout<< isUnique_optimized(str)<<endl;
	cout<<isUnique_noExternalDS(str)<<endl;
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
