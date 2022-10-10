#include <iostream>
#include <Windows.h>
#include <cstdlib>
using namespace std;

string start;
int liczba;

int main()
{
	cout << "Na ile sekund chcesz ustawiæ minutnik?" << endl;
		cin >> liczba;
		for (int i = liczba; i >= 0; i--)
		{
			Sleep(1000);
			system("cls");
				cout << i << endl;
		}
		
		cout << "KONIEC" << endl;

		
	return 0;
}