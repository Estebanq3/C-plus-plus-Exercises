#include <iostream>
#include <string>

class clase{
	
	public: //constructor
		
		explicit clase(std::string nombre)
		:nombreCurso(nombre), nombreMateria(nombre)
		{
			
		}
	
	
	
	void establecerNombreCurso(std::string nombre){
		nombreCurso= nombre;
	}
	
	std::string obtenerNombreCurso()const{
		return nombreCurso;
	}
	
	void mostrarMensaje()const{
		std::cout<<"Nombre del curso:\n"<<nombreCurso<<std::endl;
	}
	
	private:
	std::string nombreCurso;
	std::string nombreMateria;
	
	
};