void dortgen(int kisa,int uzun) // dortgen ad�nda bir fonksiyon olu�turarak ba�lad�m, k�sa ve uzun ad�nda 2 de�i�ken verdim.
	{
		int i,j;
		for(i=0;i<kisa;++i) // ilk for d�ng�m�z. Sat�rlara h�kmeden d�ng� demeyi seviyorum.
		{
			for(j=0;j<uzun;++j) // bu da s�tunlara h�kmeden d�ng�m�z. 
			{
				if(i==0) // �imdi burada ben �unu demeye �al��t�m. i = 0 iken yani 1. sat�rdayken veya i = kisa-1 yani son satirdayken
				{		//B�t�n sat�rda y�ld�z yazd�ral�m. �lk if ve else if imiz bu y�zden. Aradaki sat�rlar i�in else'e gelelim.
					printf("*");
				}
				else if(i==(kisa-1))
				{
					printf("*");
				}
				else{ // aradaki sat�rlar i�in ��yle bir mant�k kulland�m, j=0 yani 1. s�tun veya j= (uzun-1) yani son s�tun olursa y�ld�z koy,
					if(j==0 || j==(uzun-1)) // yok ba�ka bir s�tundaysak �rne�in 2. sat�r 2. s�tunday�z buran�n bo� kalmas� laz�m.
					{
						printf("*");
					}
					else{
						printf(" "); // i�te bu else, yukarda bahsetti�im bo�lu�u sa�layan karar yap�s�. 
					}
				}
			}
			printf("\n");
		}
	}

