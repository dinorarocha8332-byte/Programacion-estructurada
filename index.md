# Mi Portafolio de Programacion Estructurada
> Espacio personal de evidencias desarrolladas durante el curso.
## Mis Datos
* Nombre: Dinora Marlen Rocha Perez
* Codigo: 222583328
* Seccion: D04
---
## Evidencias del Curso

---

### Actividad 01: Tipos de datos

El programa está diseñado como un experimento práctico para observar la gestión de memoria en bajo nivel que realiza el compilador y el sistema operativo al trabajar con el lenguaje C. A través de su ejecución, se puede analizar cómo se segmenta la memoria RAM y cómo se comportan los diferentes tipos de datos primitivos.

El flujo del programa inicia con la reserva de espacio en la memoria estática (la pila o *stack*). Cada tipo de dato declarado requiere una cantidad específica de bits: los `char` ocupan 1 byte, los enteros (`short`, `int`, `long`, `long long`) escalan de 16 a 64 bits, y los tipos de punto flotante (`float`, `double`, `long double`) reservan espacios mayores divididos internamente para mantisa y exponente. La parte central radica en el operador `&`, que extrae la dirección física del primer byte de cada variable, permitiendo observar cómo la memoria se llena de forma contigua con saltos exactos según el tipo de dato.

* [Codigo Fuente (.c)](./Actividad_01-Tipos_de_datos/Sources/Tipo%20de%20datos%20y%20direccion%20de%20memoria.c)
* [Documento de Tarea (.pdf)](./Actividad_01-Tipos_de_datos/Documentacion/Tarea%201%20P.E.%20Tipos%20de%20Datos.pdf)
* [Evidencia de captura 1 (.jpeg)](./Actividad_01-Tipos_de_datos/Documentacion/WhatsApp%20Image%202026-05-22%20at%201.44.16%20PM.jpeg)
* [Evidencia de captura 2 (.jpeg)](./Actividad_01-Tipos_de_datos/Documentacion/WhatsApp%20Image%202026-05-22%20at%201.44.25%20PM.jpeg)
* [Evidencia de captura 3 (.jpeg)](./Actividad_01-Tipos_de_datos/Documentacion/WhatsApp%20Image%202026-05-22%20at%201.44.41%20PM.jpeg)

---

### Actividad 02: Operadores

Este programa está diseñado como una suite de pruebas para evaluar el comportamiento, la precedencia y la evaluación interna de los diferentes tipos de operadores en el lenguaje C. Se analiza cómo el compilador resuelve desde operaciones matemáticas básicas hasta lógica booleana, manipulación de bits y asignaciones complejas.

Se cubren los operadores aritméticos con su jerarquía de precedencia; los operadores relacionales que retornan `1` (verdadero) o `0` (falso) en lugar de un tipo Boolean nativo; los operadores lógicos `&&` y `||` con su comportamiento de cortocircuito; el operador ternario `?:` como alternativa compacta al `if-else`; y la diferencia crítica entre pre-incremento (`++E`) y post-incremento (`E++`), donde el primero modifica el valor antes de usarlo y el segundo lo entrega primero y lo modifica después.

* [Codigo Fuente - errores_corregidos (.c)](./Actividad_02-Operadores/Sources/errores_corregidos.c)
* [Codigo Fuente - operadores (.c)](./Actividad_02-Operadores/Sources/operadores.c)
* [Evidencia de captura (.jpeg)](./Actividad_02-Operadores/Documentacion/Ejercicios%20de%20operadores%20corregidos.jpeg)

---

### Actividad 03: Condicionales

Esta serie de programas explora las estructuras de control de flujo en el lenguaje C mediante un conjunto de módulos progresivos. El objetivo es analizar cómo el procesador toma decisiones en tiempo de ejecución basándose en condiciones lógicas simples, condiciones anidadas y ciclos iterativos condicionales.

Los módulos abarcan: validación de rangos con bifurcaciones simples, evaluación de criterios múltiples con operadores lógicos, anidamiento condicional para múltiples niveles de prioridad, clasificación de paridad mediante el operador módulo, y detección de números primos combinando banderas de estado con ciclos de parada temprana para optimizar el uso del procesador evitando divisiones innecesarias.

