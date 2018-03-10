package com.ctci.chap1;

class Solution{
	
	static void urlify_singlePass(char[] str, int trueLength) {
		int finalStrLength = str.length;
		int filledCounter = finalStrLength - 1;
			int readerCounter = finalStrLength - 1;
			boolean startReading = false;
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
	
	public static void main(String[] arg) {
		String str = "Mr John Smith    ";
		char[] arr = str.toCharArray();
		
		urlify_singlePass(arr,13);
		for (int i=0;i<arr.length;i++)
			System.out.print(arr[i]);
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
}