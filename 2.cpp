/**
 * Programa: Operaciones básicas con dos números
 * Descripción: Lee dos números y muestra suma, resta, producto y división.
 *              Comprueba división por cero antes de dividir.
 *
 * Librerías:
 *   - iostream: entrada/salida (cin, cout, endl)
 */

 #include <iostream>

 int main() {
     // --- Declaración de variables (datos) ---
     double numero1 = 0.0;
     double numero2 = 0.0;
 
     // --- Entrada ---
     std::cout << "Ingresa el primer numero: ";
     std::cin >> numero1;
 
     std::cout << "Ingresa el segundo numero: ";
     std::cin >> numero2;
 
     // --- Cálculos y salida ---
     std::cout << "\n--- Resultados ---\n";
 
     double suma = numero1 + numero2;
     std::cout << "Suma:        " << numero1 << " + " << numero2 << " = " << suma << std::endl;
 
     double resta = numero1 - numero2;
     std::cout << "Resta:       " << numero1 << " - " << numero2 << " = " << resta << std::endl;
 
     double producto = numero1 * numero2;
     std::cout << "Producto:    " << numero1 << " * " << numero2 << " = " << producto << std::endl;
 
     // Buena práctica: comprobar división por cero
     if (numero2 != 0.0) {
         double division = numero1 / numero2;
         std::cout << "Division:    " << numero1 << " / " << numero2 << " = " << division << std::endl;
     } else {
         std::cout << "Division:    No se puede dividir entre cero." << std::endl;
     }
 
     std::cout << "\n";
     return 0;
 }