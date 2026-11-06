#include <iostream>

using namespace std;


int main() {

    double stopnieCelcjusza;
    cout << "Podaj ilosc stopni(celcjusza): " << endl;
    cin >>  stopnieCelcjusza;

    double Kelvin = stopnieCelcjusza + 273.15;
    double Farhenheit = (stopnieCelcjusza * 1.8 ) + 32;

    cout << "W celcjuszach: " << stopnieCelcjusza << " \n w kelvinach: " << Kelvin << " \n w Farenheit: " << Farhenheit << endl;
}