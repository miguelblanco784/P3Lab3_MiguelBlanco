#include "Zoologico.cpp"
#include "Animales.cpp"

using namespace std;

int main(){
	vector<Animales*> animalesenespera;
	Zoologico* zologico;
	zologico = new Zoologico();
	while(true){
		int opcion;
		cout<<"1- Agregar Animales\n2- Mover los Animales al zoologico\n3- Listar\n0- Salir";
		switch(opcion){
			case 1:{
				int opcion2;
				string tipo;
				cout<<"Su animal es tipo: \n1- Zona Antartica\n2- Zona Desertica\n3- Zona de Jungla Tropical\n4- Zona Sabana\n";
				cin>>opcion2;
				switch(opcion2){
					case 1:{
						tipo = "Zona Antartica";
						break;
					}
					case 2:{
						tipo = "Zona Desertica";
						break;
					}
					case 3:{
						tipo = "Zona de Jungla";
						break;
					}
					case 4:{
						tipo = "Zona Sabana";
						break;
					}
				}
				string nombreespecie;
				cout<<"Nombre especie: ";
				cin>>nombreespecie;
				string nombreanimal;
				cout<<"Nombre animal: ";
				cin>>nombreanimal;
				int tamanimal;
				cout<<"Tamaño: ";
				cin>>tamanimal;
				int cantpatas;
				cout<<"Cantidad de patas: ";
				cin>>cantpatas;
				int largopatas;
				cout<<"Largo de patas: ";
				cin>>largopatas;
				string tipodepatas;
				cout<<"Ingrese tipo de patas: ";
				cin>>tipodepatas;
				string color1;
				cout<<"Ingrese Color de pelaje: ";
				cin>>color1;
				double grosor;
				cout<<"Ingrese el grosor: ";
				cin>>grosor;
				double largo;
				cout<<"Ingrese el largo: ";
				cin>>largo;
				string color2;
				cout<<"Ingrese el color de ojos: ";
				cin>>color2;
				cout<<"Tiene cola\n1- Verdadero\n2- Falso\n";
				int opcion3;
				bool cola;
				switch(opcion3){
					case 1:{
						cola = true;
						break;
					}
					case 2:{
						cola = false;
						break;
					}
				}
				int tamoreja;
				cout<<"Tamaño oreja: ";
				cin>>tamoreja;
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 0:{
				system("exit");
				break;
			}
		}
	}
	system("pause");
	return 0;
}

