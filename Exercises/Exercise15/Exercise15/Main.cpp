#include <iostream>
using namespace std;

int countDivisor(int x){
	int count = 0;

	for (int i = 1; i < x; i++){
		if (x % i == 0){
			count++;
		}
	}
	return count;
}

int main(){
	int userInput;
	cout << "Please enter an integer..." << endl;
	cin >> userInput;
	
	if (countDivisor(userInput) == 1){
		cout << userInput << " has " << countDivisor(userInput) << " positive integer divisor other than 1, thus IS a prime number." << endl;
	}
	else{
		cout << userInput << " has " << countDivisor(userInput) << " positive integer divisor other than 1, thus IS NOT a prime number." << endl;
	}

	system("pause");
}