#include <fstream>
#include <iostream>
#include <stdio.h>
using namespace std;

class pemesanan {
public:
  void login();
  void saldo();
  void belanja();
  void alamat();
  void proteksi();
  void ekspedisi();
  void grakir();
  void invoice();
  void metode();
  void struck();

  char user[50];
  int pw, uang = 200000, koin=11000, va=1234567;
  int banyak, pilih, kode_barang, harga[], jumlah, method;
  int protek_barang, biaya, kurir, fee, ongkir, voucher, diskon_ongkir, total ;
  char protek ;
  string nama_barang[50], tujuan, eks;
};

void pemesanan::login() {
  cout << "Silahkan login terlebih dahulu" << endl;
  cout << "  Username \t: ";
  cin.getline(user, 50);
  cout << "  Password \t: ";
  cin >> pw;
  cout << endl << endl;
}

void pemesanan::saldo() {
  cout<<" \t~Welcome "<<user<<" ,:)  ~"<< endl;
  cout<<"  Saldo\t\t | \tKoin "<<endl;
  cout<<"Rp. "<<uang<<",-\t | \t"<<koin<<endl;
}

void pemesanan::belanja() {
  cout << "\n\n\t\tKATEGORI" << endl;
  cout << "1. Make Up" << endl;
  cout << "2. Perlengkapan Rumah Tangga" << endl;
  cout << "3. Fashion Wanita" << endl;
  cout << "4. Kesehatan" << endl;
  cout << "5. Elektronik" << endl;
  cout << "\nBerapa banyak barang yang akan dibeli ?" << endl;
  cout << "Banyak barang = ";
  cin >> banyak;
  for (int i = 1; i <= banyak; i++) {
    cout << "\nPilih kategori barang ke-"<<i<<" yang akan dibeli : ";
    cin >> pilih;

    switch (pilih) {
    case 1:
      cout << "\t Daftar Barang Kategori Make Up " << endl;
      cout << "---------------------------------" << endl;
      cout << " 1. Lipstik \t\t | Rp. 21.000,-" << endl;
      cout << " 2. Serum \t\t | Rp. 17.000,-" << endl;
      cout << " 3. Maskara \t\t | Rp. 19.000,-" << endl;
      cout << " 4. Micellar Water \t | Rp. 20.000,-" << endl;
      cout << " 5. Eyeliner \t\t | Rp. 25.000,-" << endl;
      cout << "\n------------------------------------" << endl;
      break;

    case 2:
      cout << "\t Daftar Barang Kategori Perlengkapan Rumah Tangga " << endl;
      cout << "---------------------------------" << endl;
      cout << " 1. Panci \t\t | Rp. 35.000,-" << endl;
      cout << " 2. Lampu \t\t | Rp. 10.000,-" << endl;
      cout << " 3. Capit Udang \t | Rp. 2.000,-" << endl;
      cout << " 4. Pisau set \t\t | Rp. 20.000,-" << endl;
      cout << " 5. Keset lantai \t | Rp. 15.000,-" << endl;
      cout << "\n------------------------------------" << endl;
      break;

    case 3:
      cout << "\t Daftar Barang Kategori Fashion" << endl;
      cout << "---------------------------------" << endl;
      cout << " 1. Hijab Bella Square \t | Rp. 15.000,-" << endl;
      cout << " 2. Sepatu \t\t | Rp. 129.000,-" << endl;
      cout << " 3. Tunik \t\t | Rp. 69.000,-" << endl;
      cout << " 4. Rok Plisket \t | Rp. 35.000,-" << endl;
      cout << " 5. Kulot \t\t | Rp. 49.000,-" << endl;
      cout << "\n------------------------------------" << endl;
      break;

    case 4:
      cout << "\t Daftar Barang Kategori Kesehatan" << endl;
      cout << "---------------------------------" << endl;
      cout << " 1. Masker Duckbil 1 dus \t | Rp. 25.000,-" << endl;
      cout << " 2. Madu TJ \t\t\t | Rp. 17.000,-" << endl;
      cout << " 3. Thermo Gun \t\t\t | Rp. 76.000,-" << endl;
      cout << " 4. Hand Sanitizer \t\t | Rp. 85.000,-" << endl;
      cout << " 5. Vit C IPI \t\t\t | Rp. 12.000,-" << endl;
      cout << "\n------------------------------------" << endl;
      break;

    case 5:
      cout << "\t Daftar Barang Kategori Elektronik " << endl;
      cout << "---------------------------------" << endl;
      cout << " 1. Mixer \t\t | Rp. 172.000,-" << endl;
      cout << " 2. LG LCD TV \t\t | Rp. 1.320.000,-" << endl;
      cout << " 3. hp Pavilion \t | Rp. 14.000.000,-" << endl;
      cout << " 4. Epson printer \t | Rp. 3.000.000,-" << endl;
      cout << " 5. Iphone X \t\t | Rp. 13.000.000,-" << endl;
      cout << "\n------------------------------------" << endl;
      break;
   	}
    cout << "Masukkan kode barang ke-"<<i<<" yang akan dibeli : ";
    cin >> kode_barang;
    if (pilih==1 && kode_barang==1)
   {
   	nama_barang[i]="Lipstik";
   	harga[i]=21000;
	}
	else if (pilih==1 && kode_barang==2)
	{
		nama_barang[i]="Serum";
		harga[i]=17000;
	}
	else if (pilih==1 && kode_barang==3)
	{
		nama_barang[i]="Maskara";
		harga[i]=19000;
	}
	else if (pilih==1 && kode_barang==4)
	{
		nama_barang[i]="Micellar Water";
		harga[i]=20000;
	}
	else if (pilih==1 && kode_barang==5)
	{
		nama_barang[i]="Eyeliner";
		harga[i]=25000;
	}
	else if (pilih==2 && kode_barang==1)
	{
		nama_barang[i]="Panci";
		harga[i]=35000;
	}
	else if (pilih==2 && kode_barang==2)
	{
		nama_barang[i]="Lampu";
		harga[i]=10000;
	}
	else if (pilih==2 && kode_barang==3)
	{
		nama_barang[i]="Capit Udang";
		harga[i]=2000;
	}
	else if (pilih==2 && kode_barang==4)
	{
		nama_barang[i]="Pisau set";
		harga[i]=20000;
	}
	else if (pilih==2 && kode_barang==5)
	{
		nama_barang[i]="Keset lantai";
		harga[i]=15000;
	}
	else if (pilih==3 && kode_barang==1)
	{
		nama_barang[i]="Hijab Bella Square";
		harga[i]=15000;
	}
	else if (pilih==3 && kode_barang==2)
	{
		nama_barang[i]="Sepatu";
		harga[i]=129000;
	}
	else if (pilih==3 && kode_barang==3)
	{
		nama_barang[i]="Tunik";
		harga[i]=69000;
	}
	else if (pilih==3 && kode_barang==4)
	{
		nama_barang[i]="Rok Plisket";
		harga[i]=35000;
	}
	else if (pilih==3 && kode_barang==5)
	{
		nama_barang[i]="Kulot";
		harga[i]=49000;
	}
	else if (pilih==4 && kode_barang==1)
	{
		nama_barang[i]="Masker Duckbil 1 dus";
		harga[i]=25000;
	}
	else if (pilih==4 && kode_barang==2)
	{
		nama_barang[i]="Madu TJ";
		harga[i]=17000;
	}
	else if (pilih==4 && kode_barang==3)
	{
		nama_barang[i]="Thermo Gun";
		harga[i]=76000;
	}
	else if (pilih==4 && kode_barang==4)
	{
		nama_barang[i]="Hand Sanitizer";
		harga[i]=85000;
	}
	else if (pilih==4 && kode_barang==5)
	{
		nama_barang[i]="Vit C IPI";
		harga[i]=12000;
	}
	else if (pilih==5 && kode_barang==1)
	{
		nama_barang[i]="Mixer";
		harga[i]=172000;
	}
	else if (pilih==5 && kode_barang==2)
	{
		nama_barang[i]="LGLCD TV";
		harga[i]=1320000;
	}
	else if (pilih==5 && kode_barang==3)
	{
		nama_barang[i]="HP Pavilion";
		harga[i]=14000000;
	}
	else if (pilih==5 && kode_barang==4)
	{
		nama_barang[i]="Epson Printer";
		harga[i]=3000000;
	}
	else if (pilih==5 && kode_barang==5)
	{
		nama_barang[i]="Iphone X";
		harga[i]=13000000;
	}
   }
  	cout<<"Barang yang akan dibeli adalah "<<endl;
  	cout<<"\nNo Nama Barang \t\t\tHarga"<<endl;
  	cout<<"________________________________________"<<endl;
  	ofstream cetak;
   cetak.open("struk.txt");
	for (int i = 1; i <= banyak; i++)
		{
	  		cetak<<i<<". "<<nama_barang[i]<<"\t\t\tRp. "<<harga[i]<<",-"<<endl;
	  		jumlah+=harga[i];
 	  	}
 	cetak<<"----------------------------------------"<<endl;
 	
 	cout<<"Jumlah Belanja \t\t:\tRp. "<<jumlah<<",-"<<endl;
}

