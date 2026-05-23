

# Tipos de Datos Compuestos (Estructuras) y Gestión de Registros

Este módulo del proyecto se enfoca en el estudio e implementación de los tipos de datos compuestos definidos por el usuario en el lenguaje C, específicamente a través del uso de estructuras (`struct`). El objetivo fundamental es comprender cómo el procesador agrupa lógicamente variables de diferentes tipos primitivos bajo una misma entidad, cómo se organiza el mapa de memoria para albergar colecciones de registros y los conceptos clave relacionados con la alineación de datos, la encapsulación y la diferencia teórica con respecto a las uniones (`union`).

## Agrupación Lógica y Distribución de Estructuras en Memoria

El programa demuestra cómo el lenguaje C permite superar la limitación de los arreglos convencionales, los cuales solo pueden almacenar datos del mismo tipo, permitiendo modelar objetos del mundo real mediante registros heterogéneos:

* **Estructuración de Datos Encapsulados:** Mediante la declaración de una estructura, el sistema define un nuevo molde o tipo de dato que cohesiona cadenas de caracteres (para el nombre), variables de punto flotante (para las calificaciones) y variables enteras que actúan como banderas lógicas binarias (para registrar derechos y actividades). Cada una de estas variables internas se denomina miembro o campo de la estructura.
* **El Mapa de Memoria de un Struct:** A nivel de hardware, cuando el procesador reserva espacio para una estructura, asigna un bloque de memoria donde los miembros se colocan secuencialmente en el orden en que fueron declarados. Es importante destacar que el tamaño total en bytes de un `struct` suele ser igual o ligeramente mayor a la suma de sus partes debido a un fenómeno de la arquitectura de la computadora conocido como alineación de memoria (*padding*), donde el compilador inserta bytes vacíos para que el acceso a los datos sea eficiente para el procesador.
* **Composición y Arreglos de Estructuras:** El sistema eleva la complejidad al definir una segunda estructura encargada de administrar una colección indexada de registros junto con un contador entero. Esto genera una matriz unidimensional de estructuras en el *stack*, donde el procesador calcula el desplazamiento de memoria multiplicando el índice del ciclo por el tamaño total del molde de la estructura base.

---

## Diferencias Conceptuales Críticas entre Estructuras y Uniones

Aunque el programa implementa estructuras para la gestión simultánea de información, la teoría de tipos compuestos en C exige contrastar este comportamiento con el de una unión (`union`) para entender el diseño eficiente de software:

* **Estructuras (Almacenamiento Simultáneo):** Como se observa en el código, cada miembro del registro tiene su propia dirección de memoria independiente dentro del bloque. Esto permite que todos los campos coexistan al mismo tiempo, haciendo posible procesar la calificación de manera paralela al nombre del estudiante.
* **Uniones (Almacenamiento Solapado):** Si el programa hubiese utilizado una unión en lugar de una estructura, el compilador reservaría únicamente un espacio de memoria equivalente al tamaño del miembro más grande del grupo. Todos los campos de una unión comparten exactamente la misma dirección de memoria base; por lo tanto, solo se puede almacenar y utilizar un miembro a la vez, ya que escribir un dato nuevo sobrescribe de forma inmediata la información del miembro anterior. Las uniones son ideales para optimizar sistemas embebidos o hardware con memoria RAM extremadamente limitada donde los estados son mutuamente excluyentes.

---

## Paso de Parámetros por Valor y por Referencia

El flujo del programa pone a prueba la flexibilidad de las funciones en C al manipular estructuras mediante dos metodologías de transferencia de datos en la pila de ejecución:

* **Paso por Referencia (Modificación Directa):** Durante la fase de captura, la función recibe un puntero hacia la lista de registros utilizando el operador de dirección. Al trabajar con la dirección física, la función utiliza el operador de flecha (`->`) para desreferenciar el puntero y acceder directamente a las celdas de la variable original. Esto permite que las modificaciones realizadas en el bucle afecten directamente a la base de datos principal sin necesidad de duplicar el bloque entero de información en la memoria.
* **Paso por Valor (Protección de Lectura):** Durante las fases de visualización y persistencia, las funciones reciben una copia exacta de la estructura por valor. El procesador duplica el bloque de datos en un nuevo registro temporal dentro del ámbito de la función. Al utilizar el operador de punto (`.`), el sistema accede a los campos de la copia de manera segura; cualquier intento de alteración accidental no afectará los datos reales del programa, sirviendo como un mecanismo de protección de la información.

---

## Formateo Avanzado y Persistencia de Bloques de Datos

La última fase del programa se encarga de transferir la colección de estructuras desde la memoria RAM hacia un archivo físico de texto en el disco duro:

* **Control de Canales y Operadores Ternarios en Línea:** Tras validar que el canal de escritura con el archivo externo se haya establecido correctamente, el sistema recorre el arreglo de estructuras. Al momento de escribir los datos lógicos binarios, el programa implementa operadores ternarios internos que evalúan las banderas enteras de control y deciden en tiempo de ejecución si plasman en el archivo la cadena informativa de éxito o de ausencia, sustituyendo los valores numéricos nativos por texto legible para el usuario.
* **Formateo de Columnas Alineadas:** Mediante instrucciones de salida formateada, el procesador utiliza modificadores de ancho de campo y justificación a la izquierda en las funciones de escritura de archivos. Esto le indica al sistema cuántos caracteres exactos debe reservar para cada columna (como el espacio destinado al nombre o a los promedios), forzando al texto a alinearse de manera tabular y limpia dentro del archivo plano resultante, simulando el comportamiento de una base de datos relacional tradicional.
