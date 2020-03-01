//Rush Line
//SID# W840830
//Oct. 2, 2019
//HW 3 Question 1

#include <iostream>
#include <string>

using namespace std;

bool palindrome(string);

int main(){
	string str = "level";

	if (palindrome(str) == 1){
		cout << "This is a palindrome\n";
	}
	else{
		cout << "This is not a palindrome\n";
	}
	
	return 0;
}

bool palindrome(string n){
	for(int i = 0; i < n.size(); ++i){
		//code to show the comparisons
		//cout << n[i] <<" = " << n[n.size()- (i + 1)] << endl;
		if(n[i] != n[n.size()- (i + 1)]){						//compares the opposite indexes of the string
			return false;										
		}
	}
	return true;
}