#include <stdio.h>
#include <stdlib.h>

struct data {
    char name[20];
    int age;
    char birth[20];
};

  struct data data_preson[] = {
    {"John", 20, "1999-01-01"},
    {"ben", 21, "1998-01-01"},
    {"haha", 22, "1997-01-01"},
    {"masse", 23, "1996-01-01"},
    {"hue", 24, "1995-01-01"},
    {"asima", 25, "1994-01-01"},
    {"meo", 26, "1993-01-01"},
    {"hihihi", 27, "1992-01-01"},
    {"hohoh", 28, "1991-01-01"},
    {"wwew", 29, "1990-01-01"},
    {"Doe", 30, "1989-01-01"}
  };

void _logic() {

  int n = sizeof(data_preson) / sizeof(data_preson[0]);

  for (int i = 0; i < n; i++) {
      printf("\nName: %s\n", data_preson[i].name);
     printf("Age: %d\n", data_preson[i].age);
     printf("Birth: %s\n", data_preson[i].birth);
  }
}

void _filter() {
  int n = sizeof(data_preson) / sizeof(data_preson[0]);

  printf("\n\nFilter by age 25 or > 27\n");
  for (int i = 0; i < n; i++) {
    if (data_preson[i].age == 20 | data_preson[i].age > 27) {
      printf("\nName: %s\n\n", data_preson[i].name);
    } 
  }
}

int main () {
  system("clear");
  _logic();
  _filter();

    return 0;
}