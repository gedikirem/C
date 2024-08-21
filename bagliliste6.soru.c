#include <stdio.h>
#include <stdlib.h>
//6.soru
// Ba�l� liste d���m�n� tan�mlama
struct node {
  int data;
  struct node *next;
};

// Yeni bir d���m olu�turma fonksiyonu
struct node *newNode(int data) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

// S�ral� bir �ekilde ba�l� listeye bir d���m ekleme fonksiyonu
void sortedInsert(struct node **head_ref, struct node *new_node) {
  struct node *current;

  // Ba�l� liste bo�sa veya yeni d���m�n de�eri ba� d���m�n de�erinden k���kse
  if (*head_ref == NULL || (*head_ref)->data >= new_node->data) {
    // Yeni d���m� ba�a ekle ve ba� referans�n� g�ncelle
    new_node->next = *head_ref;
    *head_ref = new_node;
  } else {
    // Eklenecek uygun yeri bulana kadar ba�l� listeyi dola�
    current = *head_ref;
    while (current->next != NULL && current->next->data < new_node->data)
      current = current->next;

    // Yeni d���m� uygun yere ekle
    new_node->next = current->next;
    current->next = new_node;
  }
}

// Ba�l� listeyi yazd�rma fonksiyonu
void printList(struct node *head) {
  struct node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}

// Ana fonksiyon
int main() {
  struct node *head = NULL; // Ba� d���m� tan�mla ve NULL olarak ata
  int num;                  // Girilecek say�y� tutacak de�i�ken

  printf("Sayi giriniz (-1 cikis): ");
  scanf("%d", &num); // Kullan�c�dan bir say� al

  while (num != -1) { // -1 girilene kadar devam et
    // Girilen say�y� kullanarak yeni bir d���m olu�tur
    struct node *new_node = newNode(num);
    // Yeni d���m� s�ral� bir �ekilde ba�l� listeye ekle
    sortedInsert(&head, new_node);
    printf("Sayi giriniz (-1 cikis): ");
    scanf("%d", &num); // Kullan�c�dan bir say� daha al
  }

  printf("Olusturulan bagli liste: ");
  printList(head); // Ba�l� listeyi yazd�r

  return 0;
}


