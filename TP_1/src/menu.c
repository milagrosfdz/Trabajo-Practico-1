#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "menu.h"
#include "funciones.h"

//fabsf convertir flotante negativo a positivo

void menu(){
	setbuf(stdout, NULL);
	int i;
	int opcion;
	float x;
	float y;
	float z;

	float precioDescuentoTarjetaDebitoAerolineas;
	float precioDescuentoTarjetaDebitoLATAM;

	float precioAumentoTarjetaCreditoAerolineas;
	float precioAumentoTarjetaCreditoLATAM;

	float precioEnBTCAerolineas;
	float precioEnBTCLATAM;

	float precioUnitarioAerolineas;
	float precioUnitarioLATAM;

	float diferenciaDePrecio;


	//inicializacion
	i = 9;
	x = 0;
	y = 0;
	z = 0;




	//while(i != 6)

	do{

		printf("¡BIENVENIDO!\n");
		printf("------------------------------------\n");
		printf("\n MENÚ DE OPCIONES\n");
		printf("------------------------------------\n");
		printf("\n 1) Ingrese KM: (km = %.2f)", x);
		printf("\n 2) Ingrese Ingrese vuelo: (Aerolíneas: %.2f| Latam: %.2f)  ", y, z);
		printf("\n 3) Calcular costos. \n");
		printf("\n 4) Informar resultados. \n");
		printf("\n 5) Carga forzada de datos. \n");
		printf("\n 6) Salir \n");
		printf("\n \n");
		printf("Elijo la opción ");
		fflush(stdin);

		scanf("%d", &opcion);


		switch(opcion){

		case 1:
			x = pedirNumero("Ingrese KM:");
			break;
		case 2 :
			printf("Ingrese los precios de vuelos: \n");
			y = pedirNumero("Precio Aerolíneas:  \n");
			z = pedirNumero("Precio Vuelo Latam \n" );
			break;
		case 3 :
			if(x == 0 && y == 0 && z == 0){
				printf("No se ha introducido ningun valor para realizar calculos");
			}else{

				//aerolineas
				precioDescuentoTarjetaDebitoAerolineas = calcularDescuentoTarjetaDebito(y);
				precioAumentoTarjetaCreditoAerolineas = calcularAumentoConTarjetaCredito(y);
				precioEnBTCAerolineas = calcularPrecioBitcoin(y);
				precioUnitarioAerolineas = calcularPrecioUnitario(y,x);
				//latam
				precioDescuentoTarjetaDebitoLATAM = calcularDescuentoTarjetaDebito(z);
				precioAumentoTarjetaCreditoLATAM = calcularAumentoConTarjetaCredito (z);
				precioEnBTCLATAM = calcularPrecioBitcoin(z);
				precioUnitarioLATAM = calcularPrecioUnitario(z,x);
				diferenciaDePrecio = calcularDiferenciaDePrecio(y,z);




			}

			break;
		case 4 :
					printf("\nAerolíneas: %.2f", y);
					printf("\na) Precio con tarjeta de débito: %.2f", precioDescuentoTarjetaDebitoAerolineas);
					printf("\nb) Precio con tarjeta de crédito: %.2f", precioAumentoTarjetaCreditoAerolineas);
					printf("\nc) Precio con tarjeta de crédito: %f", precioEnBTCAerolineas);
					printf("\nd) Precio unitario: %.2f", precioUnitarioAerolineas);

					printf("\nLatam: %.2f", z);
					printf("\na) Precio con tarjeta de débito: %.2f",precioDescuentoTarjetaDebitoLATAM);
					printf("\nb) Precio con tarjeta de crédito: %.2f", precioAumentoTarjetaCreditoLATAM);
					printf("\nc) Precio con tarjeta de crédito: %f", precioEnBTCLATAM);
					printf("\nd) Precio unitario: %.2f\n", precioUnitarioLATAM);

					if(diferenciaDePrecio > 0){
						printf("\n La diferencia de precio es de: %.2f\n", diferenciaDePrecio);
					}else{
						if(diferenciaDePrecio < 0){
						printf("\n La diferencia de precio es de: %.2f\n", fabsf(diferenciaDePrecio));
						}

					}
			break;
		case 5:
			x = 7090;
			y = 162965;
			z = 159339;

			//aerolineas
			precioDescuentoTarjetaDebitoAerolineas = calcularDescuentoTarjetaDebito(y);
			precioAumentoTarjetaCreditoAerolineas = calcularAumentoConTarjetaCredito(y);
			precioEnBTCAerolineas = calcularPrecioBitcoin(y);
			precioUnitarioAerolineas = calcularPrecioUnitario(y,x);
			//latam
			precioDescuentoTarjetaDebitoLATAM = calcularDescuentoTarjetaDebito(z);
			precioAumentoTarjetaCreditoLATAM = calcularAumentoConTarjetaCredito (z);
			precioEnBTCLATAM = calcularPrecioBitcoin(z);
			precioUnitarioLATAM = calcularPrecioUnitario(z,x);
			diferenciaDePrecio = calcularDiferenciaDePrecio(y,z);

			printf("\nAerolíneas: %.2f", y);
			printf("\na) Precio con tarjeta de débito: %.2f", precioDescuentoTarjetaDebitoAerolineas);
			printf("\nb) Precio con tarjeta de crédito: %.2f", precioAumentoTarjetaCreditoAerolineas);
			printf("\nc) Precio con tarjeta de crédito: %f", precioEnBTCAerolineas);
			printf("\nd) Precio unitario: %.2f", precioUnitarioAerolineas);

			printf("\nLatam: %.2f", z);
			printf("\na) Precio con tarjeta de débito: %.2f",precioDescuentoTarjetaDebitoLATAM);
			printf("\nb) Precio con tarjeta de crédito: %.2f", precioAumentoTarjetaCreditoLATAM);
			printf("\nc) Precio con tarjeta de crédito: %f", precioEnBTCLATAM);
			printf("\nd) Precio unitario: %.2f\n", precioUnitarioLATAM);

			if(diferenciaDePrecio > 0){
			printf("\n La diferencia de precio es de: %.2f\n", diferenciaDePrecio);
			}else{
			if(diferenciaDePrecio < 0){
			printf("\n La diferencia de precio es de: %.2f\n", fabsf(diferenciaDePrecio));
			}

			}


			break;
		case 6:


			break;
		default:
			printf("elegir nuevamente una opcion");
		}


	}while(i !=6);




}
