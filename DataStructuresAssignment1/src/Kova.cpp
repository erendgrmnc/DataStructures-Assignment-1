/**  @file  Kova.cpp  
 * @description Kova Sınıfının Metodlarının Gövdelerini bulundurur.
 * @course  2.Öğretim C Grubu
 * @assignment  1.ÖDEV   
 * @date  ‎31 ‎Ekim ‎2019 ‎Perşembe 
 * @author  Salih Eren Değirmenci(salih.degirmenci@ogr.sakarya.edu.tr) - Berkay Çete(berkay.çete@ogr.sakarya.edu.tr) 
 */ 


#include "Kova.h"
#include "iostream"
#include "windows.h"

using namespace std;

	

	Kova::Kova()
	{
		//KOVA SEK�L BEL�RLEME
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (i >= 3 && j == 0)
				{
					kovaSekil[i][j] = '#';

				}
				else if (i >= 3 && j == 6)
				{
					kovaSekil[i][j] = '#';
				}
				else if(i == 6)
				{
					kovaSekil[i][j] = '#';
				}
				else if (i == 4 && j == 3) 
				{
					kovaSekil[i][j] = '-';
				}
				else if (i == 0 && j == 3)
				{
					kovaSekil[i][j] = '|';
				}
				else if (i == 2 && j == 0 || i == 2 && j == 6 || i == 2 && j == 0 || i == 2  && j == 6 || i == 1 && j == 1 || i == 1 &&  j == 5 || i == 0 &&j == 2 || i == 0 && j == 4)
				{
					kovaSekil[i][j] = '.';
				}
				else
				{
					kovaSekil[i][j] = ' ';
				}
			}
		}

		renk = 1 + rand() % 15;


	}
	Kova::~Kova()
	{

	}
	void Kova::KovaYazdir()
	{
		
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
					cout << kovaSekil[i][j];
			}
			cout << endl;
		}
	}

	void Kova::KovayaTopAl(char top)
	{
		kovaSekil[4][3] = top;
	}

	char Kova:: KovayaTopVerr()
	{
		return top->KovayaTopVer();
	}

	void Kova::TopAdresYazdir()
	{
		cout << &top;
	}

	void Kova::KovadanTopSil()
	{
		kovaSekil[4][3] = '-';
	}

	void Kova::KovaRenkGonder()
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), renk);
	}




	

