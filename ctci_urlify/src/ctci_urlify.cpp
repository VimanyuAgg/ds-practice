//============================================================================
// Name        : ctci_urlify.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void urlify_string(string& str, int actualLength){
	int finalStrLength = str.length();
	int filledCounter = finalStrLength - 1;
	int readerCounter = finalStrLength - 1;
	bool startReading = false;
	while(readerCounter != 0){
		if(str[readerCounter] ==' ' && !startReading){
			readerCounter--;
			continue;
		}
		startReading = true;
		if(str[readerCounter] == ' '){
			str[filledCounter]= '0';
			filledCounter--;
			str[filledCounter]= '2';
			filledCounter--;
			str[filledCounter]='%';
		}
		else{
			str[filledCounter] = str[readerCounter];
		}
		readerCounter--;
		filledCounter--;
	}

}

void urlify_char(char* str, int actualLength){
	int finalStrLength = strlen(str);
	int filledCounter = finalStrLength - 1;
		int readerCounter = finalStrLength - 1;
		bool startReading = false;
		while(readerCounter != 0){
			if(str[readerCounter] ==' ' && !startReading){
				readerCounter--;
				continue;
			}
			startReading = true;
			if(str[readerCounter] == ' '){
				str[filledCounter]= '0';
				filledCounter--;
				str[filledCounter]= '2';
				filledCounter--;
				str[filledCounter]='%';
			}
			else{
				str[filledCounter] = str[readerCounter];
			}
			readerCounter--;
			filledCounter--;
		}


}
int main() {
	string str = "Mr John Smith    ";
	char str2[] ="Mr John Smith    ";
	cout<<strlen(str2)<<endl;
	urlify_string(str,13);
	urlify_char(str2,13);
	cout <<str<< endl;
	cout<<str2<<endl;
	return 0;
}
