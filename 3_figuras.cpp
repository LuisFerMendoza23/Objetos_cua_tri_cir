
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

class Circulo
{
private:
	int filas;
	int columnas;
public:
	int tipo;
	void setFilas(int x);
	int getFilas();
	void setColumnas(int y);
	int getColumnas();
	void generar_circulo();
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

int Triangulo::getFilas()
{
    return filas;
}

//--------------------------------CIRCULO
void Circulo::setFilas(int x)
{
		filas = x;
}
int Circulo::getFilas()
{
	return filas;
}
void Circulo::setColumnas(int y)
{
	columnas = y;	
}
int Circulo::getColumnas()
{
	return columnas;
}
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
//------------------------------------------------------CIRCULO
void Circulo::generar_circulo()
{
	if(tipo == 4)
	{
		//FOR para hacerlo en sentido bien
		for(int f=0; f<columnas; f++)
		{
			//for para los espacios a la izquierda
			for(int c=0; c<(columnas-1)-f;  c++)
			{
				cout<<" ";
			}
			//for para imprimir los * i<(d*2)+1
			for(int c=0; c<(f*2)+1; c++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		//FOR para sentido contrario
		//cir.setFilas(9);
		//cir.setColumnas(5);
		for(int f=columnas-1; f>-1; f--)
		{
			//for para los espacios a la izquierda
			for(int c=(columnas-1)-f; c>-1;  c--)
			{
				cout<<" ";
			}
			//for para imprimir los nasteriscos
			for(int c=((f-1)*2); c>-1; c--)
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

	Circulo cir;
	cir.setFilas(11);
	cir.setColumnas(6);

	cout<<"Tipos: "<<endl;
	cout<<"1- cuadrado relleno "<<endl;
	cout<<"2- cuadrado sin relleno "<<endl;
	cout<<"3. triangulo relleno"<<endl;
	cout<<"4. circulo relleno"<<endl;
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
	case 4:
		cir.tipo = 4;
		cir.generar_circulo();
		break;	
	default:
		break;
	}
	
	return 0;
}