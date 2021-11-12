#include<stdlib.h>
#include<stdio.h>
#include<math.h>
 
 int main(){
 	 float longueur;
 	 float largeur;
 	  float circonference;
 	  printf(" Entrez longueur de rectangle :\n");
 	   scanf("%f",&longueur);
 	   printf(" Entrez largeur de  de rectangle :\n");
 	   scanf("%f",&largeur);
 	   
 	circonference=2*(longueur+largeur);
 	printf("la circonférence d'un rectangle est %.2f",circonference);
 	
 	
 	return 0;
 	
 }
