#include "Zoologico.cpp"

using namespace std;

int main(){
	vector<Animales*> animalesenespera;
	Zoologico* zologico;
	zologico = new Zoologico("Manrique's'",1000,100000);
	while(true){
		int opcion;
		cout<<"1- Agregar Animales\n2- Mover los Animales al zoologico\n3- Listar\n0- Salir";
		cin>>opcion;
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
				cin>>opcion3;
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
				int capaudicion;
				cout<<"Ingrese la capacidad auditiva: ";
				cin>>capaudicion;
				double largocola;
				cout<<"Ingrese el largo su cola: ";
				cin>>largocola;
				cout<<"Su cola es peluda\n1- Verdadero\n2- Falso\n";
				int opcion4;
				bool peluda;
				cin>>opcion4;
				switch(opcion4){
					case 1:{
						peluda = true;
						break;
					}
					case 2:{
						peluda = false;
						break;
					}
				}
				animalesenespera.push_back(new Animales(nombreespecie, nombreanimal, tamanimal, tipo, new Patas(cantpatas, largopatas, tipodepatas), new Pelaje(color1, grosor, largo),new Ojos(color2,cola),new Orejas(tamoreja, capaudicion), new Cola(largocola,peluda)));
				break;
			}
			case 2:{
				for(int i = 0; i < animalesenespera.size();i++){
					if(animalesenespera.at(i)->getTipo()=="Zona Antartica"){
						zologico->setZonaantartica(animalesenespera.at(i));
					}else if(animalesenespera.at(i)->getTipo()=="Zona Desertica"){
						zologico->setZonadesertica(animalesenespera.at(i));
					}else if(animalesenespera.at(i)->getTipo()=="Zona de Jungla"){
						zologico->setZonajunglatropical(animalesenespera.at(i));
					}else if(animalesenespera.at(i)->getTipo()=="Zona Sabana"){
						zologico->setZonasabana(animalesenespera.at(i));
					}
				}
				animalesenespera.clear();
				break;
			}
			case 3:{
				zologico->print();
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