* [Codigo Fuente - codigo1_edad (.c)](./Actividad_03-Condicionales/Sources/codigo1_edad.c)
* [Codigo Fuente - codigo2_beca (.c)](./Actividad_03-Condicionales/Sources/codigo2_beca.c)
* [Codigo Fuente - codigo3_beca_anidado (.c)](./Actividad_03-Condicionales/Sources/codigo3_beca_anidado.c)
* [Codigo Fuente - codigo4_par_impar (.c)](./Actividad_03-Condicionales/Sources/codigo4_par_impar.c)
* [Codigo Fuente - codigo5_primo (.c)](./Actividad_03-Condicionales/Sources/codigo5_primo.c)
* [Codigo Fuente - codigo6_par_impar_primo (.c)](./Actividad_03-Condicionales/Sources/codigo6_par_impar_primo.c)
* [Evidencia de captura 1 (.png)](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2018-57-57.png)
* [Evidencia de captura 2 (.png)](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2018-58-55.png)
* [Evidencia de captura 3 (.png)](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2018-59-34.png)
* [Evidencia de captura 4 (.png)](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-00-09.png)
* [Evidencia de captura 5 (.png)](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-00-40.png)
* [Evidencia de captura 6 (.png)](./Actividad_03-Condicionales/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-01-12.png)

---

### Actividad 04: Ciclos y Bucles

Esta sección aborda las tres estructuras de repetición fundamentales en C: el ciclo controlado por contador (`for`), el ciclo controlado por condición previa (`while`) y el ciclo controlado por condición posterior (`do-while`). El enfoque principal es analizar cómo el procesador gestiona la automatización de tareas repetitivas y la acumulación dinámica de datos.

El ciclo `for` procesa flujos de datos acumulando valores en cada iteración. El `while` usa valores centinela (como el cero) para detener el ciclo cuando el usuario decide terminar. El `do-while` garantiza que el bloque se ejecute al menos una vez, ideal para menús interactivos. Los módulos más avanzados combinan ciclos anidados con filtros de validación que ignoran datos fuera de rango y calculan promedios y porcentajes al finalizar.

* [Codigo Fuente - CALCULAR PROMEDIO (.c)](./Actividad_04-Ciclos/Sources/CALCULAR%20PROMEDIO%20.c)
* [Codigo Fuente - EJEMPLO DO WHILE (.c)](./Actividad_04-Ciclos/Sources/EJEMPLO%20DO%20WHILE.c)
* [Codigo Fuente - ejemplo for (.c)](./Actividad_04-Ciclos/Sources/ejemplo%20for.c)
* [Codigo Fuente - main (.c)](./Actividad_04-Ciclos/Sources/main%20(1).c)
* [Documento de Tarea (.pdf)](./Actividad_04-Ciclos/Documentacion/ACTIVIDAD%20ESTRUCTURAS%20CICLICAS%20PROGRAMACION%20ESTRUCTURADA%20(1).pdf)
* [Evidencia de captura 1 (.jpeg)](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.50.24%20PM.jpeg)
* [Evidencia de captura 2 (.jpeg)](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.51.03%20PM.jpeg)
* [Evidencia de captura 3 (.jpeg)](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.51.12%20PM.jpeg)
* [Evidencia de captura 4 (.jpeg)](./Actividad_04-Ciclos/Documentacion/WhatsApp%20Image%202026-05-22%20at%204.51.22%20PM.jpeg)

---

### Actividad 05: Arreglos / Vectores

Esta sección se enfoca en el estudio de arreglos unidimensionales (vectores) en C. El objetivo es comprender cómo el sistema gestiona colecciones de datos del mismo tipo bajo un único nombre de variable, analizando la asignación de memoria contigua y el acceso indexado.

Un concepto clave demostrado es que el nombre del arreglo actúa como un puntero constante al primer elemento, por lo que no requiere el operador `&` al imprimir su dirección. El compilador reserva un bloque físico ininterrumpido en RAM con saltos exactos entre elementos según el tipo de dato. Los módulos avanzados introducen los Arreglos de Longitud Variable (VLA), donde el tamaño se define en tiempo de ejecución a partir de un valor ingresado por el usuario, y se recorren con ciclos que usan el índice como desplazador desde el puntero base.

* [Codigo Fuente - Arreglos_2 (.c)](./Actividad_05-Arreglos/Sources/Arreglos_2.c)
* [Codigo Fuente - arreglos1 (.c)](./Actividad_05-Arreglos/Sources/arreglos1.c)
* [Documento de Tarea (.pdf)](./Actividad_05-Arreglos/Documentacion/ACTIVIDAD%204PROGRAMACION%20ESTRUCTURADA.pdf)
* [Notas arreglos01 (.md)](./Actividad_05-Arreglos/Documentacion/Notas%20arreglos01.md)
* [Notas arreglos02 (.txt)](./Actividad_05-Arreglos/Documentacion/notas%20arreglos02%20md.txt)

---

### Actividad 06: Matrices

Este módulo introduce el manejo de matrices (arreglos bidimensionales) y la persistencia de información mediante archivos. El objetivo es analizar cómo el procesador organiza tablas de datos en RAM y cómo transfiere esa información hacia almacenamiento permanente.

