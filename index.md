<div align="center">

# Programación Estructurada en C

**Universidad de Guadalajara · Ciclo 2026**

---

| | |
|:---|:---|
| **Estudiante** | Dinora Marlen Rocha Perez |
| **Código** | 222583328 |
| **Sección** | D04 |
| **Profesor** | Jorge Ernesto Lopez Arce Delgado |

---

![C](https://img.shields.io/badge/Lenguaje-C-blue?style=flat-square&logo=c)
![Actividades](https://img.shields.io/badge/Actividades-12-green?style=flat-square)
![UDG](https://img.shields.io/badge/Universidad-UDG-red?style=flat-square)
![Sección](https://img.shields.io/badge/Sección-D04-orange?style=flat-square)

</div>

---

## Índice

| # | Actividad | Temas |
|:-:|:----------|:------|
| [01](#-actividad-01--tipos-de-datos) | Tipos de datos | `int` `float` `char` `sizeof` `&` |
| [02](#-actividad-02--operadores) | Operadores | `aritméticos` `lógicos` `ternario` `++` `--` |
| [03](#-actividad-03--condicionales) | Condicionales | `if/else` `anidado` `módulo` `primos` |
| [04](#-actividad-04--ciclos-y-bucles) | Ciclos y Bucles | `for` `while` `do-while` `acumuladores` |
| [05](#-actividad-05--arreglos--vectores) | Arreglos / Vectores | `arrays 1D` `VLA` `puntero base` |
| [06](#-actividad-06--matrices) | Matrices | `arrays 2D` `fgets` `fprintf` |
| [07](#-actividad-07--cadenas-de-caracteres) | Cadenas de caracteres | `string.h` `strlen` `strcpy` `strcmp` |
| [08](#-actividad-08--funciones) | Funciones | `void` `paso por valor` `paso por referencia` |
| [09](#-actividad-09--punteros) | Punteros | `struct` `->` `padding` `union` |
| [10](#-actividad-10--memoria-dinámica) | Memoria Dinámica | `struct` `union` `arreglos de structs` |
| [11](#-actividad-11--estructuras-y-uniones) | Estructuras y Uniones | `struct` `union` `typedef` `BaseDatos` |
| [12](#-actividad-12--manejo-de-archivos) | Manejo de Archivos | `FILE *` `fopen` `fclose` `fprintf` |

---

## 📦 Actividad 01 — Tipos de datos

> El programa está diseñado como un experimento práctico para observar la gestión de memoria en bajo nivel que realiza el compilador y el sistema operativo. Se puede analizar cómo se segmenta la memoria RAM y cómo se comportan los diferentes tipos de datos primitivos.
>
> El flujo inicia con la reserva de espacio en el *stack*. Los `char` ocupan 1 byte, los enteros (`short`, `int`, `long`, `long long`) escalan de 16 a 64 bits, y los tipos de punto flotante reservan espacios mayores divididos internamente para mantisa y exponente. La parte central radica en el operador `&`, que extrae la dirección física de cada variable, permitiendo observar cómo la memoria se llena de forma contigua con saltos exactos según el tipo de dato.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | Tipo de datos y direccion de memoria | [Ver](./Actividad_01-Tipos_de_datos/Sources/Tipo%20de%20datos%20y%20direccion%20de%20memoria.c) |
| `.pdf` | Tarea 1 P.E. Tipos de Datos | [Ver](./Actividad_01-Tipos_de_datos/Documentacion/Tarea%201%20P.E.%20Tipos%20de%20Datos.pdf) |
| `.jpeg` | Evidencia de captura 1 | [Ver](./Actividad_01-Tipos_de_datos/Documentacion/WhatsApp%20Image%202026-05-22%20at%201.44.16%20PM.jpeg) |
| `.jpeg` | Evidencia de captura 2 | [Ver](./Actividad_01-Tipos_de_datos/Documentacion/WhatsApp%20Image%202026-05-22%20at%201.44.25%20PM.jpeg) |
| `.jpeg` | Evidencia de captura 3 | [Ver](./Actividad_01-Tipos_de_datos/Documentacion/WhatsApp%20Image%202026-05-22%20at%201.44.41%20PM.jpeg) |

---

## 📦 Actividad 02 — Operadores

> Suite de pruebas para evaluar el comportamiento, la precedencia y la evaluación interna de los diferentes tipos de operadores en C. Se analiza cómo el compilador resuelve desde operaciones matemáticas básicas hasta lógica booleana, manipulación de bits y asignaciones complejas.
>
> Se cubren los operadores aritméticos con jerarquía de precedencia; los relacionales que retornan `1` o `0`; los lógicos `&&` y `||` con comportamiento de cortocircuito; el ternario `?:` como alternativa al `if-else`; y la diferencia crítica entre pre-incremento (`++E`) y post-incremento (`E++`).

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | errores_corregidos | [Ver](./Actividad_02-Operadores/Sources/errores_corregidos.c) |
| `.c` | operadores | [Ver](./Actividad_02-Operadores/Sources/operadores.c) |
| `.jpeg` | Ejercicios de operadores corregidos | [Ver](./Actividad_02-Operadores/Documentacion/Ejercicios%20de%20operadores%20corregidos.jpeg) |

---

## 📦 Actividad 03 — Condicionales

> Serie de módulos progresivos para explorar las estructuras de control de flujo en C. Se analiza cómo el procesador toma decisiones en tiempo de ejecución basándose en condiciones lógicas simples, condiciones anidadas y ciclos iterativos.
>
> Los módulos abarcan: validación de rangos con bifurcaciones simples, evaluación de criterios múltiples con operadores lógicos, anidamiento condicional para múltiples niveles de prioridad, clasificación de paridad mediante el operador módulo, y detección de números primos combinando banderas de estado con ciclos de parada temprana.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | codigo1_edad | [Ver](./Actividad_03-Condicionales/Sources/codigo1_edad.c) |
| `.c` | codigo2_beca | [Ver](./Actividad_03-Condicionales/Sources/codigo2_beca.c) |
| `.c` | codigo3_beca_anidado | [Ver](./Actividad_03-Condicionales/Sources/codigo3_beca_anidado.c) |
| `.c` | codigo4_par_impar | [Ver](./Actividad_03-Condicionales/Sources/codigo4_par_impar.c) |
| `.c` | codigo5_primo | [Ver](./Actividad_03-Condicionales/Sources/codigo5_primo.c) |
| `.c` | codigo6_par_impar_primo | [Ver](./Actividad_03-Condicionales/Sources/codigo6_par_impar_primo.c) |
| `.png` | Captura 1 | [Ver](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2018-57-57.png) |
| `.png` | Captura 2 | [Ver](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2018-58-55.png) |
| `.png` | Captura 3 | [Ver](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2018-59-34.png) |
| `.png` | Captura 4 | [Ver](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-00-09.png) |
| `.png` | Captura 5 | [Ver](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-00-40.png) |
| `.png` | Captura 6 | [Ver](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-01-12.png) |

---

## 📦 Actividad 04 — Ciclos y Bucles

> Esta sección aborda las tres estructuras de repetición fundamentales en C: `for` (controlado por contador), `while` (condición previa) y `do-while` (condición posterior).
>
> El `for` procesa flujos de datos acumulando valores. El `while` usa valores centinela para detenerse cuando el usuario decide terminar. El `do-while` garantiza al menos una ejecución, ideal para menús interactivos. Los módulos avanzados combinan ciclos anidados con filtros de validación y cálculo de promedios y porcentajes al finalizar.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | CALCULAR PROMEDIO | [Ver](./Actividad_04-Ciclos/Sources/CALCULAR%20PROMEDIO%20.c) |
| `.c` | EJEMPLO DO WHILE | [Ver](./Actividad_04-Ciclos/Sources/EJEMPLO%20DO%20WHILE.c) |
| `.c` | ejemplo for | [Ver](./Actividad_04-Ciclos/Sources/ejemplo%20for.c) |
| `.c` | main (1) | [Ver](./Actividad_04-Ciclos/Sources/main%20(1).c) |
| `.pdf` | Actividad Estructuras Ciclicas | [Ver](./Actividad_04-Ciclos/Documentacion/ACTIVIDAD%20ESTRUCTURAS%20CICLICAS%20PROGRAMACION%20ESTRUCTURADA%20(1).pdf) |
| `.jpeg` | Captura 1 | [Ver](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.50.24%20PM.jpeg) |
| `.jpeg` | Captura 2 | [Ver](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.51.03%20PM.jpeg) |
| `.jpeg` | Captura 3 | [Ver](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.51.12%20PM.jpeg) |
| `.jpeg` | Captura 4 | [Ver](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.51.22%20PM.jpeg) |

---

## 📦 Actividad 05 — Arreglos / Vectores

> Estudio de arreglos unidimensionales en C. El nombre del arreglo actúa como un puntero constante al primer elemento, por lo que no requiere el operador `&` al imprimir su dirección. El compilador reserva un bloque físico ininterrumpido en RAM con saltos exactos entre elementos según el tipo de dato.
>
> Los módulos avanzados introducen los Arreglos de Longitud Variable (VLA), donde el tamaño se define en tiempo de ejecución a partir de un valor ingresado por el usuario, y se recorren con ciclos que usan el índice como desplazador desde el puntero base.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | Arreglos_2 | [Ver](./Actividad_05-Arreglos/Sources/Arreglos_2.c) |
| `.c` | arreglos1 | [Ver](./Actividad_05-Arreglos/Sources/arreglos1.c) |
| `.pdf` | Actividad 4 Programacion Estructurada | [Ver](./Actividad_05-Arreglos/Documentacion/ACTIVIDAD%204PROGRAMACION%20ESTRUCTURADA.pdf) |
| `.md` | Notas arreglos01 | [Ver](./Actividad_05-Arreglos/Documentacion/Notas%20arreglos01.md) |
| `.txt` | notas arreglos02 | [Ver](./Actividad_05-Arreglos/Documentacion/notas%20arreglos02%20md.txt) |

---

## 📦 Actividad 06 — Matrices

> Introduce el manejo de matrices (arreglos bidimensionales) y la persistencia mediante archivos. Internamente, C organiza las matrices como una tira lineal contigua de bytes (almacenamiento por filas). Para recorrerlas se usan bucles anidados: el externo indexa filas y el interno columnas.
>
> El programa demuestra cómo limpiar el búfer de entrada con `while(getchar() != '\n')` y capturar texto con espacios usando `fgets`. La fase final escribe la matriz en `resultado.txt` usando `fprintf`, valida el puntero con `NULL` antes de escribir, y cierra el canal con `fclose` para vaciar la caché y liberar el descriptor del sistema operativo.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | Tablero_Archivo | [Ver](./Actividad_06-Matrices/Sources/Tablero_Archivo.c) |
| `.png` | Captura de pantalla | [Ver](./Actividad_06-Matrices/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-03-25.png) |

---

## 📦 Actividad 07 — Cadenas de caracteres

> Estudio de cadenas de caracteres (arreglos `char`) usando la librería estándar `string.h`. Se comprende cómo el procesador almacena texto en memoria, gestiona el terminador nulo `\0` y aplica operaciones de lectura, medición, copia, unión y comparación.
>
> Se evalúan: lectura con `scanf` (limitada por espacios) vs `fgets` (líneas completas); eliminación del salto de línea con `strcspn`; matrices bidimensionales de cadenas; cálculo de longitud con `strlen`; copia y concatenación con `strcpy` y `strcat`; comparación byte a byte con `strcmp`; y búsqueda de caracteres con `strchr`.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | BATTLESHIP | [Ver](./Actividad_07-Cadenas/Sources/BATTLESHIP.c) |
| `.c` | Menu_Cadenas | [Ver](./Actividad_07-Cadenas/Sources/Menu_Cadenas.c) |
| `.pdf` | Actividad 4 Programacion Estructurada | [Ver](./Actividad_07-Cadenas/Documentacion/ACTIVIDAD%204PROGRAMACION%20ESTRUCTURADA%20(1).pdf) |
| `.pdf` | BATTLESHIP | [Ver](./Actividad_07-Cadenas/Documentacion/BATTLESHIP%20.pdf) |
| `.jpeg` | Captura 1 | [Ver](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.08%20PM.jpeg) |
| `.jpeg` | Captura 2 | [Ver](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.18%20PM.jpeg) |
| `.jpeg` | Captura 3 | [Ver](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.36%20PM.jpeg) |
| `.jpeg` | Captura 4 | [Ver](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.54%20PM.jpeg) |

---

## 📦 Actividad 08 — Funciones

> Módulo que aborda los pilares de la programación estructurada en C mediante funciones. Se analiza cómo el procesador segmenta algoritmos complejos en bloques lógicos independientes y reutilizables, y cómo gestiona la pila de llamadas (*call stack*).
>
> Se demuestra la diferencia entre funciones con retorno definido y procedimientos `void`. La sección más crítica contrasta el paso por valor (la variable original queda intacta) con el paso por referencia mediante punteros (la función modifica directamente la variable original). Al escalar a arreglos, C siempre pasa por referencia implícitamente, y para matrices bidimensionales el compilador necesita conocer el número de columnas para calcular los saltos de memoria.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | main (1) | [Ver](./Actividad_08-Funciones/Sources/main%20(1).c) |
| `.pdf` | Funciones + Archivos | [Ver](./Actividad_08-Funciones/Documentacion/Funciones%20+%20Archivos.pdf) |

---

## 📦 Actividad 09 — Punteros

> Módulo enfocado en tipos de datos compuestos definidos por el usuario mediante `struct`. Se comprende cómo el procesador agrupa variables de diferentes tipos primitivos bajo una misma entidad y cómo se organiza el mapa de memoria para colecciones de registros.
>
> A nivel de hardware, un `struct` asigna un bloque secuencial donde los miembros se colocan en el orden declarado; el tamaño total puede ser mayor por el fenómeno de *padding* (alineación de memoria). Se contrasta con las `union`, donde todos los campos comparten la misma dirección y solo uno puede estar activo a la vez. El programa demuestra paso por referencia con `->` para modificar registros, y paso por valor con `.` para lectura segura.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | Punteros_MemoriaDinamica | [Ver](./Actividad_09-Punteros/Sources/Punteros_MemoriaDinamica.c) |
| `.png` | Captura 1 | [Ver](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-31-24.png) |
| `.png` | Captura 2 | [Ver](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-32-45.png) |
| `.png` | Captura 3 | [Ver](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-33-15.png) |
| `.png` | Captura 4 | [Ver](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-39-38.png) |
| `.png` | Captura 5 | [Ver](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-41-14.png) |

---

## 📦 Actividad 10 — Memoria Dinámica

> Profundiza en el estudio de tipos de datos compuestos (`struct`) y su gestión en memoria dinámica. El enfoque cubre la agrupación de variables heterogéneas, el *padding*, arreglos de estructuras, y la diferencia fundamental entre `struct` (almacenamiento simultáneo) y `union` (almacenamiento solapado).
>
> El programa evalúa la transferencia de estructuras a funciones por referencia usando `->` para modificación directa, y por valor usando `.` para lectura protegida. La fase de persistencia escribe en archivo con `fprintf`, usando operadores ternarios para traducir banderas numéricas a texto legible, con columnas alineadas mediante modificadores de ancho de campo.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | Punteros_MemoriaDinamica | [Ver](./Actividad_10-Memoria_Dinamica/Sources/Punteros_MemoriaDinamica.c) |
| `.png` | Captura 1 | [Ver](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-31-24.png) |
| `.png` | Captura 2 | [Ver](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-32-45.png) |
| `.png` | Captura 3 | [Ver](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-33-15.png) |
| `.png` | Captura 4 | [Ver](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-39-38.png) |
| `.png` | Captura 5 | [Ver](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-41-14.png) |

---

## 📦 Actividad 11 — Estructuras y Uniones

> Implementa `struct` para modelar una base de datos de alumnos, demostrando cómo cohesionar cadenas de caracteres, flotantes y banderas lógicas bajo una misma entidad. Se analiza el *padding*, el arreglo de estructuras en el *stack*, y la diferencia con `union` para sistemas con memoria limitada.
>
> El programa gestiona la colección completa con funciones que reciben punteros (`->`) para captura directa y copias por valor (`.`) para visualización protegida. La fase final persiste los registros en archivo con columnas alineadas en `fprintf`, y traduce banderas numéricas a texto legible con operadores ternarios en línea.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | BaseDatos_Alumnos | [Ver](./Actividad_11-Struct_y_Union/Sources/BaseDatos_Alumnos.c) |
| `.txt` | alumnos | [Ver](./Actividad_11-Struct_y_Union/Documentacion/alumnos.txt) |
| `.png` | Captura 1 | [Ver](./Actividad_11-Struct_y_Union/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-54-16.png) |
| `.png` | Captura 2 | [Ver](./Actividad_11-Struct_y_Union/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-56-00.png) |
| `.png` | Captura 3 | [Ver](./Actividad_11-Struct_y_Union/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-56-10.png) |

---

## 📦 Actividad 12 — Manejo de Archivos

> El manejo de archivos en C permite romper el ciclo de vida volátil de las variables en RAM, transfiriendo la información hacia el almacenamiento secundario. Toda interacción se gestiona a través de un puntero `FILE *` que administra internamente la posición del cursor, indicadores de error y el búfer intermedio.
>
> Los modos de acceso cubren escritura exclusiva `"w"` (crea o sobrescribe), lectura `"r"` y añadidura `"a"` (agrega al final sin destruir datos). Antes de cualquier operación, el programa valida que el puntero no sea `NULL` para prevenir fallos de segmentación. La escritura usa `fprintf`, la lectura usa `fgets`, y al finalizar `fclose` vacía la caché y libera el descriptor de archivo.

| Tipo | Archivo | Enlace |
|:----:|:--------|:------:|
| `.c` | main | [Ver](./Actividad_12-Archivos/Sources/main.c) |
| `.pdf` | Funciones + Archivos | [Ver](./Actividad_12-Archivos/Documentacion/Funciones%20+%20Archivos.pdf) |
| `.txt` | resultado | [Ver](./Actividad_12-Archivos/Documentacion/resultado.txt) |
| `.png` | Captura de pantalla | [Ver](./Actividad_12-Archivos/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2022-29-51.png) |

---

<div align="center">

Dinora Marlen Rocha Perez · 222583328 · Sección D04 · [GitHub](https://github.com/dinorarocha8332-byte/Programacion-estructurada)

</div>
