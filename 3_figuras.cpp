#include <iostream>
using namespace std;
//------------------------------------------------------------------------
class Cuadrado {
	private: //Atributos
		int filas;
		int columnas;
	public:
		int tipo; //metodos
        void setFilas(int x);
        void setColumnas(int y);
        int getFilas();
        int getColumnas();
		void generar_cuadrado();	
}; 

class Triangulo {
	private: //atributos
		int filas;
		//int columnas;
	public://metodos
	    int tipo;
		void setFilas(int x);
        //void setColumnas(int y);
        int getFilas();
        //int getColumnas();
		void generar_triangulo();	
};
//--------------------------------------------------------------------------- SETTERS Y GETTERS
//-------------------------------CUADRADO
void Cuadrado::setFilas(int x)
{
    filas = x; 
}

void Cuadrado::setColumnas(int y)
{
    columnas = y; 
}

int Cuadrado::getFilas()
{
    return filas;
}

int Cuadrado::getColumnas()
{
    return columnas;
}
//-------------------------------TRIANGULO
void Triangulo::setFilas(int x)
{
    filas = x; 
}

//void Triangulo::setColumnas(int y)
//{
//    columnas = y; 
//}

int Triangulo::getFilas()
{
    return filas;
}

//int Triangulo::getColumnas()
//{
//    return columnas;
//}
//--------------------------------------------------------------------------------METODOS (ACCIONES O VOIDS)
//----------------------------------------------------CUADRADO
void Cuadrado::generar_cuadrado()
{
	cout<<"\n"<<endl;
	switch(tipo)
    {
		case 1:
			//Cuadrado relleno
			for(int f=0; f<filas; f++)
			{
				for(int c=0; c<columnas; c++)
				{
					cout<<"*";
				}
				cout<<endl;
			}
		break;
		case 2: 
			//Cuadrado sin relleno
			for(int f=0; f<filas; f++)
			{
				for(int c=0; c<columnas; c++)
				{
					if(f==0||c==0||f==(filas-1)||c==(columnas-1))
					{
						cout<<"*";
					}
					else
					{
						cout<<" ";
					}
				}
				cout<<endl;
			}
		break;
	}	
}
//----------------------------------------------------TRIANGULO
void Triangulo::generar_triangulo()
{
	cout<<"\n"<<endl;
	if(tipo==3)
	{
		
		for(int f=0; f<filas; f++ )
		{
			for(int i=0; i<(filas-1)-f; i++)
			{
				cout<<" ";
			}
			for(int i=0; i<(f*2)+1; i++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
	} 
	else
	{
		cout<<"Opcion no encontrada "<<endl;
	}
}
//------------------------------------------------------------------------------MAIN 
int main()
{
	int opc;

	Cuadrado c;
	c.setFilas(5);
 	c.setColumnas(5);

	Triangulo t;
	t.setFilas(10);
	cout<<"Tipos: "<<endl;
	cout<<"1- cuadrado relleno "<<endl;
	cout<<"2- cuadrado sin relleno "<<endl;
	cout<<"3. triangulo relleno"<<endl;
	cout<<"\nSelecciona el tipo: "<<endl;
	cin>>opc;
	
	switch (opc)
	{
	case 1:
		c.tipo = 1;
		c.generar_cuadrado();
		break;
	case 2:
		c.tipo = 2;
		c.generar_cuadrado();
		break;
	case 3:
		t.tipo = 3;
		t.generar_triangulo();
		break;		
	default:
		break;
	}
	
	return 0;
}