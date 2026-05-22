##Operadores 
Este programa está diseñado como una suite de pruebas para evaluar el comportamiento, la precedencia y la evaluación interna de los diferentes tipos de operadores en el lenguaje C. A través de su ejecución, se analiza cómo el compilador resuelve desde operaciones matemáticas básicas hasta lógica booleana, manipulación de bits y asignaciones complejas.

 **Operadores Aritméticos**
El flujo del programa comienza demostrando que el compilador no evalúa las operaciones matemáticas simplemente de izquierda a derecha, sino que sigue reglas estrictas de jerarquía (precedencia de operadores):

Operador Módulo (%): En expresiones combinadas, el operador de residuo o módulo tiene una prioridad más alta que la suma. El programa calcula primero el residuo de la división entera y luego suma el resultado al valor base, demostrando cómo se estructuran las ecuaciones aritméticas en la arquitectura del procesador.

**Operadores Relacionales y Retorno Booleano en C**
A diferencia de otros lenguajes modernos que cuentan con un tipo de dato nativo Boolean (true/false), C maneja la lógica relacional mediante valores enteros:

Representación Numérica del Éxito: Las comparaciones de igualdad (==), desigualdad (!=) o magnitud (<=, >) devuelven un 1 si la condición es verdadera y un 0 si es falsa.

El programa ejecuta estas validaciones directamente dentro de las funciones de salida, permitiendo observar cómo el sistema traduce una afirmación lógica en un bit de estado binario ejecutable.

**Operadores Lógicos** 
La sección de operadores lógicos evalúa condiciones compuestas utilizando las compuertas lógicas convencionales Y (&&) y O (||):

Comportamiento del Cortocircuito: El programa pone a prueba la eficiencia del compilador. En una operación || (OR), si la primera condición es verdadera, el sistema no evalúa la segunda porque el resultado final ya está garantizado. En cambio, con && (AND), ambas partes deben ser analizadas minuciosamente a menos que la primera sea falsa, optimizando el tiempo de procesamiento en el silicio.

**Operador Ternario**
El programa implementa el operador ternario (?:) como una alternativa compacta a las estructuras de control condicionales tradicionales (if-else). Funciona evaluando una expresión de comparación inicial: si la premisa se cumple, el sistema asigna el valor inmediatamente posterior al signo de interrogación; de lo contrario, asigna el valor posterior a los dos puntos. Esto ocurre directamente en una sola línea de instrucción, reduciendo la carga de código.

**Mecánica de Incremento, Decremento**
Una de las características más críticas analizadas en el código es la diferencia entre los operadores de modificación prefijos y sufijos:

Post-incremento (A++ o D++): El programa demuestra que cuando el operador está a la derecha, la variable entrega su valor actual a la función o instrucción que la requiere en ese instante, y después de que esa línea termina de ejecutarse, el valor se incrementa en la memoria RAM.

Pre-incremento (++E o --E): Cuando el operador se coloca a la izquierda, el procesador interrumpe la línea para sumar o restar una unidad al registro de la variable inmediatamente, y es este nuevo valor ya modificado el que se utiliza en la instrucción actual.



Operador OR a Nivel de Bits (|): A diferencia del operador lógico, el símbolo de tubería simple compara las representaciones binarias de dos números miembro a miembro, activando los bits correspondientes en el resultado donde al menos uno de los elementos tenga un bit en 1.

Asignación Compuesta (+=): El programa ejecuta transformaciones en línea donde una variable modifica su propio valor acumulado mientras se encuentra dentro de una ecuación más grande, alterando el orden tradicional de lectura del código y forzando al sistema a resolver subexpresiones antes de finalizar la sentencia principal.
