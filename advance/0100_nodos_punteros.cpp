#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    // Definición de la estructura del nodo
    struct nodo{
        int n;
        nodo *sig;
    }*cab=NULL, *aux, *aux1;

    do{
        // Asignación de memoria para un nuevo nodo
        aux=(nodo*)malloc(sizeof(struct nodo));
        cout<<"Ingrese un dato: ";
        cin>>aux->n;
        
        if(cab==NULL){
            // Si la lista está vacía, el nuevo nodo se convierte en el primer nodo
            cab=aux1=aux;
        }
        else{
            // Si la lista no está vacía, se agrega el nuevo nodo al final de la lista
            aux1->sig=aux;
            aux1=aux;
            aux1->sig=NULL;
        }
    }while(aux->n!=0);  // cuando se introduce un cero se dejan de pedir más datos

    cout<<"\nTu lista es:"<<endl;
    aux1=cab;
    while(aux1!=NULL){
        // Mostrar los elementos de la lista
        cout<<aux1->n<<"-";
        aux1=aux1->sig;
    }
    cout<<endl;
    return 0;
}
