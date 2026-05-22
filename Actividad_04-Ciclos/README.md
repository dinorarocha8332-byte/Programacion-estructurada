

# AEstructuras Cíclicas y Acumulación de Datos

Esta sección del proyecto aborda la implementación de las tres estructuras de repetición fundamentales en el lenguaje C: el ciclo controlado por contador, el ciclo controlado por condición previa y el ciclo controlado por condición posterior. El enfoque principal es analizar cómo el procesador gestiona la automatización de tareas repetitivas, la acumulación dinámica de datos y el control de flujos mediante menús interactivos.

## Ciclos Controlados por Contador y Procesamiento Secuencial

Los módulos iniciales ponen a prueba la estructura cíclica determinada, diseñada para escenarios donde la cantidad exacta de iteraciones se conoce antes de entrar al bucle:

* **Inicialización y Control de Variables de Iteración:** El programa utiliza variables como índices que se incrementan automáticamente en cada ciclo. El procesador evalúa continuamente este contador frente a un límite previamente definido por el usuario para decidir si continúa la ejecución o rompe el ciclo.
* **Procesamiento de Flujos de Datos:** Dentro del bucle, el sistema interactúa de manera constante con el usuario para capturar nuevos valores. Estos valores no se almacenan de forma individual, sino que se procesan inmediatamente mediante variables acumuladoras, las cuales van sumando el valor entrante al estado anterior en cada vuelta del ciclo.


## Ciclos Controlados por Condición Previa y Criterios de Parada

El sistema explora los bucles de repetición indeterminada, donde el número de iteraciones depende enteramente del comportamiento de los datos introducidos en tiempo de ejecución:

* **Evaluación Inicial:** Mediante la estructura de condición previa, el procesador valida el estado de la variable de control antes de permitir el acceso al bloque de código. Si la variable cumple desde el inicio con el criterio de parada, las instrucciones internas se ignoran por completo.
* **Centinelas de Control:** El programa utiliza valores específicos (como el número cero) como señales de interrupción o centinelas. El ciclo permanece activo de forma indefinida, sumando números y actualizando estados, hasta que el sistema detecta este valor exacto, momento en el cual congela el acumulador y despliega el cálculo final en la consola.



## Ciclos Controlados por Condición Posterior y Diseño de Interfaces de Usuario

Los módulos más complejos combinan múltiples bucles condicionales de ejecución obligatoria para estructurar menús dinámicos y submenús interactivos:

* **Garantía de Ejecución Inicial:** A través de la estructura de condición posterior, el programa asegura que las instrucciones se ejecuten al menos una vez antes de verificar la condición de salida. Esto es ideal para desplegar interfaces gráficas o de texto en consola, ya que el menú debe mostrarse al usuario antes de que este pueda elegir si desea continuar o salir.
* **Anidamiento de Estructuras de Repetición:** El sistema implementa bucles dentro de otros bucles para gestionar subprocesos independientes (como la navegación general del programa frente a la selección específica de un catálogo de productos). Cada ciclo mantiene sus propias variables de control, permitiendo al usuario regresar al menú principal o reiniciar una tarea sin necesidad de finalizar la ejecución global del programa.
* **Filtros de Validación y Corrección de Flujo:** El programa incorpora lógica interna para ignorar datos que se encuentren fuera de los rangos lógicos establecidos. Si se detecta un valor inválido (como una calificación fuera de la escala), el sistema anula el avance del contador interno en esa iteración específica y solicita el dato nuevamente, demostrando un mecanismo básico de tolerancia a fallos en la captura de información.
* **Procesamiento Estadístico Final:** Una vez que el usuario decide romper el ciclo principal, el programa utiliza los datos recolectados por los diferentes contadores y acumuladores para realizar cálculos matemáticos de cierre, tales como promedios aritméticos y conversiones porcentuales de estados de aprobación o reprobación.
