Mediante esta clase generamos una lista doblemente enlazada, la cual también resulta ser ordenada,
principalmente utilizo un método insertar que se encarga de insertar al incio, en caso de que
el elemento a insertar sea menor que el primer elemento de la lista, asimismo un insertar
al final que se ejecuta cuando no encuentra ningún elemento perteneciente a la lista, mayor
al elemento a insertar. Asimismo un método insertar entre dos elementos cuando:
elemento anterior<elemento a insertar< elemento siguiente. Para solucionar el error de la memoria, descubri que
el detalle estaba en la asignacion de ciertas celdas, por lo tanto al asignar correctamente
el orden de las celdas se soluciono el problema.
El Get Frecuencia lo pude implementar con facilidad y ademas solucione un pequeno problema de
insertar un elemento cuando la lista era nula o estaba vacia, el cual no habia contemplado
por la rapidez del desarrollo en el tiempo limitado. 
Esta clase se compila con g++ -o main main.cpp listaO.cpp
En esta prueba creo una lista y le realizo todas las pruebas de los nuevos metodos
implementados, tales como el insertarOrdenado, y los get solicitados.
Esta lista es de gran utilidad para la clase vecindario, ya que necesitamos una lista
que tenga frecuencias para obtener la frecuencia de los vecinos al valor entero.

Caso de Prueba de ListaO y su main:
-10 0 1 2 4 8 14 18 25 80

Valor de la frecuencia de Iterador::end() es : 0
Valor Lista:-20con Frecuencia:1
Valor Lista:-10con Frecuencia:1
Valor Lista:0con Frecuencia:1
Valor Lista:1con Frecuencia:1
Valor Lista:2con Frecuencia:1
Valor Lista:3con Frecuencia:1
Valor Lista:4con Frecuencia:1
Valor Lista:8con Frecuencia:1
Valor Lista:14con Frecuencia:1
Valor Lista:18con Frecuencia:1
Valor Lista:25con Frecuencia:1
Valor Lista:80con Frecuencia:1
Valor Lista:82con Frecuencia:1
Imprimimos la lista en una sola linea: -20 -10 0 1 2 3 4 8 14 18 25 80 82
