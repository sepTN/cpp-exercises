#include <iostream>
using namespace std;

int n = 0; int sum = 0;

void writeMenu(){
	cout << "------------------" << endl;
	cout << "Enter positive integers:" << endl;
	cout << "------------------" << endl;
}

int main() {
	int userInput = 1;

	do{
		writeMenu();
		cin >> userInput;
		if (userInput < 0){
			cout << "ERROR" << endl;
		}
		else if (userInput > 0){
			sum = sum + userInput;
			n++;
		}
	} while (userInput != 0);

	if (n == 0){
		cout << "NO AVERAGE" << endl;
	}
	else{
		cout << "AVERAGE: " << sum / n << endl;
	}

	system("pause");
}