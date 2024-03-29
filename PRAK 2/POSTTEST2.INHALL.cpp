#include<iostream>
using namespace std;

int main(){
	char NIK[16];
	char tanggal[10];
	char rt_rw[6]; 
	string tempat;
	string nama;
	string jenis_kelamin;
	string alamat;
	string desa;
	string kecamatan;
	string agama;
	string status;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku_hingga;
	 
	cout<<"\t\t\tKABUPATEN TEMANGGUNG\n\t\t\tPROVINSI JAWA TENGAH"<<endl;
	
	cout<<"NIK : ";
	cin>>NIK;
	cin.ignore();
	cout<<"Nama : ";
	getline(cin, nama);
	cout<<"Tempat lahir : ";
	getline(cin, tempat);
	cout<<"Tanggal lahir : ";
	cin>>tanggal;
	cout<<"Jenis kelamin : ";
	cin>>jenis_kelamin;
	cout<<"Alamat : ";
	cin>>alamat; 
	cout<<"\tRT/RW : ";
	cin>>rt_rw;
	cout<<"\tKel/Desa : ";
	cin>>desa;
	cout<<"\tKecamatan : ";
	cin>>kecamatan;
	cout<<"Agama : ";
	cin>>agama;
	cout<<"Status Perkawinan : ";
	cin>>status;
	cout<<"Pekerjaan : ";
	cin>>pekerjaan;
	cout<<"Kewarganegaraan : ";
	cin>>kewarganegaraan;
	cout<<"Berlaku Hingga : ";
	cin>>berlaku_hingga;
	
}
