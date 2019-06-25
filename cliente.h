#ifndef CLIENTE_H
#define CLIENTE_H

#include "lista.h"
#include <string>

class Cliente{

	private:

		float descuento;

	public:

		//Descripcion: Metodo constructor de objetos de clase Cliente. 
		//Precondiciones: -.
		//Postcondiciones: Los atributos de un objeto de clase Cliente son inicializados correctamente en 0
		Cliente();

		//Descripcion: Este metodo se encarga de retornar el porcentaje de descuento correspondiente al tipo 
		//de cliente que corresponda.
		//Precondiciones: -. 
		//Postcondiciones: El porcentaje de descuento al precio fijo es devuelto correctamente.
		virtual float obtener_descuento();

		void asignar_descuento(float descuento);

		//Descripcion: Metodo virtual que se encarga de listar los nombres de los clientes en las clases hijas.
		//Precondiciones: -.
		//Postcondiciones: En la clase cliente, este metodo es abstracto, por lo que no realiza ninguna accion
		virtual void listar_cliente() = 0;

		virtual void calcular_descuento()=0;

		//POST:devuelve el tipo de cliente (individuo o familia) de las clases hijas
		virtual string obtener_tipo_de_cliente() = 0;

		//POST:devuelve el numero de telefono de las clases hijas
		virtual int obtener_numero_de_telefono() = 0;

		//COMENTARIO: destructor de sus clases hijas 
		virtual ~Cliente() = 0;
	
};




#endif