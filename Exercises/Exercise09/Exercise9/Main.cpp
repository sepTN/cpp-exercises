#include <iostream>
using namespace std;

bool checkInput(int n){
	if (n >= 0 && n <= 20){
		return true;
	}
	else{ return false; }
}
int main() {
	int userInput;
	cout << "Please enter an integer between 0 and 20 (both included)..." << endl;
	
	while (true){
		cin >> userInput;
		if (checkInput(userInput)){
			break;
		}
		else{ cout << "ERROR" << endl; }
	}
	
	cout << "Result N+17: " << userInput + 17 << endl;
	system("pause");
}