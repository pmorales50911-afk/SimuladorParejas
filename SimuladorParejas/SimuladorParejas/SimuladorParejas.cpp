#include <iostream>
using namespace std;

// Simulador de parejas compatibles 

class persona {
private:

    string Nombre;
    int Edad;
public:
    string colorfav;
    string musicafav;
    string pasatiempofav;

    persona(string colorfav, string musicafav, string pasatiempofav);

};

void capturarDatos();

class preguntas : public persona {

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



int main()
{


    return 0;
};