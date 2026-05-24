<div align="center">

# Programación Estructurada en C

**Universidad de Guadalajara** · *Centro Universitario de Ciencias Exactas e Ingenierías*
**Ciclo Escolar: 2026**

[![Lenguaje - C](https://img.shields.io/badge/Lenguaje-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Actividades](https://img.shields.io/badge/Actividades-12-success?style=for-the-badge)](https://github.com/dinorarocha8332-byte/Programacion-estructurada)
[![Sección](https://img.shields.io/badge/Sección-D04-orange?style=for-the-badge)](https://github.com/dinorarocha8332-byte/Programacion-estructurada)

</div>

---

## Información del Estudiante

<div align="center">

| Campo | Detalle |
| :--- | :--- |
| **Estudiante** | Dinora Marlen Rocha Perez |
| **Código Universitario** | 222583328 |
| **Sección** | D04 |
| **Profesor** | Jorge Ernesto Lopez Arce Delgado |

</div>

---

## Tecnologías y Conceptos Clave

<div align="center">
  <img src="https://img.shields.io/badge/Compilador-GCC-007ACC?style=flat-square&logo=gnu" alt="GCC">
  <img src="https://img.shields.io/badge/Entorno-Linux%20/%20Windows-20232A?style=flat-square&logo=linux" alt="OS">
  <img src="https://img.shields.io/badge/Gestión%20de%20Memoria-Stack%20%26%20Heap-AA22AA?style=flat-square" alt="Memory">
  <img src="https://img.shields.io/badge/Paradigma-Estructurado-FF5533?style=flat-square" alt="Paradigm">
</div>

---

## Índice de Actividades

| # | Actividad | Temas Principales | Enlace Directo |
| :-: | :--- | :--- | :-: |
| **01** | Tipos de datos | int, float, char, sizeof, & | [Ir a Sección](#actividad-01--tipos-de-datos) |
| **02** | Operadores | aritméticos, lógicos, ternario, ++, -- | [Ir a Sección](#actividad-02--operadores) |
| **03** | Condicionales | if/else, anidado, módulo, primos | [Ir a Sección](#actividad-03--condicionales) |
| **04** | Ciclos y Bucles | for, while, do-while, acumuladores | [Ir a Sección](#actividad-04--ciclos-y-bucles) |
| **05** | Arreglos / Vectores | arrays 1D, VLA, puntero base | [Ir a Sección](#actividad-05--arreglos--vectores) |
| **06** | Matrices | arrays 2D, fgets, fprintf | [Ir a Sección](#actividad-06--matrices) |
| **07** | Cadenas de caracteres | string.h, strlen, strcpy, strcmp | [Ir a Sección](#actividad-07--cadenas-de-caracteres) |
| **08** | Funciones | void, paso por valor, paso por referencia | [Ir a Sección](#actividad-08--funciones) |
| **09** | Punteros | struct, ->, padding, union | [Ir a Sección](#actividad-09--punteros) |
| **10** | Memoria Dinámica | struct, union, arreglos de structs | [Ir a Sección](#actividad-10--memoria-dinámica) |
| **11** | Estructuras y Uniones | struct, union, typedef, BaseDatos | [Ir a Sección](#actividad-11--estructuras-y-uniones) |
| **12** | Manejo de Archivos | FILE *, fopen, fclose, fprintf | [Ir a Sección](#actividad-12--manejo-de-archivos) |

---

## Detalle de Contenidos por Actividad

### Actividad 01 — Tipos de datos

> El programa está diseñado como un experimento práctico para observar la gestión de memoria en bajo nivel que realiza el compilador y el sistema operativo. Se puede analizar cómo se segmenta la memoria RAM y cómo se comportan los diferentes tipos de datos primitivos.
>
> El flujo inicia con la reserva de espacio en el *stack*. Los `char` ocupan 1 byte, los enteros (`short`, `int`, `long`, `long long`) escalan de 16 a 64 bits, y los tipos de punto flotante reservan espacios mayores divididos internamente para mantisa y exponente. La parte central radica en el operador `&`, que extrae la dirección física de cada variable, permitiendo observar cómo la memoria se llena de forma contigua con saltos exactos según el tipo de dato.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | Tipo de datos y direccion de memoria | [Ver Código](./Actividad_01-Tipos_de_datos/Sources/Tipo%20de%20datos%20y%20direccion%20de%20memoria.c) |
| PDF | Tarea 1 P.E. Tipos de Datos | [Ver Documento](./Actividad_01-Tipos_de_datos/Documentacion/Tarea%201%20P.E.%20Tipos%20de%20Datos.pdf) |
| Img | Evidencia de captura 1 | [Ver Captura](./Actividad_01-Tipos_de_datos/Documentacion/WhatsApp%20Image%202026-05-22%20at%201.44.16%20PM.jpeg) |
| Img | Evidencia de captura 2 | [Ver Captura](./Actividad_01-Tipos_de_datos/Documentacion/WhatsApp%20Image%202026-05-22%20at%201.44.25%20PM.jpeg) |
| Img | Evidencia de captura 3 | [Ver Captura](./Actividad_01-Tipos_de_datos/Documentacion/WhatsApp%20Image%202026-05-22%20at%201.44.41%20PM.jpeg) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 02 — Operadores

> Suite de pruebas para evaluar el comportamiento, la precedencia y la evaluación interna de los diferentes tipos de operadores en C. Se analiza cómo el compilador resuelve desde operaciones matemáticas básicas hasta lógica booleana, manipulación de bits y asignaciones complejas.
>
> Se cubren los operadores aritméticos con jerarquía de precedencia; los relacionales que retornan `1` o `0`; los lógicos `&&` y `||` con comportamiento de cortocircuito; el ternario `?:` como alternativa al `if-else`; y la diferencia crítica entre pre-incremento (`++E`) y post-incremento (`E++`).

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | errores_corregidos | [Ver Código](./Actividad_02-Operadores/Sources/errores_corregidos.c) |
| Code | operadores | [Ver Código](./Actividad_02-Operadores/Sources/operadores.c) |
| Img | Ejercicios de operadores corregidos | [Ver Captura](./Actividad_02-Operadores/Documentacion/Ejercicios%20de%20operadores%20corregidos.jpeg) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 03 — Condicionales

> Serie de módulos progresivos para explorar las estructuras de control de flujo en C. Se analiza cómo el procesador toma decisiones en tiempo de ejecución basándose en condiciones lógicas simples, condiciones anidadas y ciclos iterativos.
>
> Los módulos abarcan: validación de rangos con bifurcaciones simples, evaluación de criterios múltiples con operadores lógicos, anidamiento condicional para múltiples niveles de prioridad, clasificación de paridad mediante el operador módulo, y detección de números primos combinando banderas de estado con ciclos de parada temprana.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | codigo1_edad | [Ver Código](./Actividad_03-Condicionales/Sources/codigo1_edad.c) |
| Code | codigo2_beca | [Ver Código](./Actividad_03-Condicionales/Sources/codigo2_beca.c) |
| Code | codigo3_beca_anidado | [Ver Código](./Actividad_03-Condicionales/Sources/codigo3_beca_anidado.c) |
| Code | codigo4_par_impar | [Ver Código](./Actividad_03-Condicionales/Sources/codigo4_par_impar.c) |
| Code | codigo5_primo | [Ver Código](./Actividad_03-Condicionales/Sources/codigo5_primo.c) |
| Code | codigo6_par_impar_primo | [Ver Código](./Actividad_03-Condicionales/Sources/codigo6_par_impar_primo.c) |
| Img | Capturas de Pantalla (1 al 6) | [Captura 1](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2018-57-57.png) \| [Captura 2](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2018-58-55.png) \| [Captura 3](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2018-59-34.png) \| [Captura 4](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-00-09.png) \| [Captura 5](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-00-40.png) \| [Captura 6](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-01-12.png) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 04 — Ciclos y Bucles

> Esta sección aborda las tres estructuras de repetición fundamentales en C: `for` (controlado por contador), `while` (condición previa) y `do-while` (condición posterior).
>
> El `for` procesa flujos de datos acumulando valores. El `while` usa valores centinela para detenerse cuando el usuario decide terminar. El `do-while` garantiza al menos una ejecución, ideal para menús interactivos. Los módulos avanzados combinan ciclos anidados con filtros de validación y cálculo de promedios y porcentajes al finalizar.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | CALCULAR PROMEDIO | [Ver Código](./Actividad_04-Ciclos/Sources/CALCULAR%20PROMEDIO%20.c) |
| Code | EJEMPLO DO WHILE | [Ver Código](./Actividad_04-Ciclos/Sources/EJEMPLO%20DO%20WHILE.c) |
| Code | ejemplo for | [Ver Código](./Actividad_04-Ciclos/Sources/ejemplo%20for.c) |
| Code | main (1) | [Ver Código](./Actividad_04-Ciclos/Sources/main%20(1).c) |
| PDF | Actividad Estructuras Ciclicas | [Ver Documento](./Actividad_04-Ciclos/Documentacion/ACTIVIDAD%20ESTRUCTURAS%20CICLICAS%20PROGRAMACION%20ESTRUCTURADA%20(1).pdf) |
| Img | Capturas de Evidencia (1 al 4) | [Captura 1](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.50.24%20PM.jpeg) \| [Captura 2](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.51.03%20PM.jpeg) \| [Captura 3](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.51.12%20PM.jpeg) \| [Captura 4](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.51.22%20PM.jpeg) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 05 — Arreglos / Vectores

> Estudio de arreglos unidimensionales en C. El nombre del arreglo actúa como un puntero constante al primer elemento, por lo que no requiere el operador `&` al imprimir su dirección. El compilador reserva un bloque físico ininterrumpido en RAM con saltos exactos entre elementos según el tipo de dato.
>
> Los módulos avanzados introducen los Arreglos de Longitud Variable (VLA), donde el tamaño se define en tiempo de ejecución a partir de un valor ingresado por el usuario, y se recorren con ciclos que usan el índice como desplazador desde el puntero base.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | Arreglos_2 | [Ver Código](./Actividad_05-Arreglos/Sources/Arreglos_2.c) |
| Code | arreglos1 | [Ver Código](./Actividad_05-Arreglos/Sources/arreglos1.c) |
| PDF | Actividad 4 Programacion Estructurada | [Ver Documento](./Actividad_05-Arreglos/Documentacion/ACTIVIDAD%204PROGRAMACION%20ESTRUCTURADA.pdf) |
| Notas | Notas arreglos01 | [Ver Notas](./Actividad_05-Arreglos/Documentacion/Notas%20arreglos01.md) |
| Text | notas arreglos02 | [Ver Texto](./Actividad_05-Arreglos/Documentacion/notas%20arreglos02%20md.txt) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 06 — Matrices

> Introduce el manejo de matrices (arreglos bidimensionales) y la persistencia mediante archivos. Internamente, C organiza las matrices como una tira lineal contigua de bytes (almacenamiento por filas). Para recorrerlas se usan bucles anidados: el externo indexa filas y el interno columnas.
>
> El programa demuestra cómo limpiar el búfer de entrada con `while(getchar() != '\n')` y capturar texto con espacios usando `fgets`. La fase final escribe la matriz en `resultado.txt` usando `fprintf`, valida el puntero con `NULL` antes de escribir, y cierra el canal con `fclose` para vaciar la caché y liberar el descriptor del sistema operativo.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | Tablero_Archivo | [Ver Código](./Actividad_06-Matrices/Sources/Tablero_Archivo.c) |
| Img | Captura de pantalla | [Ver Captura](./Actividad_06-Matrices/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-03-25.png) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 07 — Cadenas de caracteres

> Estudio de cadenas de caracteres (arreglos `char`) usando la librería estándar `string.h`. Se comprende cómo el procesador almacena texto en memoria, gestiona el terminador nulo `\0` y aplica operaciones de lectura, medición, copia, unión y comparación.
>
> Se evalúan: lectura con `scanf` (limitada por espacios) vs `fgets` (líneas completas); eliminación del salto de línea con `strcspn`; matrices bidimensionales de cadenas; cálculo de longitud con `strlen`; copia y concatenación con `strcpy` y `strcat`; comparación byte a byte con `strcmp`; y búsqueda de caracteres con `strchr`.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | BATTLESHIP | [Ver Código](./Actividad_07-Cadenas/Sources/BATTLESHIP.c) |
| Code | Menu_Cadenas | [Ver Código](./Actividad_07-Cadenas/Sources/Menu_Cadenas.c) |
| PDF | Actividad 4 Programacion Estructurada | [Ver Documento](./Actividad_07-Cadenas/Documentacion/ACTIVIDAD%204PROGRAMACION%20ESTRUCTURADA%20(1).pdf) |
| PDF | BATTLESHIP Documento | [Ver Documento](./Actividad_07-Cadenas/Documentacion/BATTLESHIP%20.pdf) |
| Img | Capturas de Evidencia (1 al 4) | [Captura 1](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.08%20PM.jpeg) \| [Captura 2](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.18%20PM.jpeg) \| [Captura 3](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.36%20PM.jpeg) \| [Captura 4](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.54%20PM.jpeg) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 08 — Funciones

> Módulo que aborda los pilares de la programación estructurada en C mediante funciones. Se analiza cómo el procesador segmenta algoritmos complejos en bloques lógicos independientes y reutilizables, y cómo gestiona la pila de llamadas (*call stack*).
>
> Se demuestra la diferencia entre funciones con retorno definido y procedimientos `void`. La sección más crítica contrasta el paso por valor (la variable original queda intacta) con el paso por referencia mediante punteros (la función modifica directamente la variable original). Al escalar a arreglos, C siempre pasa por referencia implícitamente, y para matrices bidimensionales el compilador necesita conocer el número de columnas para calcular los saltos de memoria.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | main (1) | [Ver Código](./Actividad_08-Funciones/Sources/main%20(1).c) |
| PDF | Funciones + Archivos | [Ver Documento](./Actividad_08-Funciones/Documentacion/Funciones%20+%20Archivos.pdf) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 09 — Punteros

> Módulo enfocado en tipos de datos compuestos definidos por el usuario mediante `struct`. Se comprende cómo el procesador agrupa variables de diferentes tipos primitivos bajo una misma entidad y cómo se organiza el mapa de memoria para colecciones de registros.
>
> A nivel de hardware, un `struct` asigna un bloque secuencial donde los miembros se colocan en el orden declarado; el tamaño total puede ser mayor por el fenómeno de *padding* (alineación de memoria). Se contrasta con las `union`, donde todos los campos comparten la misma dirección y solo uno puede estar activo a la vez. El programa demuestra paso por referencia con `->` para modificar registros, y paso por valor con `.` para lectura segura.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | Punteros_MemoriaDinamica | [Ver Código](./Actividad_09-Punteros/Sources/Punteros_MemoriaDinamica.c) |
| Img | Capturas de Memoria (1 al 5) | [Captura 1](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-31-24.png) \| [Captura 2](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-32-45.png) \| [Captura 3](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-33-15.png) \| [Captura 4](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-39-38.png) \| [Captura 5](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-41-14.png) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 10 — Memoria Dinámica

> Profundiza en el estudio de tipos de datos compuestos (`struct`) y su gestión en memoria dinámica. El enfoque cubre la agrupación de variables heterogéneas, el *padding*, arreglos de estructuras, y la diferencia fundamental entre `struct` (almacenamiento simultáneo) y `union` (almacenamiento solapado).
>
> El programa evalúa la transferencia de estructuras a funciones por referencia usando `->` para modification directa, y por valor usando `.` para lectura protegida. La fase de persistencia escribe en archivo con `fprintf`, usando operadores ternarios para traducir banderas numéricas a texto legible, con columnas alineadas mediante modificadores de ancho de campo.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | Punteros_MemoriaDinamica | [Ver Código](./Actividad_10-Memoria_Dinamica/Sources/Punteros_MemoriaDinamica.c) |
| Img | Capturas de Sistema (1 al 5) | [Captura 1](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-31-24.png) \| [Captura 2](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-32-45.png) \| [Captura 3](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-33-15.png) \| [Captura 4](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-39-38.png) \| [Captura 5](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-41-14.png) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 11 — Estructuras y Uniones

> Implementa `struct` para modelar una base de datos de alumnos, demostrando cómo cohesionar cadenas de caracteres, flotantes y banderas lógicas bajo una misma entidad. Se analiza el *padding*, el arreglo de estructuras en el *stack*, y la diferencia con `union` para sistemas con memoria limitada.
>
> El programa gestiona la colección completa con funciones que reciben punteros (`->`) para captura directa y copias por valor (`.`) para visualización protegida. La fase final persiste los registros en archivo con columnas alineadas en `fprintf`, y traduce banderas numéricas a texto legible con operadores ternarios en línea.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | BaseDatos_Alumnos | [Ver Código](./Actividad_11-Struct_y_Union/Sources/BaseDatos_Alumnos.c) |
| Text | alumnos | [Ver Archivo](./Actividad_11-Struct_y_Union/Documentacion/alumnos.txt) |
| Img | Capturas de Pantalla (1 al 3) | [Captura 1](./Actividad_11-Struct_y_Union/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-54-16.png) \| [Captura 2](./Actividad_11-Struct_y_Union/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-56-00.png) \| [Captura 3](./Actividad_11-Struct_y_Union/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-56-10.png) |

[Volver al Índice](#índice-de-actividades)

---

### Actividad 12 — Manejo de Archivos

> El manejo de archivos en C permite romper el ciclo de vida volátil de las variables en RAM, transfiriendo la información hacia el almacenamiento secundario. Toda interacción se gestiona a través de un puntero `FILE *` que administra internamente la posición del cursor, indicadores de error y el búfer intermedio.
>
> Los modos de acceso cubren escritura exclusiva `"w"` (crea o sobrescribe), lectura `"r"` y añadidura `"a"` (agrega al final sin destruir datos). Antes de cualquier operación, el programa valida que el puntero no sea `NULL` para prevenir fallos de segmentación. La escritura usa `fprintf`, la lectura usa `fgets`, y al finalizar `fclose` vacía la caché y libera el descriptor de archivo.

| Tipo | Archivo / Documento | Enlace |
| :---: | :--- | :---: |
| Code | main | [Ver Código](./Actividad_12-Archivos/Sources/main.c) |
| PDF | Funciones + Archivos | [Ver Documento](./Actividad_12-Archivos/Documentacion/Funciones%20+%20Archivos.pdf) |
| Text | resultado | [Ver Archivo](./Actividad_12-Archivos/Documentacion/resultado.txt) |
| Img | Captura de pantalla | [Ver Captura](./Actividad_12-Archivos/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2022-29-51.png) |

[Volver al Índice](#índice-de-actividades)

---

<div align="center">

Dinora Marlen Rocha Perez · 222583328 · Sección D04 · [GitHub](https://github.com/dinorarocha8332-byte/Programacion-estructurada)

</div>
