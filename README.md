1. Librerías estándar más usadas
   
<img width="666" height="257" alt="Captura de pantalla 2026-02-16 a la(s) 8 10 40 p m" src="https://github.com/user-attachments/assets/994d755f-2195-48b8-9520-0b5433e9f0c6" />

2. Tipos de datos básicos
   
<img width="632" height="250" alt="Captura de pantalla 2026-02-16 a la(s) 8 11 45 p m" src="https://github.com/user-attachments/assets/d052e884-4e4b-41fd-b400-86ea70c8ea0a" />

4. Buenas prácticas de codificación en C++
   Nombres claros
   Variables: nombreUsuario, edad, totalVentas.
   Constantes: MAX_INTENTOS, PI.
   Funciones: verbos o descripción clara, p. ej. calcularPromedio, esValido.
   Constantes en lugar de “números mágicos”
      const int MAX_INTENTOS = 3;
      const double IVA = 0.19;

Comentarios útiles
Encabezado del archivo/programa: qué hace y qué librerías usa.
Bloques complejos: explicar el “por qué”, no solo el “qué”.
Una responsabilidad por función
Funciones cortas que hacen una sola cosa y tienen un nombre que lo refleja.
Manejo de entrada
Comprobar que cin leyó bien (por ejemplo con if (std::cin >> x)) antes de usar x.
Espaciado y formato
Indentación consistente (p. ej. 4 espacios).
Espacios alrededor de operadores: a + b, x = 5;.
using namespace std
En ejercicios pequeños está bien; en proyectos más grandes suele preferirse std:: explícito para evitar conflictos de nombres.

<img width="621" height="175" alt="Captura de pantalla 2026-02-16 a la(s) 8 17 34 p m" src="https://github.com/user-attachments/assets/453c0492-cd7d-44b3-aa44-9765cf773343" />

