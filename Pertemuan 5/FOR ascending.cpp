#include <iostream>
using namespace std;

int main()
{
	int awal, akhir;
	
	cout << "Mualai dari = ";
	cin >> awal;
	cout << "Berahir di = ";
	cin >> akhir;
	
	
	for(int a = awal; a <= akhir; a++)
	{
		cout << a << ". I'm happy" << endl;
	}
	return 0;
}
