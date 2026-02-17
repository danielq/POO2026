/**
 * Programa: Conversión de unidades
 * Descripción: Convierte kilómetros a millas y Celsius a Fahrenheit
 *              usando constantes para los factores de conversión.
 *
 * Librerías:
 *   - iostream: entrada/salida (cin, cout, endl)
 *   - iomanip:  formateo (fixed, setprecision)
 */

 #include <iostream>
 #include <iomanip>
 
 int main() {
     // --- CONSTANTES (evitan números mágicos) ---
     const double KM_A_MILLAS = 0.621371;     // 1 km = 0.621371 millas
     const double METROS_A_PIES = 3.28084;    // 1 m = 3.28084 pies
     const double CELSIUS_A_FAHRENHEIT_FACTOR = 1.8;  // Factor 9/5
     const double CELSIUS_A_FAHRENHEIT_DESPLAZAMIENTO = 32.0;
     const int DECIMALES = 2;
 
     double valorEntrada = 0.0;
 
     std::cout << std::fixed << std::setprecision(DECIMALES);
 
     // --- Conversión de longitud (km → millas) ---
     std::cout << "Ingresa distancia en kilometros: ";
     std::cin >> valorEntrada;
 
     double millas = valorEntrada * KM_A_MILLAS;
     std::cout << valorEntrada << " km = " << millas << " millas\n\n";
 
     // --- Conversión de longitud (metros → pies) ---
     std::cout << "Ingresa distancia en metros: ";
     std::cin >> valorEntrada;
 
     double pies = valorEntrada * METROS_A_PIES;
     std::cout << valorEntrada << " m = " << pies << " pies\n\n";
 
     // --- Conversión de temperatura (Celsius → Fahrenheit) ---
     std::cout << "Ingresa temperatura en Celsius: ";
     std::cin >> valorEntrada;
 
     double fahrenheit = valorEntrada * CELSIUS_A_FAHRENHEIT_FACTOR + CELSIUS_A_FAHRENHEIT_DESPLAZAMIENTO;
     std::cout << valorEntrada << " °C = " << fahrenheit << " °F\n";
 
     return 0;
 }