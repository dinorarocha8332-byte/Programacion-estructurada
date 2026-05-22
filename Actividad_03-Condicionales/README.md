

#Estructuras de Control Condicionales y Ciclos

Esta serie de programas está diseñada como un conjunto de módulos progresivos para explorar las estructuras de control de flujo en el lenguaje C. El objetivo principal es analizar cómo el procesador toma decisiones en tiempo de ejecución basándose en condiciones lógicas simples, condiciones anidadas y ciclos iterativos condicionales.

## Toma de Decisiones mediante Bifurcaciones Simples y Anidadas

Los primeros módulos del sistema demuestran el uso fundamental de las sentencias de bifurcación condicional para evaluar estados y clasificar datos introducidos por el usuario:

* **Validación de Rangos y Umbrales:** A través de la captura de datos numéricos en variables enteras, el sistema evalúa si un valor supera o iguala un límite crítico (como la mayoría de edad). Dependiendo del resultado de esta comparación lógica, el procesador desvía el flujo del programa hacia un bloque de instrucciones específico, ignorando por completo el bloque alternativo.
* **Evaluación de Criterios Múltiples:** Los módulos avanzan hacia la gestión de variables combinadas (como promedios académicos y conteo de incidencias). Aquí se pone a prueba el uso de operadores lógicos de conjunción para exigir el cumplimiento estricto de múltiples requisitos de manera simultánea antes de conceder una ruta de éxito.
* **Anidamiento Condicional y Rutas de Contingencia:** Cuando la primera condición no se cumple, el sistema no se detiene; en su lugar, se implementan estructuras jerárquicas donde un bloque de descarte contiene una nueva evaluación interna. Esto permite segmentar las respuestas en múltiples niveles de prioridad (estados de aprobación, advertencia o criticidad), optimizando la flexibilidad del programa ante escenarios complejos.

---

## Aritmética Modular para la Clasificación de Números

El sistema utiliza operaciones aritméticas específicas para deducir propiedades intrínsecas de los números enteros capturados mediante los periféricos de entrada:

* **Mapeo de Paridad:** El programa determina si un número es par o impar empleando el operador de residuo. Al dividir el número entre la unidad binaria base y evaluar si el residuo es exactamente cero, el sistema es capaz de clasificar cualquier entero dentro de estas dos categorías matemáticas fundamentales, sirviendo como un ejemplo clásico de bifurcación mutuamente excluyente.

---

## Algoritmos de Optimización de Ciclos y Validación de Primalidad

Los módulos más avanzados combinan las bifurcaciones condicionales con bucles iterativos para resolver problemas matemáticos que requieren análisis secuencial, como la determinación de números primos:

* **Banderas de Estado Lógico:** Se introduce el concepto de variables de estado o banderas, inicializadas bajo la premisa de que el número cumple con una característica. Esta variable cambia su valor de forma irreversible si el programa encuentra una sola evidencia que contradiga la premisa inicial durante la ejecución del algoritmo.
* **Ciclos con Criterio de Parada Temprana:** El programa ejecuta un bucle que busca divisores exactos para el número evaluado. Para optimizar el uso del procesador, el ciclo no realiza divisiones innecesarias: incorpora una condición de salida doble que detiene las iteraciones inmediatamente si se descubre que el número ya no es primo o si se ha superado la mitad del valor del número en evaluación. Esto evita el desperdicio de ciclos de reloj en el procesador al descartar análisis que matemáticamente son imposibles de encontrar en rangos superiores.
* **Protección de Rangos Inválidos:** Antes de iniciar cualquier ciclo de división, el flujo del programa cuenta con un filtro previo que descarta de forma automática a los números menores o iguales a uno, asegurando la integridad del resultado final según las definiciones de la teoría de números.
