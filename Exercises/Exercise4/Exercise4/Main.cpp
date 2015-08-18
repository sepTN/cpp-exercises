#include <iostream>
using namespace std;

int n[10] {};

int main(){
	cout << "Please enter 10 integers..." << endl;

	for (int x = 0; x < 10; x++){
		cin >> n[x];
	}

	//total all those integers
	int totalValue = 0;
	for (int x = 0; x < 10; x++){
		totalValue = totalValue + n[x];
	}

	cout << "Sum of 10 integers you have inputted is: " << totalValue << endl;
	system("pause");
}