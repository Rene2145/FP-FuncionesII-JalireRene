#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string respuesta, jugador1, jugador2;
    int puntosJugador1 = 0, puntosJugador2 = 0, dadojugador1 = 0, dadojugador2 = 0;

    srand(time(0));
    cout<<"JUEGO DE DADOS POR TURNOS"<<endl<<endl;
    cout<<"¡Comencemos a jugar!"<<endl<<endl;
    while (true) {
        cout << "jugador1" <<endl<< "¿Deseas lanzar el dado? (si/no): "<<endl<<endl;
        cout<<"1 <- si"<<endl;
		cout<<"2 <- no"<<endl;
        cin >> respuesta;
        cout<<""<<endl;
        if (respuesta == "1" ) {
            dadojugador1 = (rand() % 6) + 1;
            cout << "jugador1 obtuvo: " << dadojugador1 << endl<<endl;
        } else {
            cout << "jugador1"<<endl<< "Decidio no lanzar su dado esta ronda." << endl<<endl;
            dadojugador1 = 0; 
        }

        cout << "jugador2" <<endl<< "¿Deseas lanzar el dado? (si/no): "<<endl;
        cout<<"1 <- si"<<endl;
		cout<<"2 <- no"<<endl;
        cin >> respuesta;
        cout<<""<<endl;
        if (respuesta == "1" ) {
            dadojugador2 = (rand() % 6) + 1;
            cout << "jugador2 obtuvo" << dadojugador2 << endl<<endl;
        } else {
            cout << "jugador2"<<endl<< "Decidio no lanzar su dado esta ronda." << endl<<endl;
            dadojugador2 = 0;
        }

        if (dadojugador1 > dadojugador2) {
            cout << "jugador1" <<endl<< " gana esta ronda." << endl<<endl;
            puntosJugador1++;
        } else if (dadojugador2 > dadojugador1) {
            cout << "jugador2"<<endl<< " gana esta ronda." << endl<<endl;
            puntosJugador2++;
        } else {
            cout << " Esta ronda termino en empate." << endl<<endl;
        }
        cout << "RESULTADOS:"<<endl;
        cout << "jugador1: "<< puntosJugador1 << " puntos" << endl;
        cout << "jugador2: "<< puntosJugador2 << " puntos" << endl<<endl;

        if (puntosJugador1 == 3) {
            cout << "¡Felicidades!" << "jugador1"<< " ¡Ganaste!" << endl<<endl;
            break;
        } else if (puntosJugador2 == 3) {
            cout << "¡Felicidades! " << "jugador2" << "¡Ganaste!" << endl<<endl;
            break;
        }
    }
    cout << "Es fue divertido, esperemos qeu lo hayas pasado genial" << endl;
    return 0;
}

