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
	int amountPrimeFound = 0;
	int nPrimeNumber;

	cout << "Please enter an integer..." << endl;
	cin >> userInput;

	int x = 1;
	while (amountPrimeFound < userInput){
		if (countDivisor(x) == 1){
			//prime number has been found
			nPrimeNumber = x;
			amountPrimeFound++;
		}
		x++;
	}

	cout << "The " << userInput << "th prime number is: " << nPrimeNumber << endl;
	system("pause");
}