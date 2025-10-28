#include <iostream>
using namespace std;

int main()
{
	int a, bil=1;
	cout << "Masukan jumlah suku Fibonacci: ";
	cin >> a;
	
	while(bil<=a){
		cout<<bil<<" ";
		bil++;
	}
	getchar();
}
