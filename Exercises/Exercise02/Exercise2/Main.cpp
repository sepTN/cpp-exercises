#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;
bool checkInput(int input);
int n[16] {}; //hold the valid numbers

int main(){
	int userInput;

	cout << "Type all the integers between 8 and 23 (both included) to end the loop..." << endl;

	for (int counter = 0; counter < 16; counter++){
		cin >> userInput;
		if (checkInput(userInput) == false){
			cout << "Invalid input, please try again!" << endl;
			counter--;
		}
		else{
			n[counter] = userInput;
			cout << "Input accepted!" << endl;
		}
	}

	cout << "All input received, typing it all..." << endl;
	for (int counter = 0; counter < 16; counter++){
		cout << "n" << counter << ": " << n[counter] << endl;
	}

	system("pause");
}

bool checkInput(int input){
	//must be between 8 and 23(both included)
	if (input >= 8 && input <= 23){
		//number must not be already exist in the n array
		bool exist = std::find(std::begin(n), std::end(n), input) != std::end(n);

		//if it's not exist, return true, else false
		if (!exist){ return true; }
		else{ return false; }
	}
	else{
		return false;
	}
}