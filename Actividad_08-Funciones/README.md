
#  Programación Estructurada mediante Funciones

Este módulo del proyecto aborda los pilares fundamentales de la programación estructurada en el lenguaje C mediante el uso de funciones. El objetivo central es analizar cómo el procesador segmenta un algoritmo complejo en bloques lógicos independientes y reutilizables, cómo se gestiona la pila de llamadas (*call stack*) y de qué manera interactúa el sistema con los datos dependiendo de las metodologías de transferencia de parámetros y el alcance de las variables.

## Anatomía y Declaración de Bloques Subrutina

El programa demuestra de forma práctica cómo estructurar módulos de código aislados antes de su invocación en el flujo principal del sistema:

* **Firmas de Retorno Definido:** Mediante funciones matemáticas básicas (como la suma), el sistema establece un contrato donde el procesador espera de vuelta un tipo de dato específico al concluir las instrucciones internas. Esto permite enlazar operaciones aritméticas directamente a variables receptoras en el bloque principal.
* **Módulos de Acción Pura (`void`):** Para tareas orientadas al despliegue visual o a la modificación directa de estructuras complejas que no requieren devolver un valor numérico, el sistema implementa procedimientos de tipo vacío. Estos módulos se ejecutan para alterar el estado de la consola o de la memoria sin sobrecargar los registros de retorno del procesador.

---

## Mecánicas de Transferencia de Parámetros en la Memoria RAM

Una de las secciones más críticas del código analiza el comportamiento físico de los datos cuando son transferidos desde el ámbito de ejecución principal hacia las subrutinas, contrastando la seguridad frente a la eficiencia:

* **Paso de Parámetros por Valor (Aislamiento Total):** Cuando se envía una variable primitiva a una función de modificación convencional, el sistema operativo realiza una copia idéntica del valor en un sector diferente de la pila de memoria (*stack*). El programa demuestra que cualquier alteración o reasignación de datos realizada dentro de la subrutina afecta únicamente a esa copia local. Al finalizar el ciclo de vida de la función, la memoria temporal se libera y la variable original del bloque principal permanece completamente intacta.
* **Paso de Parámetros por Referencia (Uso de Punteros):** Para permitir que una subrutina altere el estado real de una variable externa, el programa implementa el paso por referencia mediante operadores de direccionamiento. En lugar de duplicar el valor, la función recibe la dirección de memoria exacta de la variable original. Utilizando operadores de desreferenciación (punteros), el procesador accede directamente a la celda física de la memoria RAM y modifica su contenido original, logrando efectos secundarios permanentes y controlados.

---

## Procesamiento de Estructuras Complejas y Multidimensionales como Parámetros

El sistema evalúa cómo cambian las reglas de transferencia de datos cuando los argumentos enviados a una función no son variables simples, sino colecciones de datos indexados:

* **Paso Nativo por Referencia en Arreglos Lineales:** Al enviar un vector o arreglo unidimensional a una función encargada de su lectura en pantalla, C rompe la regla del paso por valor. El nombre del arreglo actúa implícitamente como la dirección del primer elemento, por lo que la subrutina siempre trabaja sobre la estructura real de datos. El programa demuestra cómo la función utiliza esta dirección base junto con un parámetro secundario que delimita el tamaño para recorrer linealmente la memoria sin riesgo de desbordamiento.
* **Mapeo de Matrices Multidimensionales en Subrutinas:** Al escalar a estructuras bidimensionales, el procesador exige que la función conozca de antemano las dimensiones del bloque (específicamente el número de columnas). Esto es indispensable para que el hardware pueda calcular de forma matemática los saltos de memoria necesarios al pasar de una fila a otra dentro de un arreglo que físicamente está guardado de manera lineal y contigua en la memoria del sistema.
