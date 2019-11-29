/**  @file  Top.cpp  
 * @description Top Sınıfı için gereken metodların gövdelerini bulundurur.
 * @course  2.Öğretim C Grubu
 * @assignment  1.ÖDEV   
 * @date  ‎31 ‎Ekim ‎2019 ‎Perşembe 
 * @author  Salih Eren Değirmenci(salih.degirmenci@ogr.sakarya.edu.tr) 
 */ 

#include "Top.h"
#include "iostream"
using namespace std;

	Top::Top()
	{
		topSekil = 'A' + rand() % 25;
	}
	Top::~Top()
	{

	}

	

	char Top::KovayaTopVer()
	{
		return topSekil;
	}

	void Top::TopSekilDegistir(char top)
	{
		topSekil = top;
	}

