#include <iostream>
using namespace std;

int main(){
	int userInput; int totalNumber = 0; int sumNumber = 0;
	cout << "Please enter any numbers. " << endl << "Enter 0 or negative to stop." << endl;

	while (true){
		cin >> userInput;
		if (userInput <= 0){
			break;
		}
		else{
			sumNumber = sumNumber + userInput;
			totalNumber++;
		}
	}

	cout << "You have entered " << totalNumber << " numbers." << endl;
	cout << "Average : " << sumNumber/totalNumber << endl;

	system("pause");
}