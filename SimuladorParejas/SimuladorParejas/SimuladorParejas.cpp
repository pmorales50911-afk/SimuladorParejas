#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Simulador de parejas compatibles 

class persona {
public:

    string Nombre;
    int Edad;
    string colorfav;
    string musicafav;
    string pasatiempofav;
};

void capturarDatos();
void compatibilidad(int diferencia);


class preguntas : public persona {
public:

    void capturarDatos() {

        string colorfav, musicafav, pasatiempofav;

        cout << "¿Cual es tu color favorito?" << endl;
        cin >> colorfav;

        cout << "¿Cual es tu musica favorita?" << endl;
        cin >> musicafav;

        cout << "Cual es tu pasatiempo favorito?" << endl;
        cin >> pasatiempofav;
    }
};





void compatibilidad(int diferencia) {
   
    if (diferencia <- 2)
    {
        cout << "compatibilidad Excelente (100%)";
    }
    else if (diferencia <- 5)
    {
        cout << "compatibilidad Buena (75%)";
    }
    else if (diferencia <- 10)
    {
      cout <<  "compatibilidad Regular (50%)";
    }
    else
    {
        cout << "compatibilidad Baja (25%)";
    }
   
}



int main()
{
    persona persona1;
    persona persona2;

    cout << "Datos de la persona 1" << endl;

    cout << "Nombre" << endl;
    cin >> persona1.Nombre;

    cout << "Edad" << endl;
    cin >> persona1.Edad;

    // Preguntas persona 1

    cout << "color favorito:";
    cin >> persona1.colorfav;

    cout << "musica favorita:";
    cin >> persona1.musicafav;

    cout << "pasatiempo favorito:";
    cin >> persona1.pasatiempofav;

    cout << "Datos de la persona 2" << endl;

    cout << "Nombre:" << endl;
    cin >> persona2.Nombre;

    cout << "Edad:" << endl;
    cin >> persona2.Edad;

    // preguntas persona 2

    cout << "color favorito:";
    cin >> persona2.colorfav;

    cout << "musica favorita:";
    cin >> persona2.musicafav;

    cout << "pasatiempo favorito:";
    cin >> persona2.pasatiempofav;

    int puntos = 0;

    // comparar color
    if (persona1.colorfav == persona2.colorfav)
    {
        puntos += 25;
    }

    // comparar musica
    if (persona1.musicafav == persona2.musicafav)
    {
        puntos += 25;
    }

    // comparar pasatiempo
    if (persona1.pasatiempofav == persona2.pasatiempofav)
    {
        puntos += 25;
    }

    // comparar edad
    int diferencia = abs(persona1.Edad - persona2.Edad);

    if (diferencia < -2)
    {
        puntos += 25;
    }

    cout << "porcentaje obtenido:" << puntos << "%" << endl;

    compatibilidad(puntos);

    return 0;
};