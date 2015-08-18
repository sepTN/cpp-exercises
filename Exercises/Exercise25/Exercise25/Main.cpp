#include <iostream>
using namespace std;

class Country{
public:
	int population;
	int growth;

	void growing(){
		population = population + (population * growth / 100);
	}
};

int main(){
	Country A;
	A.population = 50;
	A.growth = 3;

	Country B;
	B.population = 70;
	B.growth = 2;

	for (int i = 0; ; i++){
		cout << "Year " << i << endl;
		A.growing(); B.growing();
		cout << "Country A: " << A.population << endl;
		cout << "Country B: " << B.population << endl;
		cout << "----------------------------" << endl;

		if (A.population > B.population){
			cout << "Country A will surpass Country B's population in " << i << " year(s)" << endl;
			break;
		}
	}

	system("pause");
}