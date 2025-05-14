#include <iostream>
using namespace std;
int main()
{
    int edad, opcion, saldo = 1000, estudiante, profesional;
    float laptop, tablet, cromebook, resto, sobrante, estacionTrabajo, laptopAvanzada, tabletPro;

    cout << "Digita tu edad por favor" << endl;
    cin >> edad;
    if (edad < 16)
    {
        cout << "Lo lamento mucho, no tienes edad para la compra" << endl;
        return 0;
    }
    else
    {
        cout << "----Seleccione que tipo de usuario es ----" << endl;
        cout << "1. Estudiante " << endl;
        cout << "2. Profesional" << endl;
        cout << "3. Ver todos" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Como estudiante tienes los siguientes productos" << endl;
            cout << "1. Laptop basica   $900 " << endl;
            cout << "2. Tablet estudiantil          $600 " << endl;
            cout << "3. Chromebook      $700 " << endl;
            cin >> estudiante;

            switch (estudiante)
            {
            case 1:
                cout << "Por ser estudiante tienes un descuento del 20%" << endl;
                laptop = 900 - 180;
                cout << "El precio final de la laptop es de " << laptop << endl;
                if (saldo > laptop)
                {
                    sobrante = saldo - laptop;
                    cout << "Compraste exitosamente una laptop basica, tu saldo sobrante es " << sobrante << endl;
                }
                else
                {
                    resto = laptop - saldo;
                    cout << "No te alncanza para comprar una laptop basica es, te falta " << resto << endl;
                }
                break;

            case 2:
                cout << "Por ser estudiante tienes un descuento del 20%" << endl;
                tablet = 600 - 120;
                cout << "El precio final de la tablet estudiantil es de " << tablet << endl;
                if (saldo > tablet)
                {
                    sobrante = saldo - tablet;
                    cout << "Compraste exitosamente una tablet estudiantil, tu saldo sobrante es " << sobrante << endl;
                }
                else
                {
                    resto = tablet - saldo;
                    cout << "No te alncanza para comprar la tablet estudiantil, te faltan " << resto << endl;
                }
                break;

            case 3:
                cout << "Por ser estudiante tienes un descuento del 20%" << endl;
                cromebook = 700 - 140;
                cout << "El precio final del chromebook es de " << cromebook << endl;
                if (saldo > cromebook)
                {
                    sobrante = saldo - cromebook;
                    cout << "Compraste exitosamente una Chromebook, tu saldo sobrante es " << sobrante << endl;
                }
                else
                {
                    resto = cromebook - saldo;
                    cout << "No te alncanza para comprar un Chromebook, te faltan " << resto << endl;
                }
                break;
            default:
                cout << "Digite una opcion valida por favor" << endl;
            }
            return 0;
        case 2:
            cout << "Como profesional tienes los siguientes productos" << endl;
            cout << "1. Laptop avanzada       $1500 " << endl;
            cout << "2. Tablet Pro            $1200 " << endl;
            cout << "3. Estacion de trabajo   $2000 " << endl;
            cin >> profesional;

            switch (profesional)
            {
            case 1:
                cout << "Por ser profesional tienes un descuento del 10%" << endl;
                laptopAvanzada = 1500 - 150;
                cout << "El precio final de la laptop avanzada es de " << laptopAvanzada << endl;
                if (saldo > laptopAvanzada)
                {
                    sobrante = saldo - laptopAvanzada;
                    cout << "Compraste exitosamente una laptop avanzada, tu saldo sobrante es " << sobrante << endl;
                }
                else
                {
                    resto = laptop - saldo;
                    cout << "No te alncanza para comprar una laptop avanzada, te faltan " << resto << endl;
                }
                break;

            case 2:
                cout << "Por ser profesional tienes un descuento del 10%" << endl;
                tabletPro = 1200 - 120;
                cout << "El precio final de la tablet pro es de " << tabletPro << endl;
                if (saldo > tabletPro)
                {
                    sobrante = saldo - tabletPro;
                    cout << "Compraste exitosamente una tablet Pro, tu saldo sobrante es " << sobrante << endl;
                }
                else
                {
                    resto = tabletPro - saldo;
                    cout << "No te alncanza para comprar una tablet Pro, te faltan " << resto << endl;
                }
                break;

            case 3:
                cout << "Por ser profesional tienes un descuento del 10%" << endl;
                estacionTrabajo = 2000 - 200;
                cout << "El precio final de la estacion de trabajo es de " << estacionTrabajo << endl;
                if (saldo > estacionTrabajo)
                {
                    sobrante = saldo - estacionTrabajo;
                    cout << "Compraste exitosamente una estacion de trabajo, tu saldo sobrante es " << sobrante << endl;
                }
                else
                {
                    resto = estacionTrabajo - saldo;
                    cout << "No te alncanza para comprar una estacion de trabajo, te faltan " << resto << endl;
                }
                break;
            default:
                cout << "Digite una opcion valida por favor" << endl;
            }
            return 0;

        case 3:
            cout << "Como estudiante tienes los siguientes productos" << endl;
            cout << "1. Laptop basica   $900 " << endl;
            cout << "2. Tablet          $600 " << endl;
            cout << "3. Chromebook      $700 " << endl;
            cout << endl;
            cout << "Como profesional tienes los siguientes productos" << endl;
            cout << "1. Laptop avanzada   $1500 " << endl;
            cout << "2. Tablet            $1200 " << endl;
            cout << "3. Chromebook        $2000 " << endl;
            break;
        default:
            cout << "Digite una opcion valida por favor" << endl;
        }
    }
}