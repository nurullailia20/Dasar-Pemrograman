#include <iostream>
using namespace std;
int main (){
	string name ;
	string angka ;
	string prodi ;
	string fakultas ;
		
	cout << " Silahkan masukkan biodata anda "<<endl;
	cout << " Nama \t : ";
	cin >> name;
	
	cout << " NIM \t : " ;
	cin >> angka;
	
	cout << " Prodi \t : " ;
	cin >> prodi;
	
	cout << " Fakultas \t : ";
	cin >> fakultas;
	cout <<endl;
	
	cout <<"Biodata anda adalah sebagai berikut"<<endl;	
	cout << "Nama \t: " << name << endl;
	cout << "NIM \t: " << angka << endl;
	cout << "Prodi \t: " << prodi << endl;	
	cout << "Fakultas \t: " << fakultas << endl;
	return 0;
}
