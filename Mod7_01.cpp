#include <iostream>
using namespace std;
int main () {
	
	int suhu [7] = {30, 32, 31, 33, 29, 30, 34};
	int total = 0;
	float RataRata;
	
	for (int i = 0; i < 7; i++)
	{	
		total = total + suhu [i];
	}
	
	RataRata = (float) total / 7;
	
	cout << "Total suhu dalam seminggu = " << total << endl;
	cout << "Rata-Rata suhu dalam seminggu = " << RataRata << endl;
	
	return 0;
}
