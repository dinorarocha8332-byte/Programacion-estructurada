
# Manipulación de Cadenas de Caracteres y Librería Estándar

Este módulo del proyecto se centra en el estudio y la implementación de cadenas de caracteres (arreglos de tipo `char`) en el lenguaje C, utilizando las funciones de la librería estándar `string.h`. El objetivo fundamental es comprender cómo el procesador almacena texto en memoria, cómo se gestiona el carácter terminador nulo y cuáles son los mecanismos óptimos para la lectura, medición, copia, unión y comparación de datos alfanuméricos a través de una interfaz interactiva basada en menús.

## Mecanismos de Lectura de Texto y Control de Desbordamiento

El programa evalúa de manera práctica las distintas metodologías que ofrece el lenguaje para capturar cadenas de caracteres desde la entrada estándar, exponiendo sus ventajas y limitaciones de seguridad:

* **Lectura Delimitada por Espacios:** Mediante funciones de captura básica con restricciones de longitud (como `scanf`), el sistema fragmenta la entrada al detectar un espacio en blanco, un tabulador o un salto de línea. Esto demuestra cómo el búfer procesa múltiples palabras como elementos separados y resguarda la memoria limitando el tamaño máximo de caracteres legibles.
* **Lectura Segura de Líneas Completas:** A través de la función `fgets`, el sistema solventa la limitación de los espacios en blanco, permitiendo capturar frases compuestas. Al vincular explícitamente el tamaño máximo del arreglo de destino, el procesador impide que una entrada excesiva corrompa posiciones adyacentes en la pila de memoria (*stack*), garantizando la estabilidad de la aplicación.
* **Truncado del Salto de Línea:** Un comportamiento nativo de la lectura de líneas es la inclusión del carácter de escape correspondiente al salto de línea generado por el usuario al presionar la tecla de confirmación. El programa utiliza de manera sistemática funciones de búsqueda espacial (`strcspn`) para localizar este carácter dentro de la cadena y sobrescribirlo inmediatamente con el terminador nulo (`\0`), asegurando la limpieza y homogeneidad estructural del texto almacenado.

---

## Estructuras de Almacenamiento Multidimensional de Cadenas

El sistema escala el uso de vectores tradicionales al implementar matrices de caracteres para la gestión de listados o colecciones de texto:

* **Matrices de Texto:** El programa organiza bloques de memoria bidimensionales donde la primera dimensión determina el número máximo de elementos o registros (por ejemplo, una lista de jugadores), mientras que la segunda dimensión define la longitud máxima en bytes permitida para cada cadena individual. El procesador indexa estas posiciones de forma secuencial, facilitando el recorrido y la actualización de bases de datos textuales estáticas mediante bucles controlados por contador.

---

## Operaciones Fundamentales con la Librería de Cadenas

La sección central del sistema explora las herramientas de bajo nivel para procesar la información alfanumérica previamente validada en la memoria RAM:

* **Cálculo de Longitud Efectiva:** El programa demuestra que el tamaño físico de un arreglo no siempre corresponde con el tamaño del mensaje almacenado. Utilizando la función `strlen`, el procesador recorre linealmente los registros binarios del texto, contando cada carácter individual hasta topar con el terminador nulo, omitiendo el espacio restante no utilizado del contenedor.
* **Duplicación y Concatenación Segura:** Para la edificación de mensajes compuestos, el sistema emplea funciones de clonación de memoria (`strcpy`) que inicializan un búfer con un texto base. Posteriormente, mediante operaciones de concatenación (`strcat`), el procesador fusiona dinámicamente múltiples cadenas de caracteres y conectores intermedios en un único arreglo de destino de alta capacidad, respetando el orden lógico de adición de los datos.
* **Evaluación de Igualdad Alfabética:** El programa analiza la comparación de cadenas mediante la función `strcmp`. Debido a que los operadores relacionales convencionales no pueden evaluar arreglos de texto directamente en C, el procesador efectúa una resta matemática bit a bit de los valores en código ASCII de ambas cadenas; si el resultado numérico final es exactamente cero, el sistema dictamina que la información textual es idéntica.
* **Búsqueda Indexada de Caracteres:** Finalmente, el sistema evalúa la localización de patrones dentro de un bloque de texto utilizando `strchr`. Esta instrucción instruye al procesador para escanear la cadena en busca de la primera coincidencia de un carácter específico, devolviendo una dirección de memoria válida si el elemento existe o un indicador nulo en caso de ausencia, sentando las bases para algoritmos de filtrado de datos.
