#include<iostream>
using namespace std;
int main()
{
	const int jumlah_barang = 5;
	string nama_barang[jumlah_barang] = {"oppo", "samsung", "vivo", "iphone", "hwaway"};
	int stok_barang[jumlah_barang] = {4, 17, 43, 9, 10}; //harga barang
	int harga_barang[jumlah_barang] = {3000, 7000, 5000, 100000, 4000};
	int total_harga = 0;
	bool belanja_lagi = true;
	while(belanja_lagi)
	{
	cout<<"Selamat datang di toko handphone!!!"<<endl;
	cout<<"HP yang ready : \n1. oppo\n2. samsung\n3. vivo\n4. iphone\n5 hwaway"<<endl;
	int pilihan;
	cout<<"Pilih jenis HP (1-5) : "; cin>>pilihan;
	if(pilihan >= 1 && pilihan <= jumlah_barang)
	{
		int jumlah_beli;
		cout<<"jumlah yang ingin dibeli : ";
		cin>>jumlah_beli;
		if(jumlah_beli <= stok_barang[pilihan - 1])
		{
			int total_harga_barang = harga_barang[pilihan - 1] * jumlah_beli;
			stok_barang[pilihan] -= jumlah_beli;
			cout<<"Anda membeli: "<<endl;
			cout<<"Nama Barang: "<<nama_barang[pilihan - 1]<<endl;
			cout<<"Harga Barang: "<<harga_barang[pilihan - 1]<<endl;
			cout<<"Jumlah: "<<jumlah_beli<<endl;
			cout<<"Total harga: "<<total_harga_barang<<endl;
		}
		else
		{
			cout<<"Maaf, stok tidak mencukupi"<<endl;	
		}	
	}else if(pilihan == 0)
	{
		cout<<"maaf pilihan anda salah"<<endl;
		belanja_lagi = false;
	}
	else
	{
		cout<<"pilihan tidak valid. silahkan pilih lagi."<<endl;
	}
}
return 0;
	//if(pilihan == 1)
	
//	for (int i = 0; i<jumlah_barang; i++)
//	{
//		cout<<i+1<<". "<<nama_barang[i] <<" - $"<<harga_barang[i]<<" (Stok: "<<stok_barang[i]
//	}
//	for(int i = 0; i < jumlah_barang; i++)
//	{
//	
//	cout<<"HP yang ready : \n1. oppo\n2. samsung\n3. vivo\n4. iphone\n5 hwaway"<<endl;
//	}

	
}
