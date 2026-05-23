Estructuras (struct) vs. Uniones (union) en C
Tanto las estructuras como las uniones son tipos de datos compuestos definidos por el usuario que permiten agrupar múltiples variables (miembros) bajo un mismo nombre. Sin embargo, gestionan la memoria RAM de formas completamente opuestas.

1. Estructuras (struct)
Permiten almacenar múltiples variables de diferentes tipos de datos de forma simultánea.

Distribución en Memoria: Cada miembro tiene su propia dirección de memoria independiente dentro del bloque. Se colocan de manera secuencial.

Tamaño Total: Es igual o ligeramente mayor a la suma de los bytes de todos sus miembros (el compilador suele añadir bytes de relleno o padding para optimizar la alineación en el procesador).

Caso de Uso: Ideal para modelar objetos complejos del mundo real que requieren que sus atributos coexistan (por ejemplo, los datos de un alumno: nombre, calificación y estado).

2. Uniones (union)
Permiten compartir el mismo espacio de memoria entre varios miembros, de modo que solo un miembro puede estar activo a la vez.

Distribución en Memoria: Todos los miembros comparten exactamente la misma dirección de memoria base. Escribir en un miembro sobrescribe inmediatamente el valor de los demás.

Tamaño Total: Es igual al tamaño del miembro más grande dentro de su declaración.

Caso de Uso: Ideal para ahorrar memoria RAM en sistemas embebidos, hardware limitado o para representar variables que tienen estados mutuamente excluyentes.
