/**  @file  Kova.h  
 * @description Kova Sınıfının Metodlarının ve değişkenlerinin deklerasyonlarını barındırır.
 * @course  2.Öğretim C Grubu
 * @assignment  1.ÖDEV   
 * @date  ‎31 ‎Ekim ‎2019 ‎Perşembe 
 * @author  Salih Eren Değirmenci(salih.degirmenci@ogr.sakarya.edu.tr) - Berkay Çete(berkay.çete@ogr.sakarya.edu.tr) 
 */ 

#pragma once
#ifndef KOVA_HPP
#define KOVA_HPP
#include "Top.h"
class Kova
{
public:

	Top* top = new Top;

	Kova();
	~Kova();

	void KovaYazdir();

	

	void KovayaTopAl(char top);
	

	char KovayaTopVerr();


	void TopAdresYazdir();

	void KovadanTopSil();

	void KovaRenkGonder();

    


private:


	char kovaSekil[7][7];
	int renk;

	

};
#endif // !KOVA_HPP


