#include <iostream>
using namespace std;
int main () {
	
	int kursi [2][3] = {
	{1, 0, 1}, {0, 0, 1}
	};
	
	cout << "Denah kursi bioskop : " << endl;
	
	for (int i = 0; i < 2; i++)
	{
	
	for (int j = 0; j < 3; j++)
	{
	cout << kursi[i][j] << " ";
	}
	cout << endl;
	}
	
	return 0;
}
