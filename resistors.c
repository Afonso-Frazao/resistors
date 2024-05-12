#include <stdio.h>

#define COLOR_SILVER  "\033[38;5;7m"
#define COLOR_GOLD    "\033[38;5;3m"
#define COLOR_BLACK   "\033[38;5;0m"
#define COLOR_BROWN   "\033[38;5;52m"
#define COLOR_RED     "\033[38;5;9m"
#define COLOR_ORANGE  "\033[38;5;202m"
#define COLOR_YELLOW  "\033[38;5;11m"
#define COLOR_GREEN   "\033[38;5;2m"
#define COLOR_BLUE    "\033[38;5;12m"
#define COLOR_VIOLET  "\033[38;5;5m"
#define COLOR_GREY    "\033[38;5;8m"
#define COLOR_WHITE   "\033[38;5;15m"
#define COLOR_RESET   "\033[0m"

int main(){
  int i;

  //print 4 band resistors

  printf("4 band resistors\n");

  printf(COLOR_RED"\u2588");
  printf(" B1\t"COLOR_RESET);

  printf(COLOR_ORANGE"\u2588");
  printf(" B2\t\t"COLOR_RESET);

  printf(COLOR_GREEN"\u2588");
  printf(" B4\t"COLOR_RESET);

  printf(COLOR_BLUE"\u2588");
  printf(" B5\n"COLOR_RESET);


  //print 5 band resistors

  printf("5 band resistors\n");

  printf(COLOR_RED"\u2588");
  printf(" B1\t"COLOR_RESET);

  printf(COLOR_ORANGE"\u2588");
  printf(" B2\t"COLOR_RESET);

  printf(COLOR_YELLOW"\u2588");
  printf(" B3\t"COLOR_RESET);

  printf(COLOR_GREEN"\u2588");
  printf(" B4\t"COLOR_RESET);

  printf(COLOR_BLUE"\u2588");
  printf(" B5\n"COLOR_RESET);


  //print 6 band resistors

  printf("6 band resistors\n");

  printf(COLOR_RED"\u2588");
  printf(" B1\t"COLOR_RESET);

  printf(COLOR_ORANGE"\u2588");
  printf(" B2\t"COLOR_RESET);

  printf(COLOR_YELLOW"\u2588");
  printf(" B3\t"COLOR_RESET);

  printf(COLOR_GREEN"\u2588");
  printf(" B4\t"COLOR_RESET);

  printf(COLOR_BLUE"\u2588");
  printf(" B5\t"COLOR_RESET);

  printf(COLOR_VIOLET"\u2588");
  printf(" B6\n"COLOR_RESET);


  //print band meanings

  printf(COLOR_RED"1st\t"COLOR_RESET);
  printf(COLOR_ORANGE"2nd\t"COLOR_RESET);
  printf(COLOR_YELLOW"3rd\t"COLOR_RESET);
  printf(COLOR_GREEN"Mul\t"COLOR_RESET);
  printf(COLOR_BLUE"Tol\t"COLOR_RESET);
  printf(COLOR_VIOLET"Tmp\n"COLOR_RESET);

  printf(COLOR_RED"dig\t"COLOR_RESET);
  printf(COLOR_ORANGE"dig\t"COLOR_RESET);
  printf(COLOR_YELLOW"dig\t"COLOR_RESET);
  printf(COLOR_GREEN"\t"COLOR_RESET);
  printf(COLOR_BLUE"\t"COLOR_RESET);
  printf(COLOR_VIOLET"Cof\n"COLOR_RESET);

  //print color codes

  for(i=0; i<3; i++){
    printf("\t");
  }
  printf(COLOR_SILVER"\u2588\u2588"COLOR_RESET);
  printf(" 0.01\t");
  printf(COLOR_SILVER"\u2588\u2588"COLOR_RESET);
  printf(" 10%%\t");
  printf("\n");

  for(i=0; i<3; i++){
    printf("\t");
  }
  printf(COLOR_GOLD"\u2588\u2588"COLOR_RESET);
  printf(" 0.1\t");

  printf(COLOR_GOLD"\u2588\u2588"COLOR_RESET);
  printf(" 5%%\t");

  printf("\n");


  for (i=0; i<3; i++){ //line 3
    printf(COLOR_BLACK"\u2588\u2588"COLOR_RESET);
    printf(" 0\t");
  }
  printf(COLOR_BLACK"\u2588\u2588"COLOR_RESET);
  printf(" 1\t");

  printf("\n");


  for (i=0; i<3; i++){ //line 4
    printf(COLOR_BROWN"\u2588\u2588"COLOR_RESET);
    printf(" 1\t");
  }
  printf(COLOR_BROWN"\u2588\u2588"COLOR_RESET);
  printf(" 10\t");

  printf(COLOR_BROWN"\u2588\u2588"COLOR_RESET);
  printf(" 1%%\t");

  printf(COLOR_BROWN"\u2588\u2588"COLOR_RESET);
  printf(" 100ppm");

  printf("\n");


  for (i=0; i<3; i++){ //line 5
    printf(COLOR_RED"\u2588\u2588"COLOR_RESET);
    printf(" 2\t");
  }
  printf(COLOR_RED"\u2588\u2588"COLOR_RESET);
  printf(" 100\t");

  printf(COLOR_RED"\u2588\u2588"COLOR_RESET);
  printf(" 2%%\t");

  printf(COLOR_RED"\u2588\u2588"COLOR_RESET);
  printf(" 50ppm");

  printf("\n");


  for (i=0; i<3; i++){ //line 6
    printf(COLOR_ORANGE"\u2588\u2588"COLOR_RESET);
    printf(" 3\t");
  }
  printf(COLOR_ORANGE"\u2588\u2588"COLOR_RESET);
  printf(" 1k\t");

  printf("\t");

  printf(COLOR_ORANGE"\u2588\u2588"COLOR_RESET);
  printf(" 15ppm");

  printf("\n");


  for (i=0; i<3; i++){ //line 7
    printf(COLOR_YELLOW"\u2588\u2588"COLOR_RESET);
    printf(" 4\t");
  }
  printf(COLOR_YELLOW"\u2588\u2588"COLOR_RESET);
  printf(" 10k\t");

  printf("\t");

  printf(COLOR_YELLOW"\u2588\u2588"COLOR_RESET);
  printf(" 25ppm");

  printf("\n");


  for (i=0; i<3; i++){ //line 8
    printf(COLOR_GREEN"\u2588\u2588"COLOR_RESET);
    printf(" 5\t");
  }
  printf(COLOR_GREEN"\u2588\u2588"COLOR_RESET);
  printf(" 100k\t");

  printf(COLOR_GREEN"\u2588\u2588"COLOR_RESET);
  printf(" 0.5%%");

  printf("\n");


  for (i=0; i<3; i++){ //line 9
    printf(COLOR_BLUE"\u2588\u2588"COLOR_RESET);
    printf(" 6\t");
  }
  printf(COLOR_BLUE"\u2588\u2588"COLOR_RESET);
  printf(" 1M\t");

  printf(COLOR_BLUE"\u2588\u2588"COLOR_RESET);
  printf(" 0.25%%");

  printf("\n");


  for (i=0; i<3; i++){ //line 10
  printf(COLOR_VIOLET"\u2588\u2588"COLOR_RESET);
  printf(" 7\t");
  }
  printf(COLOR_VIOLET"\u2588\u2588"COLOR_RESET);
  printf(" 10M\t");

  printf(COLOR_VIOLET"\u2588\u2588"COLOR_RESET);
  printf(" 0.1%%");

  printf("\n");


  for (i=0; i<3; i++){ //line 11
    printf(COLOR_GREY"\u2588\u2588"COLOR_RESET);
    printf(" 8\t");
  }
  printf("\t");

  printf(COLOR_GREY"\u2588\u2588"COLOR_RESET);
  printf(" 0.05%%");

  printf("\n");


  for (i=0; i<3; i++){ //line 12
    printf(COLOR_WHITE"\u2588\u2588"COLOR_RESET);
    printf(" 9\t");
  }
  printf("\n");


  return 0;
}
