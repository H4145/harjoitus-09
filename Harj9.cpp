/*
Eetu Salo

Harjoitus 9 (Palautus vko 41)
Tee ohjelma, joka toimii laskimena.
Käyttäjältä kysytään kaksi kokonaislukua,
jonka jälkeen ohjelma antaa valikon
laskutoimituksista. Valikko nayttaa
seuraavalta:

VALIKKO
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos

Lopuksi ohjelma tulostaa valitun tuloksen naytölle.


*/


#include <iostream>
using namespace std;
int main()
{
	int l1;
	int l2;
	int valinta;
	cout << "Anna luku: ";
	cin >> l1;
	cout << "Anna toinen luku: ";
	cin >> l2;

	cout << "VALIKKO\n1. Summa\n2. Erotus\n3. Tulo\n4. Osamaara\n5. Jakojaannos\n ";
	cout << "Valitse laskutoimitus: ";
	cin >> valinta;

	if (valinta == 1)
	{
		cout << l1 + l2 <<endl;
	}
	
	if (valinta == 2)
	{
		cout << l1 - l2 <<endl;
	}

	if (valinta == 3)
	{
		cout << l1 * l2 <<endl;
	}

	if (valinta == 4)
	{
		cout << (float)l1 / l2 <<endl;
	}

	if (valinta == 5)
	{
		cout << l1 % l2 <<endl;
	}
}