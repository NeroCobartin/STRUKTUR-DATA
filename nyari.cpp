#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int data[100];
	int masukan;
	int jumlah;
	int a,pil,temp,kiri,kanan,tengah,flag,jk;
	
	cout<<"Masukan jumlah kasus: ";
	cin>>jk;
	
	system("cls");
	for(int c=0;c<jk;c++)
	{
	
	//BINARY SEARCH
	cout<<"=====Kasus ke-"<<c+1<<"====="<<endl;
	cout<<"Jumlah data yang diinput: ";
	cin>>jumlah;
	cout<<"====================================="<<endl;
		for(int i=0;i<jumlah;i++)
		{
			cout<<"Masukan angka-"<<i+1<<": ";
			cin>>data[i];
		}
		cout<<endl<<"Data sudah tersimpan";
		cout<<endl<<"====================================";
		getch();
			//sorting
			for(int i=0; i<jumlah; i++)
   			{
     			for(int j=i+1; j<jumlah; j++)
      			{
          			if(data[i]>data[j])
         			{
             			temp = data[i];
           				data[i] = data[j];
            			data[j] = temp;
         			}
      			}
   			}
   			cout<<endl<<"==============|Data|==============="<<endl;
   			cout<<"Data sudah terurut: "<<endl;
   			
   			for(int i=0;i<jumlah;i++)
   			{
   				cout<<"|"<<data[i]<<"|";
			}
			
			cout<<endl<<"Masukan data yang ingin dicari: ";
			cin>>masukan;
			
				kanan=jumlah;
				kiri=0;
				flag=0;
			
			while(flag==0&&kiri<=kanan)
 			{
  				tengah=(kanan+kiri)/2;
  					if (data[tengah]==masukan)
  					{
   						flag=tengah;
   						break;
  					}
 					else if (data[tengah]<masukan)
					{
					 	kiri=tengah+1;
					}
 					else
					{
						kanan=tengah-1;
					}
					
 			}
 			
 			if (flag==tengah)
 			{
  				cout<<endl<<"data |"<<masukan<<"| ditemukan pada indeks ke["<<flag<<"], urutan ke-"<<flag+1;
  				cout<<endl<<"===================================================================";
 			}
 			else
 			{
  			cout<<endl<<"data |"<<masukan<<"| tidak ditemukan -1";
  			cout<<endl<<"======================================";
 			}
 			cout<<endl;
 			getch();
	}\
}
