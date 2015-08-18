#include <iostream>
using namespace std;

int main(){
	int userInput; int amountPositive = 0;
	cout << "Please enter any numbers. " << endl << "Enter 0 or negative to stop." << endl;

	while (true){
		cin >> userInput;
		if (userInput <= 0){
			break;
		}
		else{
			amountPositive++;
		}
	}

	cout << "You have typed " << amountPositive << " amounts of positive number(s)." << endl;
	system("pause");
}