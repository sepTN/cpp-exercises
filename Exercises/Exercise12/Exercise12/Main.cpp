#include <iostream>
using namespace std;

int myFunction(int n){
	int output;

	if (n == 0){
		return 3;
	}
	else if (n == 1){
		return 2;
	}
	else{ output = n * myFunction(n - 1) + (n + 1) * myFunction(n - 2) + n; }

	return output;
}
int main() {
	int userInput;
	cout << "Input an integer: " << endl;
	cin >> userInput;
	cout << "u(" << userInput << ")=" << myFunction(userInput) << endl;

	system("pause");
}