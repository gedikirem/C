void dortgen(int kisa,int uzun) // dortgen adýnda bir fonksiyon oluþturarak baþladým, kýsa ve uzun adýnda 2 deðiþken verdim.
	{
		int i,j;
		for(i=0;i<kisa;++i) // ilk for döngümüz. Satýrlara hükmeden döngü demeyi seviyorum.
		{
			for(j=0;j<uzun;++j) // bu da sütunlara hükmeden döngümüz. 
			{
				if(i==0) // þimdi burada ben þunu demeye çalýþtým. i = 0 iken yani 1. satýrdayken veya i = kisa-1 yani son satirdayken
				{		//Bütün satýrda yýldýz yazdýralým. Ýlk if ve else if imiz bu yüzden. Aradaki satýrlar için else'e gelelim.
					printf("*");
				}
				else if(i==(kisa-1))
				{
					printf("*");
				}
				else{ // aradaki satýrlar için þöyle bir mantýk kullandým, j=0 yani 1. sütun veya j= (uzun-1) yani son sütun olursa yýldýz koy,
					if(j==0 || j==(uzun-1)) // yok baþka bir sütundaysak örneðin 2. satýr 2. sütundayýz buranýn boþ kalmasý lazým.
					{
						printf("*");
					}
					else{
						printf(" "); // iþte bu else, yukarda bahsettiðim boþluðu saðlayan karar yapýsý. 
					}
				}
			}
			printf("\n");
		}
	}

