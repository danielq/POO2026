/**
 * Programa: Precio final con IVA y descuento
 * Descripción: Calcula el precio final usando constantes para
 *              IVA y porcentaje de descuento (evita "números mágicos").
 *
 * Librerías:
 *   - iostream: entrada/salida (cin, cout, endl)
 */

 #include <iostream>

 int main() {
     // --- CONSTANTES (en lugar de números mágicos) ---
     const double IVA_PORCENTAJE = 0.19;      // 19% IVA
     const double DESCUENTO_PORCENTAJE = 0.10; // 10% descuento por cantidad
     const int CANTIDAD_MINIMA_DESCUENTO = 5;  // A partir de 5 unidades hay descuento
     const int DECIMALES_PRECIO = 2;           // Cantidad de decimales al mostrar precio
 
     // --- Variables ---
     double precioUnitario = 0.0;
     int cantidad = 0;
 
     // --- Entrada ---
     std::cout << "Precio unitario del producto: ";
     std::cin >> precioUnitario;
 
     std::cout << "Cantidad a llevar: ";
     std::cin >> cantidad;
 
     // --- Cálculos usando las constantes ---
     double subtotal = precioUnitario * cantidad;
 
     double descuento = 0.0;
     if (cantidad >= CANTIDAD_MINIMA_DESCUENTO) {
         descuento = subtotal * DESCUENTO_PORCENTAJE;
     }
 
     double totalSinIva = subtotal - descuento;
     double montoIva = totalSinIva * IVA_PORCENTAJE;
     double totalFinal = totalSinIva + montoIva;
 
     // --- Salida ---
     std::cout.precision(DECIMALES_PRECIO);
     std::cout << std::fixed;
 
     std::cout << "\n--- Detalle ---\n";
     std::cout << "Subtotal:      " << subtotal << "\n";
     std::cout << "Descuento (" << (DESCUENTO_PORCENTAJE * 100) << "%): " << descuento << "\n";
     std::cout << "Sin IVA:       " << totalSinIva << "\n";
     std::cout << "IVA (" << (IVA_PORCENTAJE * 100) << "%):     " << montoIva << "\n";
     std::cout << "Total final:   " << totalFinal << "\n";
 
     return 0;
 }