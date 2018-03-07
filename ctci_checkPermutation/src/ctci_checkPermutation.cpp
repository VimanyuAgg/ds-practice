/*
 * 1.2 Check Permutation: Given two strings, write a method to decide if one is a permutation of the
other.
 * */
#include <iostream>
#include <string>
#include <map>
using namespace std;

bool isPermutation_sol1(string& arr, string& target){
	if (arr.length() != target.length()){
		return false;
	}
	map<char,int> visited;
	for(size_t i=0;i<arr.length();i++){
		visited[arr[i]] +=1;
		visited[target[i]] -=1;
	}

	for (size_t i=0;i<arr.length();i++){
		if(visited[arr[i]] != 0){
			return false;
		}
	}

	return true;

}


int main() {
	string str1 = "abcd";
	string str2 = "acdb";
	cout<<boolalpha<<isPermutation_sol1(str1,str2)<<endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
