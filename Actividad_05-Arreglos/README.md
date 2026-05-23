

##Arreglos Unidimensionales

Esta sección del proyecto se enfoca en el estudio y la implementación de arreglos unidimensionales (vectores o *arrays*) en el lenguaje C. El objetivo fundamental es comprender cómo el sistema gestiona colecciones de datos del mismo tipo bajo un único nombre de variable, analizando la asignación de memoria contigua, el acceso indexado y la diferencia entre la reserva estática y dinámica de espacio en la memoria RAM.

## Distribución de Arreglos 
Los módulos de análisis inicial demuestran el comportamiento de los arreglos a nivel de hardware y cómo se diferencia la asignación de variables individuales frente a colecciones indexadas:

* **Puntero Base del Arreglo:** El programa revela un concepto clave en C: el identificador o nombre de un arreglo funciona internamente como un puntero constante que apunta directamente a la dirección de memoria del primer elemento del contenedor (el índice cero). Por esta razón, al imprimir la dirección del arreglo, no se requiere el uso del operador unario de dirección.
* **Almacenamiento Secuencial y Contiguo:** Al inspeccionar las direcciones de memoria de los elementos del arreglo, se puede comprobar que el compilador reserva un bloque físico ininterrumpido en la memoria RAM. Los elementos se posicionan uno inmediatamente después del otro, separados por un número exacto de bytes que se corresponde de forma matemática con el tamaño del tipo de dato almacenado (por ejemplo, saltos de 4 bytes para datos de tipo flotante).
* **Variables de Control de Desbordamiento:** El sistema incluye la declaración de variables auxiliares en posiciones adyacentes para permitir la observación de cómo el compilador organiza la pila de memoria e identificar los riesgos de seguridad o corrupción de datos si se intentara acceder a un índice que se encuentre fuera de los límites reservados por el arreglo.

Los módulos avanzados introducen mayor flexibilidad al sistema mediante el uso de Arreglos de Longitud Variable (VLA por sus siglas en inglés):

* **Definición Post-Lectura:** A diferencia de los arreglos tradicionales donde el tamaño debe ser una constante fija escrita desde el código fuente, este programa permite que la dimensión del contenedor se defina tras capturar una instrucción directa del usuario. El procesador evalúa la variable ingresada y, en ese instante de la ejecución, calcula y delimita el bloque de memoria necesario para el programa.
* **Iteración por Desplazamiento de Índices:** Mediante el uso de estructuras cíclicas controladas por un contador, el sistema realiza la lectura y escritura de datos de manera automatizada. El índice del bucle funciona como un desplazador que le indica al procesador a cuántas posiciones de distancia del puntero base se debe almacenar o leer la información, garantizando una administración eficiente y ordenada de los registros de temperatura o cualquier variable numérica recolectada.
