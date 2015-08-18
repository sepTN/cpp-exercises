#include <iostream>
using namespace std;

void draw(int length){
	for (int i = length, whitespace = 0; i > 0; i--, whitespace++){
		for (int y = 0; y <= whitespace; y++){
			cout << " ";
		}
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