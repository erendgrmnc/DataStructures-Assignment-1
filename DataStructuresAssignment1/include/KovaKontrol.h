/**  @file  KovaKontrol.h 
 * @description KovaKontrol sınıfı için gereken metodların ve değişkenlerin deklerasyonlarını barındırır.
 * @course  2.Öğretim C Grubu
 * @assignment  1.ÖDEV   
 * @date  ‎31 ‎Ekim ‎2019 ‎Perşembe 
 * @author  Salih Eren Değirmenci(salih.degirmenci@ogr.sakarya.edu.tr)

#pragma once
#ifndef KOVAKONTROL_HPP
#define KOVAKONTROL_HPP




class KovaKontrol
{
public:

	bool topOnay = false;
	int kovaSayi = 0;

	void KovaPointerEsitle(Kova* kovalar, Kova** kovaTest);
	void TopYerlestir(Kova* kovalar, int kovaSayi);


	void ToplariYokEt(Kova* kovalar, int KovaSayi);

	
	void KovaDegistir(Kova** kovaTest,int birinciKova, int ikinciKova);

	void TopDegistir(Kova** kovaTest, int birinciTop, int ikinciTop);



	void KovalariTerstenYerlestir(Kova** kovaTest, int kovaSayi);

	void ToplariTerstenYerlestir(Kova** kovaTest, int kovaSayi);



private:

};

#endif // !KOVAKONTROL_HPP

