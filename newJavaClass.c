#include <stdio.h>
#include <stdlib.h>
#include "utilitaire.h"

int main(int argc, char *args[]){

  if(argc<1){
    printf("Arguments manquants, nom de la class, suivis des options");
    return 0;
  }

  FILE *f=creerFichierClass(args[1]);
  
  remplirFichier(args+1,argc-1,f);

  fermerFichier(f);
  return 0;
}
