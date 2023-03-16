#include <iostream>

using namespace std;





class KilometrajeGasolina{
	
	//constructor
	public:
	KilometrajeGasolina(double kilometros,double gasolina) {
		establecerKilometros(kilometros);
		establecerLitrosGasolina(gasolina);
	}
	
	
	//sección de getters and setters
	void establecerKilometros(double kilometers){
		kilometros= kilometers;
	}
	double obtenerKilometros(){
		return kilometros;
	}
	void establecerLitrosGasolina(double gas){
		litrosGasolina=gas;
	}
	double obtenerLitrosGasolina(){
		return litrosGasolina;
	}
	
	double obtenerKilometrosTotales(){
		return kilometrosTotales;
	}
	double obtenerKpl(){
		return kpl;
	}
	double obtenerkplTotales(){
		return kplTotales;
	}
	//fin de sección 
	
	
	//inicio de funciones miembro
	
	void calcularkpl(double kilometers, double gas){
		double kpl=0;
		cout<< "Kilometros:"<<kilometers
		<<"\n Gasolina:"<<gas<<endl;	
		
		kpl= kilometers/gas;
		cout<<"KPL en este recorrido:"<<kpl<<endl;
		
		kilometros+=kilometers;
		litrosGasolina+=gas;
		cout<<"Kilometros Totales:"<<kilometros
		<<"\n Gasolina Total:"<<litrosGasolina<<endl;
		
		kplTotales= kilometros/litrosGasolina;
		cout<<"KPL Totales:"<<kplTotales<<endl;
	}
	
	void calculo(){
		
		double kilometers=0;
		double gas=0;
		int centinela=0;
		
		while(centinela!=-1){
		
			cout<<"Digite los kilometros:"<<endl;
			cin>>kilometers;
			cout<<"Digite la gasolina:"<<endl;
			cin>>gas;
			
			calcularkpl(kilometers,gas);
			cout<<"Si desea calcular el kpl digite 0, de lo contrario digite -1"<<endl;
			cin>>centinela;
			
		}
	}
	
	//fin de sección
	
	
	
	
	private:
		double kilometros=0;
		double kilometrosTotales=0;
		double litrosGasolina=0;
		double kpl=0;
		double kplTotales=0;
};


int main(){
	
	KilometrajeGasolina kpl(0,0);
	kpl.calculo();
}