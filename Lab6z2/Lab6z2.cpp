#include <iostream>
using namespace std;

int main()
{
	int tab[9];

	cout << tab << endl;
	cout << tab + 3 << endl;

	srand(time(NULL));
	for (int i = 0; i < 9; i++)
	{
		*(tab + i) = rand() % 10;
		cout << *(tab + i) << " ";
		cout << tab + i << endl;
	}
}

