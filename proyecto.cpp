#include "iostream"

using namespace std;

const int longCad = 20;
struct costoPorArticulo{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

void leer(int, costoPorArticulo *);
float calculo(int, costoPorArticulo *);
void imprimir(int, costoPorArticulo*);
float total(int, costoPorArticulo*);

int main(){

    int n;
    float resultado;

    cout << endl << "Ingrese la cantidad de articulos a registrar: ";
    cin >> n;

    costoPorArticulo *costos = new costoPorArticulo[n];

    leer(n, costos);
    calculo(n, costos);
    imprimir(n, costos);

    resultado = total(n, costos);                    //recuperamos el valor retornado de la funcion

    cout << endl << "Costo total de la compra: $" << resultado << endl;

    return 0;

}

void leer(int n, costoPorArticulo *articulo){       // funcion que pide los datos del arreglo


    for (int i=0 ; i<n ; i++){

        cout << endl << "ARTICULO [" << (i+1) << "]" << endl; 

        cout << endl << "Nombre del articulo: ";
        cin >> articulo[i].nombreArticul;
        cout << "Cantidad: ";
        cin >> articulo[i].cantidad;
        cout << "Precio: $";
        cin >> articulo[i].precio;

    }
    
}

float calculo(int n, costoPorArticulo *articulo){       //funcion que realiza el calculo del costo del articulo

    float costo=0;

    for (int i=0 ; i<n ; i++){

        articulo[i].costoPorArticulo = (articulo[i].cantidad * articulo[i].precio);

    }

}

void imprimir (int n, costoPorArticulo *articulo){      //funcion que muestra los datos
    
    cout << endl << "..:: IMPRIMIR DATOS ::.." << endl;

    for(int i=0 ; i < n ; i++){


        cout << endl << "ARTICULO [" << (i+1) << "]" << endl; 

        cout << endl << "Nombre articulo: " << articulo[i].nombreArticul << endl;
        cout << "Cantidad: " << articulo[i].cantidad << endl;
        cout << "Precio: $" << articulo[i].precio << endl;
        cout << "Costo articulo: $" << articulo[i].costoPorArticulo << endl;
    }

}

float total(int n, costoPorArticulo *articulo){        // funcion que retorna el total de la compra

    float resultado=0;

    for (int i=0 ; i<n ; i++){

        resultado += articulo[i].costoPorArticulo;

    }

    return resultado;

}