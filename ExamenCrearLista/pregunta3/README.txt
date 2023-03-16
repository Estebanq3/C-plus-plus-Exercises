El app es una aplicación de consola para construir un programa que permita leer 
desde un archivo de texto una secuencia de valores enteros entre 0 y 99 y construya un
vector con 100 Vecindarios ( uno para cada número ). Y luego al leer una 
secuencia de 5 números digitados por el usuario le permita recomendar un número.
Los vecinos de cada número serán los 5 valores previos a él observados en esta secuencia
de valores.
El valor entero recomendado corresponderá al número cuyo vecindario tenga la mayor
suma de las frecuencias acumuladas para esos 5 valores digitados por el usuario ,
dividida luego entre la frecuencia del vecindario .
En otras palabras, para cada Vecindario: se buscan y calcula la suma de las frecuencias
de cada uno de los valores digitados por el usuario, y luego la suma se dividen entre la
frecuencia del valor de ese vecindario particular. El valor del vecindario con mayor valor
es el seleccionado.

El programa se ejecuta con: g++ -o prueba app.cpp vecindario.cpp listaO.cpp lista.cpp

Caso de Prueba:
Vecindario: 38
Vecino compartido: 20 Frecuencia del vecino compartido: 1
Vecino compartido: 0 Frecuencia del vecino compartido: 0
Vecino compartido: 5 Frecuencia del vecino compartido: 1
Datos del VALOR ENTERO: 38
Suma de las frecuencias de vecinos compartidos secuencia de user:  2
Frecuencia valor entero: 1
Promedio de VALOR ENTERO : 38: 2

Vecindario: 40
Vecino compartido: 20 Frecuencia del vecino compartido: 2
Vecino compartido: 0 Frecuencia del vecino compartido: 0
Vecino compartido: 5 Frecuencia del vecino compartido: 1
Datos del VALOR ENTERO: 40
Suma de las frecuencias de vecinos compartidos secuencia de user:  3
Frecuencia valor entero: 1
Promedio de VALOR ENTERO : 40: 3

-------------------------------PROMEDIO FINAL Y VALOR RECOMENDADO------------------------
Valor recomendado: 40 Promedio del valor recomendado: 3

