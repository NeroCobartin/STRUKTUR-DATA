#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x,y,b,c,hasil,avg,rata;
	hasil=0;
	b=0;
	c=0;
	x=1;
	y=100;
	rata=0;
	
	cout<<"=====|Deret Bilangan dari 1-100|====="<<endl<<endl;
	cout<<"Bilangan ganjilnya adalah: "<<endl;
		for(int i=x;i<=y;i++)
		{
			if(i%2!=0)
			{
				cout<<i<<",";
				b=b+1;
				
				if(b%5==0)
				{
					cout<<endl;
				}
			}
		}
		
		cout<<endl<<"|Deret bilangan ganjil yang habis dibagi 5|"<<endl;
		for(int i=x;i<=y;i++)
		{
			if(i%2!=0 && i%5==0)
			{
				cout<<i<<",";
				b=b+1;
				hasil=hasil+i;
				rata++;
				if(b%5==0)
				{
					cout<<endl;
				}
			}
		}
		
	avg=hasil/rata;
	cout<<"___________________________________________________";
	cout<<endl<<"Total dijumlah: ";
	
	for(int i=x;i<=y;i++)
		{
			if(i%2!=0 && i%5==0)
			{
				cout<<i;
				c=c+1;
					if(c<10)
					{
						cout<<"+";
					}
				
			}
		}
	cout<<" = "<<hasil;
	cout<<endl<<"rata ratanya: "<<hasil<<"/"<<rata<<"="<<avg<<endl;
	cout<<"===================================================";
	
	getch();
}
