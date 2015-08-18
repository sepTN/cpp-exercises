#include <iostream>
using namespace std;

int n = 0;
void writeMenu(){
	cout << "------------------" << endl;
	cout << "1. Add 1" << endl;
	cout << "2. Multiply by 2" << endl;
	cout << "3. Substract 4" << endl;
	cout << "4. Quit" << endl;
	cout << "------------------" << endl;
}

int main() {
	int userInput = 0;

	while (userInput != 4){
		writeMenu();
		cin >> userInput;

		switch (userInput){
		case 1:
			n = n + 1;
			cout << "n = " << n << endl;
			break;
		case 2:
			n = n * 2;
			cout << "n = " << n << endl;
			break;
		case 3:
			n = n - 4;
			cout << "n = " << n << endl;
			break;
		}
	}
	
	system("pause");
}