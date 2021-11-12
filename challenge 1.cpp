#include<stdio.h>
#include<stdlib.h>
  int main(){
  	
  	char nom[20];
  	char prenom[20];
  	int age;
  	char sexe[5];
  	int num;
  	 printf("Donnez votre nom :\n");
  	 scanf("%s",nom);
  	 printf("Donnez votre prenom :\n");
  	 scanf("%s",prenom);
  	 printf("Donnez votr age :\n");
  	 scanf("%d",&age);
  	 printf("Donnez votr sexe :\n");
  	 scanf("%s",sexe);
  	 printf("Donnez votr numéro de téléphone :\n");
  	 scanf("%d",&num);
  	    printf("je m'appel %s %s mon age est %d mon sexe est %s et mon numéro est %d .",nom,prenom,age,sexe,num);
  return 0;	
  }
