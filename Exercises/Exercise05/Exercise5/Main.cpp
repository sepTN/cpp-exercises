#include <iostream>
using namespace std;

int n[10] {};

int main(){
	cout << "Please enter 10 integers" << endl;
	
	for (int x = 0; x < 10; x++){
		cin >> n[x];
	}

	//find the smallest value by looping the array
	int smallestValue = n[0];
	for (int x = 0; x < 10; x++){
		if (smallestValue > n[x]){
			//if there's smaller value than current one?
			smallestValue = n[x];
		}
	}

	cout << "The smallest integer you have entered is: " << smallestValue << endl;
	system("pause");
}