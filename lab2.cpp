#include <iostream>

using namespace std;

int main()
{

int resp=0;
while (resp!=4)
{
cout<< "\n Menu \n 1.-Arreglo\n 2.-numeros triangulares\n 3.-impares y cubos\n 4.-Salir\n Ingrese su opcion:";
	cin>> resp;

	if(resp==1)
	{
		int tam=6;
		int array[tam];		
		
		while (tam<0 || tam>5)
		{
			cout<< "Ingrese tamaño del arreglo: ";
			cin >> tam;
		}

		for(int i=0;i<tam;i++)
		{
			cout<< "ingrese numero " << i+1 << ": ";
			cin>> array[i];
		}
		
		for(int i=0;i<tam;i++)
		{
			for(int x=i+1;x<tam-1;x++)	
			{
				if(array[i]>array[x])
				{
            				int aux=array[i];
          		 		array[i]=array[x];
            				array[x]=aux;
				}
			}
		}

		cout << "\nEl numero mayor es: " << array[tam-1] << "\n";
		cout << "El numero menor es: " << array[(tam+1)-tam] << endl;

		cout << "\n Arreglo de forma ascendente: \n";
		for(int i=0;i<tam;i++)
		{
			cout << array[i] << ", ";
		}
		cout << endl;

	}


	if(resp==2)
	{
		
		int numero;
		bool sit;
		cout <<"Indique el numero que quiere comprobar: ";
		cin >> numero;
		int triangular=3;
		
		for(int i=3;i<numero;i++)
		{
			triangular+=i;

			if(triangular==numero)
			{
				sit=true;
				cout << "¡¡¡¡¡ Es triangular!!!!!";
				break;
			}else
			{
				sit=false;
			}
		}

		if(sit==false)
		{
			cout << "no es triangular\n";
			cout << " pero el triangular anterior a su numero es:  " << triangular << endl;
		}
	
	}
	if(resp==3)
	{
			
		int cont=1,num;
		cout << "\n Ingrese numero: ";
		cin >> num;
		for(int i=1;i<=num;i++)
		{
			cout << i <<"°3= ";
			for(int j=1;j<=i;j++)
			{
				cout << cont << " + ";
				cont+=2;
			}
			int cont2=cont;
			int total=0;
			for(int x=1;x<=i;x++)
			{
				cont2-=2;
				total+=cont2;
				
			}
			cout << "= " << total << endl;
		}
	}

}
return 0;
}




