#include <iostream>
using namespace std;

int main(){
	int userInput; int amountPositive = 0;
	cout << "Please enter any numbers. " << endl << "Enter -999 to stop." << endl;

	do{
		cin >> userInput;
		cout << userInput << " tripled into " << userInput * 3 << endl;
	} while (userInput != -999);

	system("pause");
}