Internamente, C organiza las matrices como una tira lineal contigua de bytes (almacenamiento por filas). Para recorrerlas se usan bucles anidados: el externo indexa filas y el interno columnas. El programa también demuestra cómo limpiar el búfer de entrada con `while(getchar() != '\n')` y capturar texto con espacios usando `fgets`. La fase final escribe la matriz en un archivo `resultado.txt` usando `fprintf`, valida el puntero con `NULL` antes de escribir, y cierra el canal con `fclose` para vaciar la caché y liberar el descriptor del sistema operativo.

* [Codigo Fuente - Tablero_Archivo (.c)](./Actividad_06-Matrices/Sources/Tablero_Archivo.c)
* [Evidencia de captura (.png)](./Actividad_06-Matrices/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2019-03-25.png)

---

### Actividad 07: Cadenas de caracteres

Este módulo se centra en el estudio de cadenas de caracteres (arreglos `char`) usando la librería estándar `string.h`. El objetivo es comprender cómo el procesador almacena texto en memoria, gestiona el terminador nulo `\0` y aplica operaciones de lectura, medición, copia, unión y comparación de texto.

Se evalúan: lectura con `scanf` (limitada por espacios) vs `fgets` (líneas completas con control de desbordamiento); eliminación del salto de línea con `strcspn`; matrices bidimensionales de cadenas para listas de texto; cálculo de longitud efectiva con `strlen`; copia y concatenación con `strcpy` y `strcat`; comparación byte a byte con `strcmp` que retorna cero si son iguales; y búsqueda de caracteres con `strchr` que retorna la dirección de la primera coincidencia o `NULL` si no existe.

* [Codigo Fuente - BATTLESHIP (.c)](./Actividad_07-Cadenas/Sources/BATTLESHIP.c)
* [Codigo Fuente - Menu_Cadenas (.c)](./Actividad_07-Cadenas/Sources/Menu_Cadenas.c)
* [Documento de Tarea 1 (.pdf)](./Actividad_07-Cadenas/Documentacion/ACTIVIDAD%204PROGRAMACION%20ESTRUCTURADA%20(1).pdf)
* [Documento de Tarea 2 - BATTLESHIP (.pdf)](./Actividad_07-Cadenas/Documentacion/BATTLESHIP%20.pdf)
* [Evidencia de captura 1 (.jpeg)](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.08%20PM.jpeg)
* [Evidencia de captura 2 (.jpeg)](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.18%20PM.jpeg)
* [Evidencia de captura 3 (.jpeg)](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.36%20PM.jpeg)
* [Evidencia de captura 4 (.jpeg)](./Actividad_07-Cadenas/Documentacion/WhatsApp%20Image%202026-05-22%20at%205.26.54%20PM.jpeg)

---

### Actividad 08: Funciones

Este módulo aborda los pilares de la programación estructurada en C mediante funciones. El objetivo es analizar cómo el procesador segmenta algoritmos complejos en bloques lógicos independientes y reutilizables, y cómo gestiona la pila de llamadas (*call stack*).

Se demuestra la diferencia entre funciones con retorno definido (que devuelven un tipo de dato al bloque principal) y procedimientos `void` (que ejecutan acciones sin retornar valor). La sección más crítica contrasta el paso por valor, donde se copia el dato y la variable original queda intacta, con el paso por referencia mediante punteros, donde la función recibe la dirección física y modifica directamente la variable original. Al escalar a arreglos y matrices como parámetros, C siempre pasa por referencia implícitamente, y para matrices bidimensionales el compilador necesita conocer el número de columnas para calcular los saltos de memoria.

* [Codigo Fuente - main (.c)](./Actividad_08-Funciones/Sources/main%20(1).c)
* [Documento de Tarea (.pdf)](./Actividad_08-Funciones/Documentacion/Funciones%20+%20Archivos.pdf)

---

### Actividad 09: Punteros

Este módulo se enfoca en el estudio de los tipos de datos compuestos definidos por el usuario mediante `struct`. El objetivo es comprender cómo el procesador agrupa variables de diferentes tipos primitivos bajo una misma entidad y cómo se organiza el mapa de memoria para colecciones de registros.

A nivel de hardware, un `struct` asigna un bloque secuencial donde los miembros se colocan en el orden declarado; el tamaño total puede ser mayor a la suma de sus partes por el fenómeno de *padding* (alineación de memoria). Se contrasta con las `union`, donde todos los campos comparten la misma dirección de memoria y solo uno puede estar activo a la vez, útil para hardware con RAM limitada. El programa también demuestra paso por referencia con el operador `->` para modificar registros directamente, y paso por valor con el operador `.` para lectura segura sin alterar los datos originales. La fase final persiste la colección de estructuras en un archivo usando `fprintf` con operadores ternarios para formatear banderas lógicas como texto legible.

