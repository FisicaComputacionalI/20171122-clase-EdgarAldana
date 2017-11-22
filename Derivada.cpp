//Derivada
//Edgar Castro Aldana
//22 de noviembre de 2017
#include <iostream> 
# include <math.h> 
using namespace std; 
int main() {
  float res;
  float res1;
  float h;
  float x;
  x=0.15;
  res=cos(x);
cout << "cos(x)= "<<res<<endl;
h=0.01;  
//Este ciclo calcula que tan pequeño debe ser h para que cos(x+h) sea apenas mayor que cos(2x+h)
while (res>res1){
  //Si agrego un decimal mas a la resta, el programa tarda mucho en detenerse
  h=h-0.000000001;
  res=cos(x+h);
  res1=cos(x+(2*h));
}
cout << "h="<<h<<endl;
float der=((cos(.15+h)-cos(.15))/h);
cout << "f'(x)="<<der<<endl;
return (0);
}
