#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 
#include<string.h>
int main() {
  bool isProgrammingFun = true;
  bool isFishTasty = false;
  printf("%d\n", isProgrammingFun);  // Returns 1 (true)
  printf("%d\n", isFishTasty);         // Returns 0 (false)
  printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
  /*variable = (condition) ? expressionTrue : expressionFalse;
 int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");*/



/*switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
int day = 4;

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
}
 Outputs "Thursday" (day 4)
switch-case �rnek
default:hi�bir durumu kar��lam�yorsa en son ekrana ne yazaca��n� belirtmemizi sa�lar
*/
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d ", matrix[i][j]);
  }
  printf("\n");
}

char greetings[] = "Hello World!";
greetings[0] = 'J';
printf("%s", greetings);
printf("\n");
printf("%lu\n", sizeof(greetings)); //dizinin boyutunu verir


char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s\n", greetings2);
char txt[] = "We are the so-called \"Vikings\" from the north.";
printf("%s", txt);
printf("\n");
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet));//bir char dizisinin uzunlu�unu bulmak i�in kullan�l�r tabi �nce string.h k�t�phanesi eklenir
// strlen ile sizeof aras�ndaki fark sizeof un sayarken null karakterini de almas�d�r yani 1 fazla say�yor
printf("\n");

//�ki diziyi birle�tirmek i�in strcat() fonksiyonu �a�r�l�r

 char str1[20] = "Hello ";
  char str2[] = "World!";
 
  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);
  
  // Print str1
  printf("%s", str1);
printf("\n");
//Bir dizinin de�erinin di�erine kopyalamak i�in strcpy() fonksiyonu �a�r�l�r
char str3[20] = "Hello World!";
char str4[20];

// Copy str3 to str4
strcpy(str4, str3);

// Print str2
printf("%s", str4);

printf("\n");
//�ki diziyi kar��la�t�rmak i�in  strcmp() kullan�l�r

char str5[] = "Hello";
char str6[] = "Hello";
char str7[] = "Hi";

// Compare str5 and str6, and print the result
printf("%d\n", strcmp(str5, str6));  // Returns 0 (the strings are equal)

// Compare str5 and str7, and print the result
printf("%d\n", strcmp(str5, str7));  // Returns -4 (the strings are not equal)
  return 0;
}
