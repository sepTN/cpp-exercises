#include <iostream>
using namespace std;

int myFunction(int n){
	int output;

	if (n <= 1){
		return 1;
	}
	else{ output = myFunction(n - 1) + myFunction(n - 2); }

	return output;
}
int main() {
	int userInput;
	cout << "Input an integer: " << endl;
	cin >> userInput;
	cout << "u(" << userInput << ")=" << myFunction(userInput) << endl;

	system("pause");
}