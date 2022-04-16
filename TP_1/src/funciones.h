

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#endif /* FUNCIONES_H_ */

float pedirNumero(char * mensaje);
///\brief funcion para pedir numero
/// \param char * mensaje se escribe un mensaje
/// \return se devuelve el numero que se pidio



float calcularDescuentoTarjetaDebito(float numero);
///\brief funcion para calcular el descuento de la tarjeta de debito
/// \param float numero es el precio ingresado
///\return devuelve el resultado del descuento


float calcularAumentoConTarjetaCredito(float numero);
///\brief funcion para calcular el interes de la tarjeta de debito
/// \param float numero es el precio ingresado
///\return devuelve el resultado del aumento

float calcularPrecioBitcoin(float numero);
///\brief funcion para calcular el precio en bitcoin
/// \param float numero es el precio ingresado
///\return devuelve el resultado en bitcoin

float calcularPrecioUnitario(float numero1, float x);
///\brief funcion para calcular el precio unitario
/// \param float numero es el precio ingresado, float x son los kilometros
///\return devuelve el resultado de la division como precio unitario

float calcularDiferenciaDePrecio(float numero1, float numero2);
///\brief funcion para calcular la diferencia entre ambos precios
/// \param float numero1 es el primer precio ingresado, float numero2 el segundo precio ingresado
///\return devuelve el resultado de la resta como la diferencia de precio
