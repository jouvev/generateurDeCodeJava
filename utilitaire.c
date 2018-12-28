#include "utilitaire.h"

FILE * creerFichierClass(char *nom){
  char *path=malloc(strlen(nom)+6);//".java\0"
  path = strcpy(path,nom);
  path = strcat(path,".java");
  FILE *f = fopen(path,"w+");
  free(path);
  return f;
}

void remplirFichier(char *args[], int taille, FILE *f){
  enTeteClass(f,args[0]);
  fputs("{\n\n",f);//"public class nom {"

  if(checkOption("main",args+1,taille-1)){
    fonctionMain(f);
    fputs("{\n\n\t}\n\n",f);
  }//"public .. main {}"

  fputc('}',f);
}

void enTeteClass(FILE *f, char *nom){
  fprintf(f,"public class %s",nom);
}

int checkOption(char *opt,char *liste[],int taille){
  int i;
  for(i=0;i<taille;i++){
    if(strcmp(opt,liste[i])==0){
      return 1;
    }
  }
  return 0;
}

void fonctionMain(FILE *f){
  fprintf(f,"\tpublic static void main(String[] args)");
}

void fermerFichier(FILE *f){
  fclose(f);
}
