#include <iostream>
using namespace std;
int main () {
	
	int harga [5] = {5000, 10000, 15000, 20000, 25000};
	int temp;
	temp = harga [0];
	
	for (int i = 1; i < 5; i++)
	{
		if (harga [i] < temp) {
			temp = harga [i];
		}
	}
	cout << "harga yang paling murah adalah: " << temp;
	
	return 0;
}
