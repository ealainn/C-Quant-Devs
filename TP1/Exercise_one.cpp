#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float number;
    cout << "Entrer une valeur positive (0 pour terminer) :";
    cin >> number;
    if (number==0){
        return 0;
        }
    else if ( number<0)
        {cout<< "Erreur, la valeur ne peut etre negative :";  
         main();
         }
    else { cout << "La racine de " << number << " " << "est : " <<sqrt(number);};
    return 0;
}