void pemesanan::alamat() {
  cout<<"\nTentukan alamat pengiriman ";
  cin.ignore();
  getline (cin, tujuan,'\n');
  cout<<endl; 
}

void pemesanan::proteksi() {
  cout << "Apakah memerlukan proteksi barang ?"<<endl;
  cout<<"( Y / T )  = ";
  cin >> protek;
  if (protek == 'y' | protek == 'Y') {
  	protek_barang=2000;
  	biaya=jumlah+protek_barang;   
  }
  else
  {
  	protek_barang=0;
  	biaya=jumlah+protek_barang;
  } 
  cout<<biaya;
}

void pemesanan::ekspedisi() {
  cout << "\nPilihan Ekspedisi" << endl;
  cout << " 1. J&T \t\t(Rp. 30.000)" << endl;
  cout << " 2. JNE \t\t(Rp. 20.000)" << endl;
  cout << " 3. Sicepat \t\t(Rp. 15.000)" << endl;
  cout << " 4. Anteraja \t\t(Rp. 21.000)" << endl;
  cout << " 5. Ninja Express \t(Rp. 34.000)" << endl;
  cout << "\nTentukan ekspedisi yang akan digunakan ";
  cin >> kurir;
  switch (kurir) {
  case 1:
  	 eks="J&T";
    fee = 30000;
    break;
  case 2:
  	 eks="JNE";
    fee = 20000;
    break;
  case 3:
  	 eks="Sicepat";
    fee = 15000;
    break;
  case 4:
  	 eks="Anteraja";
    fee = 21000;
    break;
  case 5:
  	 eks="Ninja Express";
    fee = 34000;
    break;
  }
  cout<<eks;
  cout<<fee<<endl;
}

