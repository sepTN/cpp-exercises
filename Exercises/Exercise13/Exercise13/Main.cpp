#include <iostream>
using namespace std;

int n[20] {};

int countOccurrence(int theArray[], int x){
	int output = 0;

	for (int i = 0; i < 10; i++){
		if (x == n[i]){
			output++;
		}
	}
	return output;
}

int main(){
	cout << "Please enter 10 integers" << endl;

	for (int x = 0; x < 10; x++){
		cin >> n[x];
	}

	//find the biggest value by looping the array
	int biggestValue = n[0];
	for (int x = 0; x < 10; x++){
		if (biggestValue < n[x]){
			//if there's bigger value than current one?
			biggestValue = n[x];
		}
	}

	cout << "The biggest integer you have entered is: " << biggestValue << ", it appeared " << countOccurrence(n, biggestValue) << " times." << endl;
	system("pause");
}