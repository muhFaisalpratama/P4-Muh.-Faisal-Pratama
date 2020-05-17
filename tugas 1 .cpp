//MUH. FAISAL PRATAMA
//F1B019092
//username : muhfaisalpratama
//password : f1b019092
#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<" \tSILAHKAN LOGIN TERLEBIH DAHULU ABANG..\n\n";
	cout<<" Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<" Masukkan Password  : ";cin>>pass;cout<<"\n";
			if (user == "muhfaisalpratama" && pass == "f1b019092")
			{
				cout<<"Selamat Mengerjakan Soal  \n";
			}
			else
			{
				cout<<"Ussername dan password anda salah silahkan coba kembali \n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}				
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");{
    ulangjwb :
    cout<<"\t\t\t\t\t=======================\n";
    cout<<"\t\t\t\t\t\tCOVID-19\n";
    cout<<"\t\t\t\t\t=======================\n\n";
    cout<<"SOAL PILIHAN GANDA"<<endl;
    cout<<"PILIHLAH JAWABAN YANG PALING BENAR!\n";
 cout<<"=========================================================================\n";
    cout<<"1. Di kota  mana virus corona pertama kali muncul?\n";
    string pilgan5[50]={"a. sanghai","b. wuhan","c. roma","d.    newyork"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"2. Bagaimana cara mencegah  COVID-19 , kecuali\n";
	string pilgan10[50]={"a. Cuci tangan","b. Merokok","c. Jaga jarak","d. Tetap di rumah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban : ";
     cin >> jawab;
            if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;} 
    cout<<"\n";
    cout<<"3. kapan COVID-19 pertama kali muncul \n";
	string pilgan6[50]={"a. Januari 2020","b. Desember 2019","c. Februari 2020","d. Maret 2020"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}     
	cout<<"\n";
	cout<<"4. Manakah jawaban di bawah ini yang merupakan gejala ringan COVID-19??\n";
	string pilgan9[50]={"a. Mual-mual","b. Batuk","c. Sakit gigi","d. Mata perih"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"5. Manakah jawaban di bawah ini yang merupakan gejala berat COVID-19 ?\n";
	string pilgan8[50]={"a. Demam","b. Kesulitan bernafas","c. Sakit tenggorokan","d. Diare"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
            if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"6. Negara mana saja yang belum terdampak COVID-19??\n";
    string pilgan2[50]={"a. Komoro","b. Kroasia","c. Kroasia","d. Afrika Selatan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"7. Berapakah jumlah korban meninggal akibat COVID-19 di Indonesia pada tgl 17 Mei 2020??\n";
	string pilgan3[50]={"a. 2239","b. 1089","c. 2098","d. 1239"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"8. Berapa pasien positif COVID-19 di Thailand??\n";
	string pilgan1[50]={"a.3020 pasien","b. 2150 pasien","c. 3025 pasien","d. 4030 pasien"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"9. Berapa jumlah pasien sembuh dari penyakit COVID-19 di seluruh Dunia pada tanggal 17 Mei 2020?\n";
	string pilgan4[50]={"a. 2,89 juta","b. 3,89 juta","c. 2,98 juta","d. 1,65 juta"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";
    cout<<"10. Siapakah dokter yang pertama kali meninggal karena COVID-19 di INDONESIA??\n";
	string pilgan7[50]={"a.Prof. Dr. dr. Iwan Dwi Prahasto ","b. Dr. dr. Iwan Setiawan","c. dr. Djoko","d. dr. Adi Mirsa"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
    cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"Perolehan Nilai :"<<endl;
            		nilai = benar*10;
            		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
            		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
            		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<"==========================="<<endl;
			cout<<"TERIMAKASIH TELAH MENGISI SOAL INI\n";
			cout<<"\t\tTETAP D RUMAH YAH..\n";
			cout<<"==========================="<<endl;
	
}
