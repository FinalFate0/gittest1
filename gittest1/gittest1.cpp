#include <iostream>
#include <ctime>
#include <random>

using namespace std;

default_random_engine generator;
uniform_int_distribution<int> distribution(0,100);

void printEndMe();

int main() {

  cout << "Hello World!\n";
	cout << "Costam :D";
	cout << "To tylko beta";
	cout << "Albo i az";


	printEndMe();
	cout << "\n How many ducks" << endl;
	int ducks;
	ducks = distribution(generator);
	if (ducks == 0)cout << "YOU MONSTER no duck" << endl;
	else cout << ducks << " : that many ducks" << endl;


  cout << "\n\n\n\n\n\n";

	cout << __TIMESTAMP__ << endl;

}
void printEndMe()
{
	for (int i = 0; i < 1000; i++)
	{
		cout << "!!End Me!! ";
	}

}



