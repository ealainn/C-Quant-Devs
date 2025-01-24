#include <iostream>
using namespace std;

const int N=100;
int k,b,c;
int a=b=c=1 ;
int d {1};
int n=3; 
int main(){
    int  e = a+b+c+d;
    float f = e/2*a + e/a ;
    int g = a % b;
    int increment = a++;
    increment+= 1;
    bool test1 = a==b;
    bool test2 = a>=b;
    bool test3 = a!=c;
    if (test1) int k =  a * 10;
    else int k = 100;
    int compteur;
    for (compteur=0; compteur<5 ; compteur++){     switch(compteur){
        case 0: cout << "Nombre Inferieur\n";
        case 1:
        case 2:
        break;
        case 3: cout << "Le bon nombre\n";
        default : cout << "Le cas defaut\n";
      };
    };
    cout <<"La valeur de a est:" <<a<< endl;
    cout <<"La valeur de b est:" <<b<< endl;
    cout <<"La valeur de c est:" <<c<< endl;
    cout <<"La valeur de d est:" <<d<< endl;
    cout <<"La valeur de e est:" <<e<< endl;
    cout <<"La valeur de f est:" <<f<< endl;
    cout <<"La valeur de g est:" <<g<< endl;
    cout <<"La valeur de k est:" <<k<< endl;
  return 0;
}   