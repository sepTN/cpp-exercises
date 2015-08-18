#include <iostream>
using namespace std;

void draw(int length){
	for (int i = length; i > 0; i--){
		for (int y = 0; y < i; y++){
			cout << "*";
		}
		cout << endl;
	}
}

int main(){
	int userInput;
	int amountPrimeFound = 0;
	int nPrimeNumber;

	cout << "Please enter an integer..." << endl;
	cin >> userInput;
	draw(userInput);

	system("pause");
}