#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main()
{
	srand(time(0));
	double zmienna;
	zmienna = double(rand()%1000)/(double)1000;

	double tabPrawdop[4] = { 0.3, 0.4, 0.1, 0.2 };
	int wynikiZwykle[4] = { 0, 0, 0, 0 };

	for (int i = 0; i < 100000; i++)
	{
		double zmienna;
		zmienna = (double)rand()/RAND_MAX;
		if (zmienna < tabPrawdop[0])
		{
			wynikiZwykle[0]++;
		}
		else if (zmienna < tabPrawdop[0] + tabPrawdop[1])
		{
			wynikiZwykle[1]++;
		}
		else if (zmienna < tabPrawdop[0] + tabPrawdop[1] + tabPrawdop[2])
		{
			wynikiZwykle[2]++;
		}
		else
		{
			wynikiZwykle[3]++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << "Ilosc wystapien " << i + 1 << " to " << wynikiZwykle[i] << '\n';
	}

	int wynikiRozkladu[10] = { 0,0,0,0,0,0,0,0,0,0 };

	for (int i = 0; i < 100000; i++)
	{
		double zmienna;
		zmienna = (double)rand() / RAND_MAX;
		double wynik = 100 * zmienna + 50;
		int odjemny = (int)wynik - 50;
		int wynikDziel;
		if (odjemny > 99)
		{
			wynikDziel = 9;
		}
		else if (odjemny < 0)
		{
			wynikDziel = 0;
		}
		wynikDziel = odjemny / 10;
		wynikiRozkladu[wynikDziel] = wynikiRozkladu[wynikDziel] + 1;
	}

	int suma = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Z przedzialu od " << i + 50 << " do " << i + 60 << " wynosi " << wynikiRozkladu[i] << endl;
		suma = suma + wynikiRozkladu[i];
	}

	cout << suma << endl;

	return 0;
}