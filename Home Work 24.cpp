#include <iostream>
#include <ctime>

using namespace std;

const int nMatr = 10;

int main()
{
	srand(time(0));
	int Mass1[nMatr] = { 0 };
	int Mass2[nMatr] = { 0 };

	int *ptrMass1 = Mass1;
	
	ptrMass1 = new int[nMatr];

	for (int i = 0; i < nMatr; i++)
	{
		*(ptrMass1 + i) = rand() % 10 - rand() % 10;
	}
	cout << endl;

	for (int i = 0; i < nMatr; i++)
	{
		cout << *(ptrMass1 + i) << " ";
	}
	cout << endl;

	int *ptrMass2 = Mass2;

	ptrMass2 = new int[nMatr];

	for (int i = 0; i < nMatr; i++)
	{
		*(ptrMass2 + nMatr - i - 1) = *(ptrMass1 + i);
	}
	cout << endl;


	for (int i = 0; i < nMatr; i++)
	{
		cout << *(ptrMass2 + i) << " ";
	}
	cout << endl << endl;;

	delete[] ptrMass1;
	delete[] ptrMass2;
	
	system("pause");
	return 0;
}