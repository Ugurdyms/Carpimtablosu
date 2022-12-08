#include <iostream>
using namespace std;

int main()
{
	cout << "             CARPIM TABLOSU             " << endl;
	cout << "----------------------------------------" << endl;
	cout << " X    ";

	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i ;
	}
	cout << "\n----------------------------------------" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << "  " << i << "|";
		for (int j = 1; j <= 10; j++)
		{
			cout << "\t" << i * j ;
		}
		cout << endl;
	} 
	return 0;
}