#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

main()
{
	int i ,kode;
	
	struct
	{
	string nama ,nik ,notelp ,ins
	,keputusan;
	
	int i ,kode;
	
	long deposit ,pinjam ,hasil_deps ,hasil_pinjam ,lama_deps ,lama_pinjam ,total_deps ,total_pinjam;
	
	} ldr;
	
   time_t now = time(0);
   
   char* dt = ctime(&now);

   cout << "" << dt << endl;
    
	cout<<"====================================================================="<<endl;
	cout<<"|               BANK LDR (LAYANAN DEPOSITO RAKYAT)                  |"<<endl;          
	cout<<"====================================================================="<<endl;
	
	cout<<"Mengapa 50 juta lebih nasabah memilih kami?"<<endl;
	cout<<"1.Kami Melayani Deposito dengan Imbal Balik yang Tinggi"<<endl;
	cout<<"2.Kami Melayani Peminjaman dengan Bunga yang bersaing"<<endl;
	cout<<"3.Mystery Gift Deposito yang menarik setiap tahunnya!"<<endl;
	cout<<"---------------------------------------------------------------------"<<endl;
	
	cout<<"Masukan Nama Nasabah = ";
	getline(cin,ldr.nama);
	
	cout<<"Masukan NIK Nasabah = ";
	getline(cin,ldr.nik);
	
	cout<<"Masukan Nomor Telepon Nasabah = ";
	getline(cin,ldr.notelp);
	
	cout<<"Masukan Institusi Nasabah = ";	
	getline(cin,ldr.ins);
	
	cout<<"---------------------------------------------------------------------"<<endl;
	
	cout<<""<<endl;
	cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
	cout<<""<<endl;
	cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
	cout<<""<<endl;
	
	cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
	
	
	for (i=1 ; i<=10 ; i++)
 	{
 		cout<<"--------------------------------------------------------------"<<endl<<endl;
 		cout<<"Transaksi Ke - "<<i<<endl<<endl;
 	
	 
	 	
 	switch(ldr.kode)
	{	
	
		case 1:
			cin.ignore();
		{	
			
	cout<<"Anda telah memilih deposito"<<endl;
	
	cout<<""<<endl;
	
	cout<<"Berikut merupakan list Deposito dari Bank LDR (Belum termasuk Pajak 10%)"<<endl;
	
	cout<<"====================================================================="<<endl;
	cout<<"|  Jumlah Uang  |    Bunga setahun    |       Bunga dua tahun       |"<<endl;
	cout<<"====================================================================="<<endl;
	cout<<"|    1 juta     |      2.4%/tahun     |          4.8%/tahun         |"<<endl;
	
	cout<<"|    10 juta    |      3.6%/tahun     |          7.2%/tahun         |"<<endl;
	
	cout<<"|    100 juta   |      6.0%/tahun     |         12.0%/tahun         |"<<endl;
	
	cout<<"|    1 miliar   |      8.4%/tahun     |         16.8%/tahun         |"<<endl;
    cout<<"====================================================================="<<endl;	
    
    cout<<"Catatan Tambahan :"<<endl;
    
    cout<<"-Jangka waktu deposito maksimal adalah 3 tahun"<<endl;
    cout<<"-Semakin lama anda menabung, semakin untung!"<<endl;
    
    cout<<""<<endl;
    
    cout<<"Contoh Nominal yang sesuai adalah :"<<endl;
    cout<<"a. 1 Juta Rupiah (Ditulis : 1000000 saja)"<<endl;
    
    cout<<""<<endl;	
	
	cout<<"Masukan Jumlah Uang Deposito = ";cin>>ldr.deposit;	
	
	cout<<"Masukan Lama Menabung (Tahun) = ";cin>>ldr.lama_deps;
	
	cout<<""<<endl;	
	
	if (ldr.deposit >= 1000000 && ldr.deposit <= 1000000)
	{
		if (ldr.lama_deps == 1)
		{
			cout<<"Bunga yang anda peroleh adalah 2.4%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.024 * ldr.lama_deps * 0.9;
		
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_deps == 2)
		{
			cout<<"Bunga yang anda peroleh adalah 4.8%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.048 * ldr.lama_deps * 0.9;
			
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_deps == 3)
		{
			cout<<"Bunga yang anda peroleh adalah 4.8%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.048 * ldr.lama_deps * 0.9;
			
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"==============================================="<<endl;
			cout<<"|SELAMAT! ANDA BERHASIL MENDAPATKAN IPHONE 13!|"<<endl;
			cout<<"==============================================="<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
    	}
			
		else
		{
			cout<<"Maaf Deposito Maksimal hanya sampai 3 tahun"<<endl;
			
			cout<<"Contoh Format Penulisan Deposito (Tahun) = 1"<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" || ldr.keputusan=="yA" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
					  
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
			
		}	
	}
	
	else if (ldr.deposit >= 10000000 && ldr.deposit <= 10000000)
	{
		if (ldr.lama_deps == 1)
		{
			cout<<"Bunga yang anda peroleh adalah 3.6%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.036 * ldr.lama_deps * 0.9;
		
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_deps == 2)
		{
			cout<<"Bunga yang anda peroleh adalah 7.2%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.072 * ldr.lama_deps * 0.9;
			
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_deps == 3)
		{
			cout<<"Bunga yang anda peroleh adalah 7.2%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.072 * ldr.lama_deps * 0.9;
			
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"===================================================="<<endl;
			cout<<"|SELAMAT! ANDA BERHASIL MENDAPATKAN MOTOR PCX 2023!|"<<endl;
			cout<<"===================================================="<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
    	}
		
		else
		{
			cout<<"Maaf Deposito Maksimal hanya sampai 3 tahun"<<endl;
			
			cout<<"Contoh Format Penulisan Deposito (Tahun) = 1"<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" || ldr.keputusan=="yA" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
			
		}	
	}	
	
	else if (ldr.deposit >= 100000000 && ldr.deposit <= 100000000)
	{
		if (ldr.lama_deps == 1)
		{
			cout<<"Bunga yang anda peroleh adalah 6.0%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.06 * ldr.lama_deps * 0.9;
		
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_deps == 2)
		{
			cout<<"Bunga yang anda peroleh adalah 12.0%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.12 * ldr.lama_deps * 0.9;
			
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_deps == 3)
		{
			cout<<"Bunga yang anda peroleh adalah 12.0%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.12 * ldr.lama_deps * 0.9;
			
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"======================================================================"<<endl;
			cout<<"|SELAMAT! ANDA BERHASIL MENDAPATKAN Mobil Mercedes Benz S-Class 2023!|"<<endl;
			cout<<"======================================================================"<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
    	}		
		
		else
		{
			cout<<"Maaf Deposito Maksimal hanya sampai 3 tahun"<<endl;
			
			cout<<"Contoh Format Penulisan Deposito (Tahun) = 1"<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" || ldr.keputusan=="yA" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
			
		}	
	}	
	
	else if (ldr.deposit >= 1000000000 && ldr.deposit <= 1000000000)
	{
		if (ldr.lama_deps == 1)
		{
			cout<<"Bunga yang anda peroleh adalah 8.4%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.084 * ldr.lama_deps * 0.9;
		
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_deps == 2)
		{
			cout<<"Bunga yang anda peroleh adalah 16.8%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.168 * ldr.lama_deps * 0.9;
			
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_deps == 3)
		{
			cout<<"Bunga yang anda peroleh adalah 16.8%/tahun (pajak 10%)"<<endl;
			
			ldr.hasil_deps = ldr.deposit * 0.168 * ldr.lama_deps * 0.9;
			
			cout<<"Imbal Balik Deposito Anda adalah = "<<ldr.hasil_deps<<endl;
			
			cout<<""<<endl;
			
			ldr.total_deps = ldr.hasil_deps + ldr.deposit;
			
			cout<<"Total Uang Anda setelah jatuh tempo adalah = "<<ldr.total_deps<<endl;
			
			cout<<"==============================================================================="<<endl;
			cout<<"|SELAMAT! ANDA BERHASIL MENDAPATKAN RUMAH 12x12 BERLOKASI DI RANCAMAYA ESTATE!|"<<endl;
			cout<<"==============================================================================="<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
    	}		
		
		else
		{
			cout<<"Maaf Deposito Maksimal hanya sampai 3 tahun"<<endl;
			
			cout<<"Contoh Format Penulisan Deposito (Tahun) = 1"<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" || ldr.keputusan=="yA" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
			
		}	
	}	
	
	else
	{
		cout<<"Maaf, Deposito Anda tidak valid.Masukan Nominal sesuai ketentuan."<<endl;
		cout<<"Ketentuan Nominal yang sesuai adalah :"<<endl;
		cout<<"a. 1 Juta Rupiah (Ditulis : 1000000 saja)"<<endl;
		cout<<"b. 10 Juta Rupiah (Ditulis : 10000000 saja)"<<endl;
		cout<<"c. 100 Juta  Rupiah (Ditulis : 100000000 saja)"<<endl;
		cout<<"d. 1 Miliar Rupiah (Ditulis : 1000000000 saja)"<<endl;
    
   	    cout<<""<<endl;	
    
	    cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
     	cin>>ldr.keputusan;
     	
     	
		if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" || ldr.keputusan=="yA" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
		else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
	}

		}
	
	
	
	break;
	
	
	
		case 2:
			cin.ignore();
		{
			
	cout<<"Anda telah memilih Peminjaman"<<endl;
	
	cout<<""<<endl;
	
	cout<<"Berikut merupakan list Peminjaman dari Bank LDR"<<endl;
	
	cout<<"====================================================================="<<endl;
	cout<<"|  Jumlah Uang  |    Bunga setahun    |       Bunga dua tahun       |"<<endl;
	cout<<"====================================================================="<<endl;
	cout<<"|    1 juta     |      3.6%/tahun     |          7.2%/tahun         |"<<endl;
	
	cout<<"|    10 juta    |      6.0%/tahun     |         12.0%/tahun         |"<<endl;
	
	cout<<"|    100 juta   |      8.4%/tahun     |         16.8%/tahun         |"<<endl;
    cout<<"====================================================================="<<endl;	
    
    cout<<"Catatan :"<<endl;
    
    cout<<"-Tersedia peminjaman 1 tahun (contoh : 1)"<<endl;
    cout<<"-Tersedia peminjaman 2 tahun (contoh : 2)"<<endl;
    
    cout<<""<<endl;
    
    cout<<"Contoh Nominal yang sesuai adalah :"<<endl;
    cout<<"a. 1 Juta Rupiah (Ditulis : 1000000 saja)"<<endl;
    
    cout<<""<<endl;		
    
    cout<<"Masukan Jumlah Uang pinjaman = ";cin>>ldr.pinjam;	
	
	cout<<"Masukan Lama Meminjam (Tahun) = ";cin>>ldr.lama_pinjam;
	
	cout<<""<<endl;

	if (ldr.pinjam >= 1000000 && ldr.pinjam <= 1000000)
	{
		if (ldr.lama_pinjam == 1)
		{
			cout<<"Bunga pinjaman yang anda peroleh adalah 3.6%/tahun"<<endl;
			
			ldr.hasil_pinjam = (ldr.pinjam + (ldr.pinjam * 0.036 * ldr.lama_pinjam));
		
			cout<<"Total tagihan anda adalah = "<<ldr.hasil_pinjam<<endl;
			
			cout<<""<<endl;
			
			ldr.total_pinjam = ldr.hasil_pinjam / (ldr.lama_pinjam * 12) ;
			
			cout<<"Tagihan yang harus dibayar perbulan adalah = "<<ldr.total_pinjam<<endl;
			
			cout<<""<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_pinjam == 2)
		{
			cout<<"Bunga pinjaman yang anda peroleh adalah 7.2%/tahun"<<endl;
			
			ldr.hasil_pinjam = (ldr.pinjam + (ldr.pinjam * 0.072 * ldr.lama_pinjam));
		
			cout<<"Total tagihan anda adalah = "<<ldr.hasil_pinjam<<endl;
			
			cout<<""<<endl;
			
			ldr.total_pinjam = ldr.hasil_pinjam / (ldr.lama_pinjam * 12) ;
			
			cout<<"Tagihan yang harus dibayar perbulan adalah = "<<ldr.total_pinjam<<endl;
			
			cout<<""<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}		
		
	else
	{
		cout<<"Maaf, Peminjaman Anda tidak valid.Masukan Tahun sesuai dengan ketentuan."<<endl;
		
   	    cout<<""<<endl;	
   	    
   	    cout<<"Ketentuan Tahun yang sesuai adalah :"<<endl;
        cout<<"a. 1 (Tahun)"<<endl;
        cout<<"b. 2 (Tahun)"<<endl;
        
        cout<<""<<endl;	
        
	    cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
     	cin>>ldr.keputusan;
     	
     	
		if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" || ldr.keputusan=="yA" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
		else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
	}			
	}
	
	else if (ldr.pinjam >= 10000000 && ldr.pinjam <= 10000000)
	{
		if (ldr.lama_pinjam == 1)
		{
			cout<<"Bunga pinjaman yang anda peroleh adalah 6.0%/tahun"<<endl;
			
			ldr.hasil_pinjam = (ldr.pinjam + (ldr.pinjam * 0.06 * ldr.lama_pinjam));
		
			cout<<"Total tagihan anda adalah = "<<ldr.hasil_pinjam<<endl;
			
			cout<<""<<endl;
			
			ldr.total_pinjam = ldr.hasil_pinjam / (ldr.lama_pinjam * 12) ;
			
			cout<<"Tagihan yang harus dibayar perbulan adalah = "<<ldr.total_pinjam<<endl;
			
			cout<<""<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_pinjam == 2)
		{
			cout<<"Bunga pinjaman yang anda peroleh adalah 12%/tahun"<<endl;
			
			ldr.hasil_pinjam = (ldr.pinjam + (ldr.pinjam * 0.12 * ldr.lama_pinjam));
		
			cout<<"Total tagihan anda adalah = "<<ldr.hasil_pinjam<<endl;
			
			cout<<""<<endl;
			
			ldr.total_pinjam = ldr.hasil_pinjam / (ldr.lama_pinjam * 12) ;
			
			cout<<"Tagihan yang harus dibayar perbulan adalah = "<<ldr.total_pinjam<<endl;
			
			cout<<""<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}		
		
	else
	{
		cout<<"Maaf, Peminjaman Anda tidak valid.Masukan Tahun sesuai dengan ketentuan."<<endl;
		
   	    cout<<""<<endl;	
   	    
   	    cout<<"Ketentuan Tahun yang sesuai adalah :"<<endl;
        cout<<"a. 1 (Tahun)"<<endl;
        cout<<"b. 2 (Tahun)"<<endl;
        
        cout<<""<<endl;	
        
	    cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
     	cin>>ldr.keputusan;
     	
     	
		if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" || ldr.keputusan=="yA" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
		else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
	}			
	}
	
	else if (ldr.pinjam >= 100000000 && ldr.pinjam <= 100000000)
	{
		if (ldr.lama_pinjam == 1)
		{
			cout<<"Bunga pinjaman yang anda peroleh adalah 8.4%/tahun"<<endl;
			
			ldr.hasil_pinjam = (ldr.pinjam + (ldr.pinjam * 0.084 * ldr.lama_pinjam));
		
			cout<<"Total tagihan anda adalah = "<<ldr.hasil_pinjam<<endl;
			
			cout<<""<<endl;
			
			ldr.total_pinjam = ldr.hasil_pinjam / (ldr.lama_pinjam * 12) ;
			
			cout<<"Tagihan yang harus dibayar perbulan adalah = "<<ldr.total_pinjam<<endl;
			
			cout<<""<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}
		
		else if (ldr.lama_pinjam == 2)
		{
			cout<<"Bunga pinjaman yang anda peroleh adalah 16.8%/tahun"<<endl;
			
			ldr.hasil_pinjam = (ldr.pinjam + (ldr.pinjam * 0.168 * ldr.lama_pinjam));
		
			cout<<"Total tagihan anda adalah = "<<ldr.hasil_pinjam<<endl;
			
			cout<<""<<endl;
			
			ldr.total_pinjam = ldr.hasil_pinjam / (ldr.lama_pinjam * 12) ;
			
			cout<<"Tagihan yang harus dibayar perbulan adalah = "<<ldr.total_pinjam<<endl;
			
			cout<<""<<endl;
			
			cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
			cin>>ldr.keputusan;
			
			if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
			else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
		}		
		
	else
	{
		cout<<"Maaf, Peminjaman Anda tidak valid.Masukan Tahun sesuai dengan ketentuan."<<endl;
		
   	    cout<<""<<endl;	
   	    
   	    cout<<"Ketentuan Tahun yang sesuai adalah :"<<endl;
        cout<<"a. 1 (Tahun)"<<endl;
        cout<<"b. 2 (Tahun)"<<endl;
        
        cout<<""<<endl;	
        
	    cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
     	cin>>ldr.keputusan;
     	
     	
		if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" || ldr.keputusan=="yA" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
		else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
	}			
	}
	
		else
	{
		cout<<"Maaf, Peminjaman Anda tidak valid.Masukan Nominal sesuai ketentuan."<<endl;
		cout<<"Ketentuan Nominal yang sesuai adalah :"<<endl;
		cout<<"a. 1 Juta Rupiah (Ditulis : 1000000 saja)"<<endl;
		cout<<"b. 10 Juta Rupiah (Ditulis : 10000000 saja)"<<endl;
		cout<<"c. 100 Juta  Rupiah (Ditulis : 100000000 saja)"<<endl;
    
   	    cout<<""<<endl;	
    
	    cout<<"Apakah anda ingin Melanjutkan Transaksi? (Y/N)"<<endl;
     	cin>>ldr.keputusan;
     	
     	
		if (ldr.keputusan=="Ya" || ldr.keputusan=="Y" || ldr.keputusan=="ya" || ldr.keputusan=="y" || ldr.keputusan=="yA" )
			{
					cout<<"---------------------------------------------------------------------"<<endl;
	
					cout<<""<<endl;
					cout<<"Masukan KODE 1 untuk Melakukan Deposito"<<endl;
					cout<<""<<endl;
					cout<<"Masukan KODE 2 untuk Melakukan Peminjaman"<<endl;
	
					cout<<""<<endl;
	
					cout<<"Pilihlah jenis layanan yang anda inginkan (1/2) = ";cin>>ldr.kode;
			}
			
		else
			{
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Terimakasih telah menggunakan jasa Bank LDR :)"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Semoga harimu menyenangkan, "<<ldr.nama<<endl;
				return 1;
			}
	}

	}
	}	

}

}
