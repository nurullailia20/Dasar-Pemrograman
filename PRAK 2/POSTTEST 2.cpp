#include<iostream>
using namespace std;

int main (){
	int NIK;
	string nama;
	string tempat,tanggallahir;
	string jeniskelamin;
	string Golongandarah;
	string alamat;
	int angka;
	string kelurahan;
	string kecamatan;
	string agama;
	string status;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku;
	
	cout<<"\t\t\t PROVINSI JAWA TENGAH \n \t\t\t KABUPATEN TEMANGGUNG "<<endl;
	cout<<"NIK \t: ";
	cin>>NIK; 
	
	cout<<"\nNama \t: ";
	getline (cin,nama);
	
	cout<<"\nTempat,Tgl Lahir \t:";
	cin>>angka;
	
	cout<<"\nJenis kelamin \t:  \tGol. Darah : ";
	cin>>jeniskelamin>>Golongandarah;
	
	cout<<"\nAlamat \t: ";
	getline (cin,alamat);
	
	cout<<"\n\tRT/RW \t: ";
	cin>>angka;
	
	cout<<"\n\tKel/Desa \t: ";
	cin>>kelurahan;
	
	cout<<"\n\tKecamatan \t: ";
	cin>>kecamatan;
	
	cout<<"\nAgama \t: ";
	cin>>agama;
	
	cout<<"\nStatus Perkawinan\t: ";
	getline(cin,status);
	
	cout<<"\nPekerjaan \t: \t\t\t\t\t\t\tTEMANGGUNG \n\t\t\t\t\t\t\t\t\t22-05-2018\n\n\t\t\t\t\t\t\t\t\t TTD";
	cin>>pekerjaan;
	
	cout<<"\nKewarganegaraan \t: ";
	cin>>kewarganegaraan;
	
	cout<<"\nBerlaku Hingga \t: ";
	getline (cin,berlaku);
	
		
	
}
