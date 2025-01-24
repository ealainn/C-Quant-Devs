#include <iostream>
#include <cmath>
using namespace std;

double surface_du_cercle(float rayon){
    return M_PI * pow(rayon,2);
}

void compter_jusqu_a_10(){
    int compteur;
    for (compteur=0; compteur <5; compteur++){ cout << "valeur du compteur" <<compteur<< endl;};
}

int main(){
    cout<<"Je compte jusqua 10 et je calcule la surface du cercle\n";
    compter_jusqu_a_10();
    float rayon = 213.05;
    double surface = surface_du_cercle(rayon);
    cout<< "La valeur de la surface est: " <<surface<< " m^2 \n";
}
