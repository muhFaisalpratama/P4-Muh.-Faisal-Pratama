#include <iostream>
using namespace std;
int main(){
cout<<"Nama : Muh. Faisal pratama\n";
cout<<"Nim : F1B019092\n";
cout<<"Kelompok: Kelompok 19\n\n";

int i;
char nama[30]={'M','u','h','.',' ','F','a','i','s','a','l',' ','p','r','a','t','a','m','a'};
char nama2[30]="Muh. Faisal pratama";
cout<<"Array per Karakter= ";
for(i=0;i<=29;i++)
{
cout<<nama[i];
}
cout<<endl; cout<<"Array string ="<<nama2<<endl<<endl;
return 0;
}
