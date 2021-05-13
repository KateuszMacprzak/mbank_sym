#include<iostream>
#include<windows.h>
#include<time.h>
#include<cstdlib>
#include<cmath>
using namespace std;
string PIN;
int wybor;
int liczba;
int dolar()
{
	float wynik;
	wynik=liczba*3.84;
	floor(wynik);
	cout<<"Obecnie mo\276esz wyp\210aci\206 "<<wynik<<" dolara ameryka\344skiego"<<endl;
	
}
int funt()
{
	float wynik;
	wynik=liczba*4.90;
	floor(wynik);
	cout<<"Obecnie mo\276esz wyp\210aci\206 "<<wynik<<" funta brytyjskiego"<<endl;
	
}
int euro()
{
	float wynik;
	wynik=liczba*4.44;
	floor(wynik);
	cout<<"Obecnie mo\276esz wyp\210aci\206 "<<wynik<<" euro"<<endl;
}
int menu2()
{
	cout<<"Prosze wybra\206 jedn\245 z opcji: "<<endl;
	cout<<"___________________________________________"<<endl;
	cout<<"1.Sprawdzanie stanu konta bankowego."<<endl;
	cout<<"2.Przeliczanie walut."<<endl;
	cout<<"3.Zako\344czenie procesu."<<endl;
}
int wprowadzanie()
{
	cout<<"Witaj w MBank"<<endl;
	Sleep(1250);
	system("CLS");
	cout<<"Prosz\251 w\210o\276y\206 karte..."<<endl;
	Sleep(1250);
	system("CLS");
	cout<<"Prosz\251 czeka\206, sprawdzanie karty..."<<endl;
	Sleep(1250);
	system("CLS");
}
int main()
{
	
	wprowadzanie();
	cout<<"Prosze wpisa\206 kod PIN: "<<endl;
	cin>>PIN;
	system("CLS");
	do
	{
	if (PIN=="1235")
	{
		menu2();
		cout<<"Wyb\242r..."<<endl;
		cin>>wybor;
		system("CLS");
		switch(wybor)
		{
			case 1:
				srand(time(NULL));
				liczba=rand()%100+1;
				cout<<"Stan Twojego konta wynosi: "<<liczba<<" z\210"<<endl;
				cout<<"Za chwil\251 nast\245pi powr\242t do menu g\210\242wnego..."<<endl;
				system("pause");
				system("CLS");
				break;
			case 2:	
			    srand(time(NULL));
				liczba=rand()%10000+1;
				cout<<"Stan Twojego konta wynosi: "<<liczba<<" z\210"<<endl;
				euro();
				funt();
				dolar();
				cout<<"Za chwil\251 nast\245pi powr\242t do menu g\210\242wnego..."<<endl;
				system("pause");
				system("CLS");
				break;
			case 3:
				cout<<"Dzi\251kujemy za skorzystanie z us\210ug naszego banku"<<endl;
				Sleep(5000);
				system("pause");
			exit(0);
			break;	
		}
}
else 
{
	cout<<"Nie uda\210o si\251 poprawenie zalogowa\206, spr\242buj ponownie-pozosta\210y Ci 2 pr\242by"<<endl;
	Sleep(2000);
	system("CLS");
	cout<<"Wprowad\253 ponownie kod PIN: "<<endl;
	cin>>PIN;
	if(PIN=="1235")
	{
			menu2();
		cout<<"Wyb\242r..."<<endl;
		cin>>wybor;
		switch(wybor)
		{
			case 1:
				srand(time(NULL));
				liczba=rand()%100+1;
				cout<<"Stan Twojego konta wynosi: "<<liczba<<" z\210"<<endl;
				Sleep(2000);
				system("CLS");
				cout<<"Za chwil\251 nast\245pi powr\242t do menu g\210\242wnego..."<<endl;
				break;
			case 2:	
			    srand(time(NULL));
				liczba=rand()%10000+1;
				cout<<"Stan Twojego konta wynosi: "<<liczba<<" z\210"<<endl;
				euro();
				funt();
				dolar();
				Sleep(5000);
				cout<<"Za chwil\251 nast\245pi powr\242t do menu g\210\242wnego..."<<endl;
				system("pause");
				system("CLS");
				break;
			case 3:
				cout<<"Dzi\251kujemy za skorzystanie z us\210ug naszego banku"<<endl;
				system("pause");
			exit(0);
			break;	
		}
		
	}
	else
	{
		system("CLS");
		cout<<"Nie uda\210o si\251 poprawnie zalogowa\206, spr\242buj ponownie, pozosta\210a Ci 1 pr\242ba"<<endl;
		Sleep(2000);
		system("CLS");
		cout<<"Wprowad\251 ponownie kod PIN: "<<endl;
		cin>>PIN;
		if(PIN=="1235")
			{
			menu2();
		cout<<"Wyb\242r..."<<endl;
		cin>>wybor;
		switch(wybor)
		{
			case 1:
				srand(time(NULL));
				liczba=rand()%100+1;
				cout<<"Stan Twojego konta wynosi: "<<liczba<<" z\210"<<endl;
				cout<<"Za chwil\251 nast\245pi powr\242t do menu g\210\242wnego..."<<endl;
				system("pause");
				system("CLS");
				break;
			case 2:	
			    srand(time(NULL));
				liczba=rand()%10000+1;
				cout<<"Stan Twojego konta wynosi: "<<liczba<<" z\210"<<endl;
				euro();
				funt();
				dolar();
				cout<<"Za chwil\251 nast\245pi powr\242t do menu g\210\242wnego..."<<endl;
				system("pause");
				system("CLS");
				break;
			case 3:
				cout<<"Dzi\251kujemy za skorzystanie z us\210ug naszego banku"<<endl;
				system("pause");
			exit(0);
			break;	
		}
	}
		else
		{
			system("CLS");
			cout<<"Twoja karta zosta\210a zablokowana ! Skontaktuj si\251 z najbli\276sz\245 plac\242wk\245 MBank"<<endl;
			system("pause");
		}
		
	}
	}
}
while(wybor!=3);
	system("CLS");
return 0;
}



