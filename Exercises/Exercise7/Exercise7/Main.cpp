#include <iostream>
using namespace std;

int myFunction(int n){
	int output;

	if (n == 0){
		return 3;
	}
	else{ output = 3 * myFunction(n - 1) + 4; }

	return output;
}
int main() {
	int userInput;
	cout << "Input an integer: " << endl;
	cin >> userInput;
	cout << "u(" << userInput << ")=" << myFunction(userInput) << endl;

	system("pause");
}