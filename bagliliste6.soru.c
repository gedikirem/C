#include <stdio.h>
#include <stdlib.h>
//6.soru
// Baðlý liste düðümünü tanýmlama
struct node {
  int data;
  struct node *next;
};

// Yeni bir düðüm oluþturma fonksiyonu
struct node *newNode(int data) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

// Sýralý bir þekilde baðlý listeye bir düðüm ekleme fonksiyonu
void sortedInsert(struct node **head_ref, struct node *new_node) {
  struct node *current;

  // Baðlý liste boþsa veya yeni düðümün deðeri baþ düðümün deðerinden küçükse
  if (*head_ref == NULL || (*head_ref)->data >= new_node->data) {
    // Yeni düðümü baþa ekle ve baþ referansýný güncelle
    new_node->next = *head_ref;
    *head_ref = new_node;
  } else {
    // Eklenecek uygun yeri bulana kadar baðlý listeyi dolaþ
    current = *head_ref;
    while (current->next != NULL && current->next->data < new_node->data)
      current = current->next;

    // Yeni düðümü uygun yere ekle
    new_node->next = current->next;
    current->next = new_node;
  }
}

// Baðlý listeyi yazdýrma fonksiyonu
void printList(struct node *head) {
  struct node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}

// Ana fonksiyon
int main() {
  struct node *head = NULL; // Baþ düðümü tanýmla ve NULL olarak ata
  int num;                  // Girilecek sayýyý tutacak deðiþken

  printf("Sayi giriniz (-1 cikis): ");
  scanf("%d", &num); // Kullanýcýdan bir sayý al

  while (num != -1) { // -1 girilene kadar devam et
    // Girilen sayýyý kullanarak yeni bir düðüm oluþtur
    struct node *new_node = newNode(num);
    // Yeni düðümü sýralý bir þekilde baðlý listeye ekle
    sortedInsert(&head, new_node);
    printf("Sayi giriniz (-1 cikis): ");
    scanf("%d", &num); // Kullanýcýdan bir sayý daha al
  }

  printf("Olusturulan bagli liste: ");
  printList(head); // Baðlý listeyi yazdýr

  return 0;
}