void pemesanan::grakir() {
	if (jumlah<=10000)
	{
		cout<<"Tidak ada voucher yang bisa digunakan"<<endl;;
	}
	if (30000>=jumlah>=10000)
   { 
		cout << "\n1. voucher gratis ongkir s.d Rp.10.000"<<endl;
		cout << "Pilih voucher ";
  		cin >> voucher;
	}
	else if (jumlah>30000)
  	{
   	cout << "1. voucher gratis ongkir s.d Rp.10.000" << endl;
   	cout << "2. voucher gratis ongkir s.d Rp.30.000" << endl;
   	cout << "3. voucher cashback 30%" << endl;
   	cout << "Pilih voucher ";
  		cin >> voucher;
  	}

  if(voucher==1)
  {
	diskon_ongkir=10000;
  }
  else if(voucher==2)
  {
   diskon_ongkir=30000;
  }
  else if(voucher==3)
  {
  	koin=koin+(0.3*jumlah);
  	diskon_ongkir=0;
  }
  cout<<diskon_ongkir<<endl;;
  ongkir=fee-diskon_ongkir;
  if (ongkir<=0)
  {
  	total=biaya;
  }
  else
  {
  	total=biaya+ongkir;
  }
  	cout<<total;
  	cout<<koin;
}

void pemesanan::invoice() {
	cout<<"\t\tINVOICE PEMESANAN"<<endl;
   cout<<"\n\nPenerima  : "<<user<<endl;
   cout<<" "<<tujuan<<endl;
   cout<<"___________________________"<<endl;
   cout<<"Pesanan"<<endl;
   cout<<"-------------"<<endl;

   for (int i = 1; i <= banyak; i++)
	{
		cout<<i<<". "<<nama_barang[i]<<"\t\t\t\tRp. "<<harga[i]<<",-"<<endl;
		jumlah+=harga[i];
 	}
 	cout<<"-------------------------------------------------"<<endl;
 	
 	cout<<"Jumlah Belanja \t\t\t:\tRp. "<<jumlah<<",-"<<endl;
 	cout<<"Biaya Proteksi \t\t\t:\tRp. "<<protek_barang<<",-"<<endl;
 	cout<<"Ekspedisi \t: "<<eks<<endl;
 	cout<<"Biaya Ongkir \t\t\t:\tRp. "<<fee<<",-"<<endl;
 	cout<<"Diskon Ongkir \t\t\t:\tRp. "<<diskon_ongkir<<",-"<<endl;
 	cout<<"Total Bayar \t\t\t:\tRp. "<<total<<",-"<<endl;
}


