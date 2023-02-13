#include <iostream>

using namespace std;


float Funkcja(float x)
{
	//return -x * x * x + 10 * x + 5;  // funkcja z przykładu 
	//return x * x + 5 * x + 3;
	//return x * x * x + 3 * x * x - 1;
	return (-0.5) * x * x * x + 3 * x * x - 5;
}


// funkcja zwraca obliczone pochodne z powyższych funkcji 
float Pochodna(float x)
{
	//return -3 * x * x + 10;
	//return 2 * x + 5;
	//return 3 * x * x + 6 * x;
	return (-1.5) * x * x + 6 * x;
}


int main()
{
	float ps; // punkt startowy
	cout << "Podaj punkt startowy" << endl;
	cin >> ps;

	float il_it; // ilość iteracji
	cout << "Podaj ilosc iteracji" << endl;
	cin >> il_it;

	float pk;
	pk = ps;

	//cout <<endl<< "--------------------------Obliczenia dla funkcji: -x^3 + 10x + 5:-------------------------------" << endl;
	//cout <<endl<< "--------------------------Obliczenia dla funkcji: x^2 + 5x + 3:---------------------------------" << endl;
	//cout <<endl<< "--------------------------Obliczenia dla funkcji: x^3 + 3x^2 - 1:-------------------------------" << endl;
	cout <<endl<< "--------------------------Obliczenia dla funkcji: f(x) = -0,5x^3 + 3x^2 - 5 :-------------------------------" << endl<<endl;

	cout << "Pochodna funkcji wynosi: f'(x) = -1,5x^2 + 6x" << endl<<endl;

	cout << "Metoda stycznych:"<<endl<<endl;
	for (int i = 0; i < il_it; i++)
	{
		ps = ps - (Funkcja(ps) / Pochodna(ps));
		cout << "Liczba iteracji: " << i + 1 << endl;
		cout << "x" << i + 1 << " = " << ps << endl;
		cout << "Wartosc funkcji: " << Funkcja(ps) << endl<<endl;
	}
	cout << "-----------------------------------------------------" << endl;
	cout << "Metoda siecznych:" << endl;
	float p, xk;
	xk = pk;
	pk -= 0.1;
	for (int i = 0; i < il_it; i++)
	{
		p = (Funkcja(pk) - Funkcja(xk)) / (pk - xk);
		xk = pk;
		pk = pk - (Funkcja(pk) / p);
		cout << "Liczba iteracji: " << i + 1 << endl;
		cout << "x" << i + 1 << " = " << pk << endl;
		cout << "Wartosc funkcji: " << Funkcja(pk) << endl << endl;
	}

}

