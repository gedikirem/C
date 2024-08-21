#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 

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
switch-case örnek
default:hiçbir durumu karþýlamýyorsa en son ekrana ne yazacaðýný belirtmemizi saðlar
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

char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s\n", greetings2);


  return 0;
}