* [Codigo Fuente - Punteros_MemoriaDinamica (.c)](./Actividad_09-Punteros/Sources/Punteros_MemoriaDinamica.c)
* [Evidencia de captura 1 (.png)](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-31-24.png)
* [Evidencia de captura 2 (.png)](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-32-45.png)
* [Evidencia de captura 3 (.png)](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-33-15.png)
* [Evidencia de captura 4 (.png)](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-39-38.png)
* [Evidencia de captura 5 (.png)](./Actividad_09-Punteros/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-41-14.png)

---

### Actividad 10: Memoria Dinamica

Este módulo profundiza en el estudio de tipos de datos compuestos (`struct`) y su gestión en memoria dinámica. El enfoque cubre la agrupación de variables heterogéneas, el mapa de memoria de una estructura con su *padding*, arreglos de estructuras, y la diferencia fundamental entre `struct` (almacenamiento simultáneo de todos los miembros) y `union` (almacenamiento solapado donde solo un miembro es válido a la vez).

El programa evalúa la transferencia de estructuras a funciones por referencia usando `->` para modificación directa, y por valor usando `.` para lectura protegida. La fase de persistencia recorre el arreglo de estructuras escribiendo en archivo con `fprintf`, usando operadores ternarios para traducir banderas numéricas a texto legible, y modificadores de ancho de campo para alinear columnas de forma tabular, simulando el comportamiento de una base de datos relacional.

* [Codigo Fuente - Punteros_MemoriaDinamica (.c)](./Actividad_10-Memoria_Dinamica/Sources/Punteros_MemoriaDinamica.c)
* [Evidencia de captura 1 (.png)](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-31-24.png)
* [Evidencia de captura 2 (.png)](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-32-45.png)
* [Evidencia de captura 3 (.png)](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-33-15.png)
* [Evidencia de captura 4 (.png)](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-39-38.png)
* [Evidencia de captura 5 (.png)](./Actividad_10-Memoria_Dinamica/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-41-14.png)

---

### Actividad 11: Estructuras y Uniones

Este módulo implementa tipos de datos compuestos (`struct`) para modelar una base de datos de alumnos, demostrando cómo cohesionar cadenas de caracteres, flotantes y banderas lógicas enteras bajo una misma entidad. Se analiza el *padding* de memoria, el arreglo de estructuras en el *stack*, y la diferencia teórica con `union` para sistemas con memoria limitada.

El programa gestiona la colección completa con funciones que reciben punteros (`->`) para captura directa y copias por valor (`.`) para visualización protegida. La fase final persiste los registros en archivo con columnas alineadas mediante modificadores de ancho de campo en `fprintf`, y traduce las banderas numéricas a texto legible con operadores ternarios en línea.

* [Codigo Fuente - BaseDatos_Alumnos (.c)](./Actividad_11-Struct_y_Union/Sources/BaseDatos_Alumnos.c)
* [Datos de alumnos (.txt)](./Actividad_11-Struct_y_Union/Documentacion/alumnos.txt)
* [Evidencia de captura 1 (.png)](./Actividad_11-Struct_y_Union/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-54-16.png)
* [Evidencia de captura 2 (.png)](./Actividad_11-Struct_y_Union/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-56-00.png)
* [Evidencia de captura 3 (.png)](./Actividad_11-Struct_y_Union/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2020-56-10.png)

---

### Actividad 12: Manejo de Archivos

El manejo de archivos en C permite romper el ciclo de vida volátil de las variables en RAM, transfiriendo la información hacia el almacenamiento secundario para lograr la persistencia de los datos. Toda interacción con el sistema de archivos se gestiona a través de un puntero `FILE *` que administra internamente la posición del cursor, indicadores de error y el búfer intermedio.

Los modos de acceso cubren escritura exclusiva `"w"` (crea o sobrescribe), lectura `"r"` (falla si no existe) y añadidura `"a"` (agrega al final sin destruir datos previos). Antes de cualquier operación, el programa valida que el puntero no sea `NULL` para prevenir fallos de segmentación. La escritura usa `fprintf` con modificadores de precisión, la lectura usa `fgets` con límite de caracteres, y al finalizar `fclose` vacía la caché del sistema operativo, plasma los datos pendientes en disco y libera el descriptor de archivo.

* [Codigo Fuente - main (.c)](./Actividad_12-Archivos/Sources/main.c)
* [Documento de Tarea (.pdf)](./Actividad_12-Archivos/Documentacion/Funciones%20+%20Archivos.pdf)
* [Resultado (.txt)](./Actividad_12-Archivos/Documentacion/resultado.txt)
* [Evidencia de captura (.png)](./Actividad_12-Archivos/Documentacion/Captura%20de%20pantalla%20de%202026-05-22%2022-29-51.png)
