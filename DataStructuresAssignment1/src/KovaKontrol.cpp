/**  @file  KovaKontrol.cpp
 * @description Kova ve Top Sınıfı Arasındaki İşlemleri Gerçekleştiren KovaKontrol Sınıfının Metodlarının Gövdelerini Bulundurur.
 * @course  2.Öğretim C Grubu
 * @assignment  1.ÖDEV   
 * @date  ‎31 ‎Ekim ‎2019 ‎Perşembe 
 * @author  Salih Eren Değirmenci(salih.degirmenci@ogr.sakarya.edu.tr) - Berkay Çete(berkay.çete@ogr.sakarya.edu.tr) 
 */ 

#include "Kova.h"
#include "KovaKontrol.h"

using namespace std;



void KovaKontrol::KovaPointerEsitle(Kova* kovalar, Kova** kovaTest)
{
	for (int i = 0; i < kovaSayi; i++)
	{
	 kovaTest[i] = &kovalar[i];
	}	
}

	void KovaKontrol::TopYerlestir(Kova* kovalar, int kovaSayi)
	{
		topOnay = true;
		for (int i = 0; i < kovaSayi; i++)
		{
			kovalar[i].KovayaTopAl(kovalar[i].KovayaTopVerr());
			
		}
	}

	void KovaKontrol::ToplariYokEt(Kova* kovalar, int KovaSayi)
	{
	    topOnay = false;
		for (int i = 0; i < kovaSayi; i++)
		{
			kovalar[i].KovadanTopSil();
		}

	}
	void KovaKontrol::KovaDegistir(Kova** kovaTest, int birinciKova, int ikinciKova)
	{
		Kova** temp = new Kova *[kovaSayi];
		for (int i = 0; i < kovaSayi; i++)
		{
			temp[i] = new Kova;
			
		}
		
		temp[0] = kovaTest[birinciKova];

		kovaTest[birinciKova] = kovaTest[ikinciKova];

		kovaTest[ikinciKova] = temp[0];



	}

	void KovaKontrol::TopDegistir(Kova** kovaTest, int birinciTop, int ikinciTop)
	{
		Kova** temp = new Kova*[kovaSayi];
		for (int i = 0; i < kovaSayi; i++)
		{
			temp[i] = new Kova;
		}
		temp[0]->top = kovaTest[birinciTop]->top;
		kovaTest[birinciTop]->top = kovaTest[ikinciTop]->top;
		kovaTest[ikinciTop]->top = temp[0]->top;
		
		delete temp;

	}


	void KovaKontrol::KovalariTerstenYerlestir(Kova** kovaTest, int kovaSayi)
	{
		Kova** temp = new Kova*[kovaSayi];
		for (int i = 0; i < kovaSayi; i++)
		{
			temp[i] = new Kova;
		}

		for (int i = 0; i < kovaSayi; i++)
		{
			temp[i] = kovaTest[(kovaSayi - 1) - i];


		}

		for (int i = 0; i < kovaSayi; i++)
		{

			kovaTest[i] = temp[i];

		}

		
		delete temp;
	}

	void KovaKontrol::ToplariTerstenYerlestir(Kova** kovaTest, int kovaSayi)
	{
		Kova** temp = new Kova*[kovaSayi];
		for (int i = 0; i < kovaSayi; i++)
		{
			temp[i] = new Kova;

		}
		
		for (int i = 0; i <kovaSayi; i++)
		{
			temp[i]->top = kovaTest[(kovaSayi-1) - i]->top;
			
		}
		
		for (int i = 0; i < kovaSayi; i++)
		{
			kovaTest[i]->top = temp[i]->top;
		}
		
		
		
	}





