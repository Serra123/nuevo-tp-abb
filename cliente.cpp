#include "cliente.h"

Cliente::Cliente(){
	this->descuento=0;

}

float Cliente::obtener_descuento(){
	return descuento;
}
void Cliente::asignar_descuento(float descuento){
	this->descuento = descuento;
}

Cliente::~Cliente(){
	
}