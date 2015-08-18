#include <iostream>
using namespace std;
int sum;

void main()
{
	int userInput;
	cout << "Enter an integer N and the program will sum of the cubes from 5^3 to N^3...." << endl;
	
	while (true){
		cin >> userInput;
		if (userInput > 5){ break; }
		else{
			cout << "Please input number greater than 5" << endl;
		}
	}

	for (int x = 5; x <= userInput; x++){
		sum = sum + (x * x * x);
	}

	cout << "The sum result is : " << sum << endl;
	system("pause");
}