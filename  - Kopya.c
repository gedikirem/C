#include <stdio.h>
#include <stdlib.h>

// ikili arama a?ac?n?n d???m yap?s?
struct dugum {
    int veri;
    struct dugum* sol;
    struct dugum* sag;
};

// Yeni bir düðüm oluþturmak için yardýmcý fonksiyon
struct dugum* dugumOlustur(int veri) {
    struct dugum* yeniDugum = (struct dugum*)malloc(sizeof(struct dugum));
    yeniDugum->veri = veri;
    yeniDugum->sol = NULL;
    yeniDugum->sag = NULL;
    return yeniDugum;
}

// ikili arama aðacýna yeni bir düðüm eklemek için yardýmcý fonksiyon
struct dugum* ekle(struct dugum* kok, int veri) {
    // Aðacýn boþ olduðunda yeni düðümü kök olarak ayarla
    if (kok == NULL) {
        return dugumOlustur(veri);
    }
    
    // Aðacýn boþ olmadýðý durumda düðümü doðru konuma ekle
    if (veri < kok->veri) {
        kok->sol = ekle(kok->sol, veri);
    } else if (veri > kok->veri) {
        kok->sag = ekle(kok->sag, veri);
    }
    
    return kok;
}

// ikili arama aðacýnda arama yapmak için yardýmcý fonksiyon
struct dugum* ara(struct dugum* kok, int veri) {
    // Aðaç boþ veya veri kökte ise arama baþarýsýz oldu
    if (kok == NULL || kok->veri == veri) {
        return kok;
    }
    
    // Veri kçkten küçükse sol alt aðaçta ara, büyükse sað alt aðaçta ara
    if (veri < kok->veri) {
        return ara(kok->sol, veri);
    } else {
        return ara(kok->sag, veri);
    }
}

// ikili arama aðacýndaki en küçük düðümü bulmak için yardýmcý fonksiyon
struct dugum* enKucukDugum(struct dugum* kok) {
    struct dugum* mevcut = kok;
    
    // Sol alt aðacýn en alt düðümüne kadar ilerle
    while (mevcut && mevcut->sol != NULL) {
        mevcut = mevcut->sol;
    }
    
    return mevcut;
}

// ikili arama aðacýndan bir düðümü silmek için yardýmcý fonksiyon
struct dugum* sil(struct dugum* kok, int veri) {
    // Aðaç boþ ise silme iþlemi yapýlamaz
    if (kok == NULL) {
        return kok;
    }
    if (veri < kok->veri) {A
        kok->sol = sil(kok->sol, veri);
    } else if (veri > kok->veri) {
        kok->sag = sil(kok->sag, veri);
    } else {
        // Silinecek düðüm bulundu

        // Tek Çocuðu veya hiç çocuðu olmayan durumlar
        if (kok->sol == NULL) {
            struct dugum* temp = kok->sag;
            free(kok);
            return temp;
        } else if (kok->sag == NULL) {
            struct dugum* temp = kok->sol;
            free(kok);
            return temp;
        }

        // ?ki ?ocu?u olan durum
        struct dugum* enKucuk = enKucukDugum(kok->sag);
        kok->veri = enKucuk->veri;
        kok->sag = sil(kok->sag, enKucuk->veri);
    }

    return kok;
}

// ?kili arama a?ac?n? inorder (s?ral?) olarak yazd?ran yard?mc? fonksiyon
void inorderSirala(struct dugum* kok) {
    if (kok != NULL) {
        inorderSirala(kok->sol);
        printf("%d ", kok->veri);
        inorderSirala(kok->sag);
    }
}

int main() {
    struct dugum* kok = NULL;
    int secim, veri;

    while (1) {
        printf("\n----- Menu -----\n");
        printf("1) Ekleme\n"); // Ekleme se?ene?i
        printf("2) Arama\n"); // Arama se?ene?i
        printf("3) Siralama\n"); // S?ralama se?ene?i
        printf("4) Silme\n"); // Silme se?ene?i
        printf("5) Cikis\n"); // ??k?? se?ene?i
        printf("Seciminizi yapin: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Eklenecek degeri girin: ");
                scanf("%d", &veri);
                kok = ekle(kok, veri); // ?kili arama a?ac?na veri ekleme
                break;
            case 2:
                printf("Aranacak de?eri girin: ");
                scanf("%d", &veri);
                struct dugum* sonuc = ara(kok, veri); // ?kili arama a?ac?nda veri arama
                if (sonuc != NULL) {
                    printf("Deger bulundu.\n"); // De?er bulundu?unda mesaj
                } else {
                    printf("Deger bulunamad?.\n"); // De?er bulunamad???nda mesaj
                }
                break;
            case 3:
                printf("Siralama: ");
                inorderSirala(kok); // ?kili arama a?ac?n? s?ral? bir ?ekilde yazd?rma
                printf("\n");
                break;
                case 4:
                printf("Silinecek degeri girin: ");
                scanf("%d", &veri);
                kok = sil(kok, veri); // ?kili arama a?ac?ndan veri silme
                break;
            case 5:
                printf("Programdan ??k?l?yor...\n");
                return 0;
            default:
                printf("Gecersiz se?im. Tekrar deneyin.\n");
        }
    }
}
