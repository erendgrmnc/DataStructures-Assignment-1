/**  @file  Test.cpp  
 * @description Test Programını için gereken kodları içerir.
 * @course  2.Öğretim C Grubu
 * @assignment  1.ÖDEV   
 * @date  ‎31 ‎Ekim ‎2019 ‎Perşembe 
 * @author  Salih Eren Değirmenci(salih.degirmenci@ogr.sakarya.edu.tr) - Berkay Çete(berkay.çete@ogr.sakarya.edu.tr) 
 */ 

#include  <iostream>
#include "windows.h"
#include <cstdlib>
#include <conio.h>
#include <stdio.h>



#include "Top.h"
#include "Kova.h"
#include "KovaKontrol.h"

using namespace std;

void KovaBastir(Kova* kovalar,Kova** kovaTest,int kovaSayi,bool TopOnay);

int main()
{
	KovaKontrol kk;

	cout << "KOVA SAYISINI GIRINIZ : " << " ";
	cin >> kk.kovaSayi;

	Kova* kovalar = new Kova[kk.kovaSayi];

	Kova** kovaTest = new Kova*[kk.kovaSayi];
	for (int i = 0; i < kk.kovaSayi; i++)
	{
		kovaTest[i] = new Kova;
		kovaTest[i] = &kovalar[i];
	}
	
		

	
	
	KovaBastir(kovalar,kovaTest,kk.kovaSayi,kk.topOnay);

	int secim;

	do
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "-------------------------" << endl;
		cout << "YAPILACAK ISLEMI SECINIZ: " << endl;
		cout << "[1]TOPLARI YERLESTIR" << endl;
		cout << "[2]TOPLARI YOKET" << endl;
		cout << "[3]KOVA DEGISTIR " << endl;
		cout << "[4]TOP DEGISITIR" << endl;
		cout << "[5]KOVALARI TERSTEN YERLESTIR" << endl;
		cout << "[6]TOPLARI TERSTEN YERLESTIR" << endl;
		cout << "[7]CIKIS" << endl;
		cin >> secim;

		switch (secim)
		{
		case 1:
			if (kk.topOnay == true)
			{
				cout << "KOVALARDA ZATEN TOP VAR." << endl;;
			}
			else
			{
				kk.TopYerlestir(kovalar, kk.kovaSayi);
				kk.KovaPointerEsitle(kovalar, kovaTest);
				KovaBastir(kovalar,kovaTest,kk.kovaSayi, kk.topOnay);
				break;
			}
				
			

		case 2:
			if (kk.topOnay == true)
			{
				kk.ToplariYokEt(kovalar, kk.kovaSayi);
				KovaBastir(kovalar,kovaTest, kk.kovaSayi, kk.topOnay);
				
			}
			else
			{
				cout << "KOVALARDA ZATEN TOP YOK." << endl;
			}
			
			break;

		case 3:

				int birinciKova, ikinciKova;
				cout << "Birinci Kovayi Giriniz : "; cin >> birinciKova;
				birinciKova = birinciKova - 1;
				cout << "Ikinci Kovayi Giriniz : "; cin >> ikinciKova;
				ikinciKova = ikinciKova - 1;
				kk.KovaDegistir(kovaTest,birinciKova, ikinciKova);
				KovaBastir(kovalar, kovaTest,kk.kovaSayi, kk.topOnay);
		
			break;

		case 4:
			if (kk.topOnay == true)
			{
				int birinciTop, ikinciTop;
				cout << "Birinci Topu Giriniz : "; cin >> birinciTop;
				birinciTop = birinciTop - 1;
				cout << "Ikinci Topu Giriniz : "; cin >> ikinciTop;
				ikinciTop = ikinciTop - 1;
				kk.TopDegistir(kovaTest, birinciTop, ikinciTop);
				kk.TopYerlestir(kovalar, kk.kovaSayi);

				KovaBastir(kovalar,kovaTest,kk.kovaSayi, kk.topOnay);

			}
			
			else
			{
				cout << "KOVALARDA TOP YOK." << endl;
			}
			
			break;

		case 5:
			if (kk.topOnay == true)
			{

				kk.KovalariTerstenYerlestir(kovaTest, kk.kovaSayi);
				KovaBastir(kovalar,kovaTest,kk.kovaSayi, kk.topOnay);
			}
			
			break;
		case 6:
			if (kk.topOnay == true)
			{
				kk.ToplariTerstenYerlestir(kovaTest, kk.kovaSayi);
				KovaBastir(kovalar,kovaTest,kk.kovaSayi, kk.topOnay);
				kk.TopYerlestir(kovalar, kk.kovaSayi);
			}
			else
			{
				cout << "KOVALARDA TOP YOK." << endl;
			}
			
			break;
		case 7:
			system("pause");
			return 0;

		default:
			cout << "GECERSIZ TERCIH !" << endl;
			cin.ignore();
			cin.get();
			break;
		}

	} while (secim != 7);

		

	

	
	

}


void KovaBastir(Kova* kovalar,Kova** kovaTest,int kovaSayi,bool topOnay)
{

	for (int i = 0; i < kovaSayi; i++)
	{
		kovaTest[i]->KovaRenkGonder();
	    
		cout << i + 1 << "." << " " << "KOVA" << endl;

		kovaTest[i]->KovaYazdir();
		
		cout << "Kova Adres : " << kovaTest[i] << endl;
		if (topOnay == true)
		{
			cout << "Top Adres : "; cout << kovaTest[i]->top; cout << endl;
		}

		else if (topOnay == false)
		{
			cout << "Top Adres :  " << "NULL" << endl;
		}
		

	}


}