void pemesanan::metode() {
	cout<<"Pilih Metode Pembayaran"<<endl;
	cout<<"1. Saldo "<<endl;
	cout<<"2. Transfer Bank"<<endl;
	cin>>method;
	if (method==1)
	{
		uang=uang-total;
		cout<<"Pembayaran dari saldo telah berhasil"<<endl;
		cout<<"Sisa Saldo = "<<uang;
	}
	else if (method==2)
	{
		cout<<va<<endl;
	}
}

 void pemesanan::struck()
{
        ofstream cetak;
        cetak.open("struk.txt");
        if (cetak == NULL)
        {
            cetak<<"file tidak bisa dibuka";
        }
        else
        {
            cetak<<"\t\tINVOICE PEMESANAN"<<endl;
   			cetak<<"\n\n "<<user<<endl;
   			cetak<<" "<<tujuan<<endl;
   			cetak<<"___________________________"<<endl;
   			cetak<<"Pesanan"<<endl;
   			cetak<<"-------------"<<endl;		
   			for (int i = 1; i <= banyak; i++)
				{
					cetak<<i<<". "<<nama_barang[i]<<"\t\t\t\tRp. "<<harga[i]<<",-"<<endl;
					jumlah+=harga[i];
 				}
 				cetak<<"------------------------------------------------------------"<<endl;
 				cetak<<"Jumlah Belanja \t\t\t:\tRp. "<<jumlah<<",-"<<endl;
 				cetak<<"Biaya Proteksi \t\t\t:\tRp. "<<protek_barang<<",-"<<endl;
 				cetak<<"Ekspedisi \t: "<<eks<<endl;
 				cetak<<"Biaya Ongkir \t\t\t:\tRp. "<<fee<<",-"<<endl;
 				cetak<<"Diskon Ongkir \t\t\t:\tRp. "<<diskon_ongkir<<",-"<<endl;
 				cetak<<"Total Bayar \t\t\t:\tRp. "<<total<<",-"<<endl;
        }
}

int main() {
  pemesanan x;
  x.login();
  x.saldo();
  x.belanja();
  x.proteksi();
  x.alamat();
  x.ekspedisi();
  x.grakir();
  x.invoice();
  x.metode();
  x.struck();
}
	

