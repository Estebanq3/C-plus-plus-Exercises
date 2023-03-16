000 2FF1 leer valor N
001 0FF0 cargar MBR con lo de FF0
002 BEC0 mover lo de MBR a registro C
003 0FF1 cargar FF1 a MBR
004 BED0 mover MBR a Registro D
005 7DCE resta lo del registro D-C y si da -1 el usuario digitó un n=0
006 DFFA salta directamente a la finalización del programa si el usuario digita n = 0
007 0FF1 carga n al MBR de nuevo
008 BED0 mover MBR a D
009 2FF2 leer valor de S de suma
010 0FF2 carga FF2 al MBR
011 BEA0 mover MBR a Registro A
012 6ABB suma registro A+B y lo deja en registro B
013 7DCD resta registro D-C y lo deja en D
014 CFF4 salta a FF4 si operación anterior es cero
015 E005 saltar siempre a 009
//después de salto cuando n se vuelve = 0
FF4 0FF1 carga el MBR con n de nuevo, recordemos que en FF1 se guardó n
FF5 BED0 mover el MBR al registro D
FF6 9BDD divido registro B entre registro D y dejo el resultado en registro D
FF7 BDE0 mover registro D a MBR
FF8 1FF3 guardo el MBR en FF3
FF9 4FF3 output de FF3 a salida para que el usuario vea el promedio
FFA F000 finaliza el programa


//variables
FF0 0001 //inicializa FF0 con un 1
FF1 0000 //inicializa FFF con el n que digita el usuario
FF2 0000 //inicializa con 0 la variable donde guardo cada número que se va a sumar
FF3 0000/ incializo donde guardaré el promedio









