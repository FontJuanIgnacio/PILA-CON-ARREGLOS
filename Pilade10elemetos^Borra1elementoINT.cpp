// Estructura pila con Arreglos que posee 10 elementos donde trabaja con el tipo de dato INT o ENTEROS y borra un elemento

#include<iostream>

using namespace std;

struct Pila{
    int items[10];
    int tope;
};

//declaracion de metodos
void inicializar(Pila &p);
void insertar(Pila &p,int x);
int quitar(Pila &p);

int main()
{
    Pila p;
    int x=0;
    
    inicializar(p);
    
    for(int i=0; i<10; i++){
        cout<<"Ingresar un elemento para agregar a la pila";
        cin>>x;
        insertar(p,x);
    }
    
    cout<<"se quito este elemento: "<<quitar(p);
    
    return 0;
}

//definicion de metodos
void inicializar(Pila &p){
    p.tope=-1;
}

void insertar(Pila &p, int x){
    if(p.tope == 9){
        cout<<"La pila esta llena";
    }else{
        p.tope++;
        p.items[p.tope]=x;
    }
}

int quitar(Pila &p){
    if(p.tope >=0){
        int x = p.items[p.tope];
        p.tope--;
        return x;
        
    }else{
      cout<<"La pila ya esta vacia";  
      exit(1);
    } 
    
}