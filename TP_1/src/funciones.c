/*
 * funciones.c
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



 float pedirNumero (char* mensaje){

	 float numero;
	 printf("%s", mensaje);
	 scanf("%f", &numero);
	 if(numero < 0){
		 printf("error, no se pueden ingresar negativos\n");
		 printf("%s", mensaje);
			 scanf("%f", &numero);
	 }
	 return numero;
 }

 float calcularDescuentoTarjetaDebito(float numero){

	 int descuento;


	 descuento = numero - (numero * 0.10);

	 return descuento;
 }
 float calcularAumentoConTarjetaCredito(float numero){

	 int aumento;


	 aumento = numero + (numero * 0.25);

	 return aumento;
 }
 float calcularPrecioBitcoin(float numero){

	 int BTC;
	 float precioBitcoin;

	 BTC = 4606954.55;

	 precioBitcoin = numero / BTC;

	 	return precioBitcoin;

 }
 float calcularPrecioUnitario(float numero1, float x){

	 float precioUnitario;

	 precioUnitario = numero1 / x;

	 return precioUnitario;
 }
float calcularDiferenciaDePrecio(float numero1, float numero2){

	int diferenciaPrecio;

	diferenciaPrecio = numero1 - numero2;

	return diferenciaPrecio;
}
void limpiarConsola(){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
