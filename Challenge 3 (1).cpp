#include<stdlib.h>
#include<stdio.h>
int main(){
	float Mile;
	float Km;
	
	printf(" donner la distance en metre");
	scanf("%f",&Km);
	Mile = Km*1.609;
	
	printf(" la distance en mile est %.3f",Mile);
	
}
