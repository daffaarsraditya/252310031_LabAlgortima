#include <iostream>
using namespace std;

int main() 
{
	int x, y, tambah, kurang, kali, bagi;
	
	cout << "Masukan bilangan kesatu = ";
	cin >> x;
	cout << "Masukan bilangan kedua = ";
	cin >> y;
	
	tambah = x+y;
	kurang = x-y;
	kali = x*y;
	bagi = x/y;
	
	cout << "Jadi hasil penjumahan adalah = " << tambah<<endl;
	cout << "Jadi hasil pengurangan adalah = " << kurang<<endl;
	cout << "Jadi hasil pengkalian adalah = " << kali<<endl;
	cout << "Jadi hasil pembagian adalah = " << bagi<<endl;
	
	return 0;
}
