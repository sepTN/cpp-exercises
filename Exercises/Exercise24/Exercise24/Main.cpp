#include <iostream>
using namespace std;

int main(){
	int userInput; int totalNumber = 0; 
	cout << "Please enter any numbers. " << endl << "Enter 0 or negative to stop." << endl;

	while (true){
		cin >> userInput;
		if (userInput <= 0){
			break;
		}
		else{
			if (userInput >= 100 && userInput <= 200){
				totalNumber++;
			}
		}
	}

	cout << "You have entered " << totalNumber << " numbers betweem 100 and 200" << endl;

	system("pause");
}