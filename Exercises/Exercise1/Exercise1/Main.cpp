#include <iostream>
using namespace std;

int main(){
	int userInput;
	
	cout << "Type integer between 56 and 78 (both included) to win" << endl;
	cin >> userInput;
	
	if (userInput >= 56 && userInput <= 78){
		cout << "YOU WIN" << endl;
	}
	else{
		cout << "YOU LOSE" << endl;
	}

	system("pause");
}
