#include <stdio.h>

int main(int argc, char const *argv[]) {

  float num;
  scanf("%f",&num);
  if(num>=0&&num<=100) {
    if(num>=0&&num<=25)
      printf("Intervalo [0,25]\n");
    if(num>25&&num<=50)
      printf("Intervalo (25,50]\n");
    if(num>50&&num<=75)
      printf("Intervalo (50,75]\n");
    if(num>75&&num<=100)
      printf("Intervalo (75,100]\n");
  }
  else
    printf("Fora de intervalo\n");
  return 0;

}
