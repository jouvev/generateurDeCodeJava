#ifndef H_UTILITAIRE
#define H_UTILITAIRE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*cree un fichier nom.java et renvoie un pointeur sur nom.java en writemode
*/
FILE * creerFichierClass(char *nom);

/*ecrit dans le fichier la class à partir des options de args de main
*/
void remplirFichier(char *args[], int taille, FILE *f);

/*verifie qu'une option opt est dans la liste*/
int checkOption(char *opt, char* liste[],int taille);

/*ecrit dans le fichier f "public class nom"
*/
void enTeteClass(FILE *f,char *nom);

/*ecrit la fonction main dans le fichier*/
void fonctionMain(FILE *f);

/*ferme le fichier f. A faire avant la fin du programme*/
void fermerFichier(FILE *f);

#endif
