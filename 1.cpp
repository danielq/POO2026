/**
 * Programa: Hola y suma
 * Descripción: Muestra un saludo y suma dos números.
 * Librerías: iostream (entrada/salida)
 */

 #include <iostream>  // cin, cout, endl

 int main() {
     // --- Datos de entrada ---
     int a = 0;
     int b = 0;
 
     std::cout << "Ingresa dos numeros: ";
     std::cin >> a >> b;
 
     // --- Proceso ---
     int suma = a + b;
 
     // --- Salida ---
     std::cout << "La suma es: " << suma << std::endl;
 
     return 0;  // 0 = ejecución correcta
 }