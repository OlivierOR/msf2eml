#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i=0;
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    FILE * fpi;
    char * linei = NULL;
    size_t leni = 0;
    ssize_t readi;
    fp = fopen("fichier.msf", "r");
    char fichier[128] = "";
    if (fp == NULL)
        exit(EXIT_FAILURE);

     while ((read = getline(&line, &len, fp)) != -1) {
     
     char *suiteChaine;
     suiteChaine = strstr(line, "From - ");
     
      if (suiteChaine != NULL)
      {    i++;  
      snprintf(fichier, sizeof fichier, "%d.eml", i);
      fpi = fopen(fichier, "a");
      fprintf(fpi, "%s", line);
      printf("%d\n",i);
      fclose(fpi);
      }

      if (suiteChaine == NULL)
      {
      snprintf(fichier, sizeof fichier, "%d.eml", i);
      fpi = fopen(fichier, "a");
      //usleep(600);
      fprintf(fpi, "%s", line); 
      fclose(fpi);
      }
     
     }
        if (line)
        free(line);
    exit(EXIT_SUCCESS);
    fclose(fp);
}
