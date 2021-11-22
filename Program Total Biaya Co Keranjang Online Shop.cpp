#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
   // cout<< "Nama : Shela Rana Kezyah " <<endl;
   // cout<< "NPM  : 2157051007        " <<endl;
   // cout<< "Kelas: A S1 Ilmu Komputer" <<endl;
   // cout<<     " PRE-TEST 3  "         <<endl;
   
//-----------------Title----------------------//

cout<< "Program Total Biaya Checkout Keranjang Online Shop"  <<endl;

//----------------Input----------------------//
int a;
//Masukkan Nominal//
cout<< "Total Harga Belanjaan = ";
cin>> a;

//---------------Output---------------------//
if (a < 50000) 
   cout <<"Total Harga beserta Ongkir = "<< (a + 41000)<<" "<<endl;
else if (a >= 50000, a<120000)
   cout <<"Total Harga beserta Ongkir = "<< (a + 11000)<<" "<<endl;
else if (a >= 120000)
   cout <<"Total Harga beserta Ongkir = "<<a<<" "<<endl;
   
   return 0;
}
	
