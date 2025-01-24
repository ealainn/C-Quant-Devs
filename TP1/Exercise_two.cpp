#include <iostream>
#include <cmath>
using namespace std;

float somme_n_entier(){
    int n;
    float Somme=0.0;
    cout<< "Entrer un nombre entier strictement positif: ";
    cin >> n;
    if (n<=0){ 
            cout << "Zero or negative numbers are not authorized" << endl;
            return 0.0;
            }
    else {
        int compteur;
        for (compteur=0; compteur<=n; compteur++){Somme+= compteur;};
        };
    return Somme;
    }

int main(){
    float retour;

    do {
        retour =somme_n_entier();
    } while (retour==0.0);    
    
    cout << "La somme des entiers est:  " << retour << endl;
    return 0;
}
