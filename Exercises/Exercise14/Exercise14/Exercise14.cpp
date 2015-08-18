#include <iostream>
using namespace std;

int factorial(int x){
	int output = 1;

	for (int i = 1; i <= x; i++){
		output = output * i;
	}
	return output;
}

int main(){
	int userInput;
	cout << "Please enter an integer..." << endl;
	cin >> userInput;
	cout << userInput <<" factorial is : " <<factorial(userInput) << endl;
	system("pause");
}