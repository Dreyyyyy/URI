#include <stdio.h>

int main(int argc, char const *argv[]) {
  double n1,n2,n3,n4,media,nEx;
  scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
  media=(n1*2+n2*3+n3*4+n4*1)/10;
  printf("Media: %.1lf\n",media);
  if(media>=7.0)
    printf("Aluno aprovado.\n");
  if(media<5.0)
      printf("Aluno reprovado.\n");
  if(media>=5.0&&media<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&nEx);
        printf("Nota do exame: %.1lf\n",nEx);
        media=(media+nEx)/2.0;
        if(media>=5.0)
          printf("Aluno aprovado.\n");
        if(media<=4.9)
          printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",media);
  }
  return 0;
}
