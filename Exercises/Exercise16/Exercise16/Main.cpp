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

	for (int i = 1; i <= userInput; i++){
		if (countDivisor(i) == 1){
			cout << "Prime number found: " << i << endl;
		}
	}
	system("pause");
}