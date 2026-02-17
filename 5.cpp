/**
 * Ejercicio 2: Suma, resta, producto y división
 * Librerías: iostream
 * Tipos: double (números con decimales)
 * Buena práctica: comprobar división por cero
 */

 #include <iostream>

 int main() {
     const double CERO = 0.0;  // Constante para comparar (evita "magic number")
 
     double a = 0.0, b = 0.0;
     std::cout << "Primer numero: ";
     std::cin >> a;
     std::cout << "Segundo numero: ";
     std::cin >> b;
 
     std::cout << "Suma:     " << (a + b) << "\n";
     std::cout << "Resta:    " << (a - b) << "\n";
     std::cout << "Producto: " << (a * b) << "\n";
 
     if (b != CERO) {
         std::cout << "Division: " << (a / b) << "\n";
     } else {
         std::cout << "Division: no definida (divisor cero).\n";
     }
     return 0;
 }