#include <iostream>
using namespace std;

int main(){
  //Qui vanno definite le variabili
  float a=0;                      //inizializzo le variabili delle misure
  float b=0;
  float c=0;

  cin >> a >> b >> c;             //l'utente inserisce le varie misure 

  //Qui va scritto il codice per eseguire i calcoli richiesti

  cout << (a*b)/2 << endl;        //Stampo a video l'area del triangolo
  cout << a*a << endl;            //Stampo a video l'area del quadrato
  cout << a*b << endl;            //Stampo a video l'area del rettangolo
  cout << ((a+b)*c)/2 << endl;    //Stampo a video l'area del trapezio

}
