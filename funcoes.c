#include <stdio.h>
#include <math.h>
#include "funcoes.h"


float areaDo_quadrado(float base) {
    float calculoArea = base * base;
    return calculoArea;
 }


 float areaDo_Retangulo(float base, float altura) {
    float area = base * altura;
    return area;
 }

 float AreaCirculo (float raio)
{
	float x;
	x=M_PI*raio*raio;
	return x;
}

float perimetroRetangulo(float base, float altura){

    float perimetro = (base * 2) + (altura * 2);

    return perimetro;

}

float perimetroCirculo(float raio)
{
	float x;
	x=2*M_PI*raio;
	printf("O perimetro da circunferencia e: %f",x);
	return x;	  
}

//precisa impprtar <math.h>
float distanciaEucliadiana(float x1, float x2, float y1, float y2)
{
    float distancia = sqrt( pow (x2 - x1, 2) + pow (y2 - y1, 2));
    return distancia;
}
