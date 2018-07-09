#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int temp,jd,data[500],pil,ascen[500],descen[500];
	
	awal:
	cout<<"*=====|PROGRAM SORTING|=====*"<<endl;
	cout<<"|[1]Masukan data            |"<<endl;
	cout<<"|[2]Tampilkan sorting       |"<<endl;
	cout<<"|[3]Exit                    |"<<endl;
	cout<<"|___________________________|"<<endl;
	cout<<"Pilihan: ";
	cin>>pil;
	
	if(pil==1){
		
		system("cls");
		cout<<"====|Menu masukan data|===="<<endl;
		cout<<"Jumlah data: ";
		cin>>jd;
		
		for(int i=0;i<jd;i++){
			cout<<"data ke-"<<i+1<<": ";
			cin>>data[i];
		}
		cout<<"==========================="<<endl;
		cout<<"Data sudah tersimpan!!!"<<endl;
		cout<<">>Silahkan tekan apapun untuk kembali ke menu awal<<";
		getch();
		
		system("cls");
		goto awal;
	}
	
	else if(pil==2){
		
		system("cls");
		cout<<"===|Menu tampilkan tersortir|==="<<endl;
		cout<<"Data sebelum terurut:  ";
		
		for(int i=0;i<jd;i++){
			cout<<data[i]<<"  ";
		}
		cout<<endl;
		cout<<"indeks              : ";
		
		for(int i=0;i<jd;i++){
			cout<<"["<<i<<"]";
		}
		
		cout<<endl<<endl;
		
		cout<<"Data terurut ascending"<<endl;
		for(int i=0;i<jd;i++){
			ascen[i]=data[i];
		}
		
		cout<<"*---Proses---*"<<endl;
		for(int i=0;i<jd;i++){
			cout<<ascen[i]<<" ";
		}
		cout<<endl;
		
		for(int i=0;i<jd-1;i++){
			for(int b=i+1;b<jd;b++){
				if(ascen[i]>ascen[b]){
					temp=ascen[i];
					ascen[i]=ascen[b];
					ascen[b]=temp;
					
					for(int i=0;i<jd;i++){
						cout<<ascen[i]<<" ";
					}
					cout<<endl;
				}
			}
		}
		
		cout<<"Hasil"<<endl;
		for(int i=0;i<jd;i++){
			cout<<ascen[i]<<" ";
		}
		
		cout<<endl<<endl;
		
		cout<<"Data terurut descending"<<endl;
		for(int i=0;i<jd;i++){
			descen[i]=data[i];
		}
		
		cout<<"*---Proses---*"<<endl;
		for(int i=0;i<jd;i++){
			cout<<descen[i]<<" ";
		}
		cout<<endl;
		
		for(int i=0;i<jd-1;i++){
			for(int b=i+1;b<jd;b++){
				if(descen[i]<descen[b]){
					temp=descen[i];
					descen[i]=descen[b];
					descen[b]=temp;
					
					for(int i=0;i<jd;i++){
						cout<<descen[i]<<" ";
					}
					cout<<endl;
				}
			}
		}
		
		cout<<"Hasil"<<endl;
		for(int i=0;i<jd;i++){
			cout<<descen[i]<<" ";
		}
		cout<<endl<<endl;
		cout<<"selesai!!"<<endl;
		cout<<">>Silahkan tekan apapun untuk kembali ke menu awal<<";
		getch();
		system("cls");
		goto awal;
	}
	
	else if(pil==3){
		
		cout<<"Terima kasih telah menggunakan program ini";
		getch();
		return 0;
	}
	
	else{
		cout<<"pilihan tidak tersedia!!"<<endl;
		cout<<"tekan apapun untuk mengulang";
		getch();
		system("cls");
		goto awal;
	}
}
