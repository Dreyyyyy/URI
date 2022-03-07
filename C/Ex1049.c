#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char rspst1[20],rspst2[20],rspst3[20];
  char v1[]="vertebrado",v2[]="ave",v4[]="onivoro",v5[]="carnivoro",v8[]="inseto",v10[]="hematofago";
  scanf("%s",rspst1);
  scanf("%s",rspst2);
  scanf("%s",rspst3);
  if (strcmp(rspst1,v1)==0) {
    if (strcmp(rspst2,v2)==0) {
      if (strcmp(rspst3,v5)==0) {
        printf("aguia\n");
      }
      else
        printf("pomba\n");
    }
    else {
      if(strcmp(rspst3,v4)==0) {
        printf("homem\n");
      }
      else {
        printf("vaca\n");
      }
    }
  }
  else {
    if (strcmp(rspst2,v8)==0) {
      if (strcmp(rspst3,v10)==0) {
        printf("pulga\n");
      }
      else {
        printf("lagarta\n");
      }
    }
    else {
      if (strcmp(rspst3,v10)==0) {
        printf("sanguessuga\n");
      }
      else {
        printf("minhoca\n");
      }
    }
  }
  return 0;
}
