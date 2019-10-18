#include <iostream>
using namespace std;

void printEndMe();

int main() {

    cout << "Hello World!\n";
	cout << "Costam :D";
	cout << "To tylko beta";
	cout << "Albo i az";
	printEndMe();
	cout << "\n How many ducks" << endl;
	int ducks;
	cin >> ducks;
	if (ducks == 0)cout << "YOU MONSTER" << endl;
	else cout << ducks << " that many ducks" << endl;
}

void printEndMe()
{
	for (int i = 0; i < 1000; i++)
	{
		cout << "!!End Me!! ";
	}
}



