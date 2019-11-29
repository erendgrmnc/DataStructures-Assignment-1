/**  @file  Top.h  
 * @description Top Sınıfının Metodlarının ve değişkenlerinin deklerasyonlarını barındırır.
 * @course  2.Öğretim C Grubu
 * @assignment  1.ÖDEV   
 * @date  ‎31 ‎Ekim ‎2019 ‎Perşembe 
 * @author  Salih Eren Değirmenci(salih.degirmenci@ogr.sakarya.edu.tr) - Berkay Çete(berkay.çete@ogr.sakarya.edu.tr) 
 */ 

#pragma once
#ifndef TOP_HPP
#define TOP_HPP

#include "Top.h"

class Top
{
public:
	Top();
	
	~Top();
	




	char KovayaTopVer();

	void TopSekilDegistir(char top);
	

private:
	char topSekil;
};


#endif // !TOP_HPP
