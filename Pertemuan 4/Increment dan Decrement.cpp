using namespace std;
#include <iostream>

int main() 
{
  int a = 5;
  
  cout << "Nilai awal a = " << a << endl;
  
  // Pre-intrement : a ditambah dulu jadi 6 lalu ditampilkan
  cout << "Pre-increment -> ++a = " << ++a << endl;
  
  // a = 6
  
  // Post-incremet : nilai lama a=6 ditampilkan dulu, lalu a jadi 7
  cout << "Post-increment -> a++ = " << a++ << ", sekarang a = " << a << endl;
  
  // Pre-decremet : a dikurang dulu, jadi 6, lalu ditampilkan 
  cout << "Pre-decrement -> --a =" << --a << endl;
  
  //a = 6
  
  // Post-decremet : nilai lama a=6 ditambahkan dulu, lalu ditampilkan dulu, lalu ditampilkan
  cout << "Post-decrement -> a-- = " << a-- << ", sekarang a = " << a << endl; 
  
  return 0;
}
