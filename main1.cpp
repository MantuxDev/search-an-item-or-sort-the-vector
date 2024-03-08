//Scrivi un programma che dato un vettore di N elementi,
//permetta all'utente di ricercare un elemento e di 
//riordinare il vettore in ordine crescente

#include <iostream>
#include <stdlib.h>

using namespace std;

const int N=100;

//prototipi
int menu();
void carica(float vettore[],int &n);
void trova(float vettore[],int n);
void ordina(float vettore[],int n);

int main(){

    float vettore[N];
    int scelta,n;

    do{


        scelta=menu();

        switch(scelta){
            
            case 1:{
                carica(vettore,n);
                break;
            }

            case 2:{
                trova(vettore,n);
                break;
            }

            case 3:{
                ordina(vettore,n);
                break;
            }

            case 0:{
                cout<<"Arrivederci!"<<endl;
                break;
            }

            default:{
                cout<<"Scelta non valida"<<endl;
                break;
            }
        }

    }while(scelta!=0);
    
    system("pause");
    return 0;
}

int menu(){

    int s;

    cout<<"\t -----Menu'-----\n";
    cout<<"1. Carica il vettore \n";
    cout<<"2. Cerca un elemento \n";
    cout<<"3. Riordina il vettore \n";
    cout<<"0. Esci \n";

    cout<<"\nInserisci la tua scelta: ";
    cin>>s;

    cout<<endl;
    
    return s;
}


void carica( float vettore[], int &n){
    
   do{
        cout<<"Inserisci la dimensione del vettore: ";
        cin>>n;

        if(n<=0 || n>N){
            cout<<"La dimensione del vettore deve essere compresa trea 1 e "<<N<<endl;
        }
            
    }while(n<=0 || n>N);

    for(int i=0; i<n; i++){
        cout<<"Inserisci l'elemento "<<i+1<<": ";
        cin>>vettore[i];
    }

    cout<<"Premi qualsiasi tasto per continuare... ";
    cin.ignore();
    cin.get();
    system("clear");
}


void trova( float vettore[],int n){
    
    float numero;
    bool trovato=false;
    int x;

    cout<<"Inserisci il numero da cercare: ";
    cin>>numero;

    for(int i=0; i<n; i++){
        if(numero==vettore[i]){
            trovato=true;
            x=i;
            break;
        }
    }

    if(trovato==true){
        cout<<"Il numero "<<numero<<" si trova in posizione "<<x+1<<endl;
    }
    else{
        cout<<"Il numero "<<numero<<" non si trova nel vettore"<<endl;
    }

    cout<<"Premi qualsiasi tasto per continuare... ";
    cin.ignore();
    cin.get();
    system("clear");

}


void ordina( float vettore[], int n){

    float temp;

    cout<<"Vettore originale: ";
    for(int i=0; i<n; i++){
        cout<<vettore[i]<<" ";
    }

    cout<<"\n Vettore ordinato: ";
    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

            if(vettore[i]>vettore[j]){

                temp=vettore[i];
                vettore[i]=vettore[j];
                vettore[j]=temp;

            }
        }
        cout<<vettore[i]<<" ";
    }

    cout<<endl;

    cout<<"Premi qualsiasi tasto per continuare... ";
    cin.ignore();
    cin.get();
    system("clear");
}
