#include <iostream>
using namespace std;

int main()
{
	try
	{
		int numero = -4;
		if (numero <= 0) {
			throw "No se permiten numero negativos ni cero";
		}
	}
	catch (const char* exc)
	{
		cout << exc << endl;
	}
}
