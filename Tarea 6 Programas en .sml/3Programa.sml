000 B0D0 mover un 0 a registro D para llevar el índice de los números //contador respaldo
001 2FF0 leer valor N 
002 0FF0 cargar MBR con la n 
003 BEC0 mover la n a registro C 
004 7C1E resta n-1 para saber si es negativo y lo deja en MBR, es decir usuario digitó n = 0
005 DFFC salta a FFC(fin del programa) si n era 0 pues da negativo al restar contador   
006 0FF0 carga el MBR de nuevo con la n 
007 BECO mover lo de MBR (la n) a registro C  //hasta aquí debe estar igual a programa 2
008 2FF1 leer primera edad nueva, posible edad menor
009	7CFC resta 1 a n
010 3A00 leo el nombre de la persona con la edad más pequeña hasta el momento //índice ->nombre

011 7CFC resta 1 al contador n para ver si ya contador ya había llegado a 0 
012 CFFA termina el programa si el contador ya alcanzó 0
013 2FF3 leer edad nueva, posible edad menor
014 0FF3 cargo valor leído al MBR  
015 BEB0 mover MBR valor leído al registro B
016 0FF1 carga FF1(cargo edad más pequeña para compararlo con posible nueva edad más pequeña) al MBR 
017 BEA0 mover MBR al registro A
018 7ABE resto registro A-B y lo dejo en E 
019 D011 salto a dirección 011 para leer un nuevo número si no se pudo inferiorizar edad más pequeña, si dio negativo
020 BBE0 el valor que inferiorizó edad más pequeña lo muevo a MBR para guardar la nueva edad más pequeña
021 1FF1 guardo la nueva edad más pequeña en su celda, la dirección FF1
022 3B00 leo el nombre de la persona con la edad más pequeña hasta el momento //índice ->nombre
023 E011 salta a leer una nueva edad 



FFA 4FF1 imprime la edad más pequeña ganadora
FFB 5A00 imprime el nombre de la persona con la edad más pequeña hasta el momento
FFC	FFFF fin del programa  //fin de programa



//variables
FF0 0000 inicializa FF0 con un 0, n o contador regresivo hasta 0
FF1 0000 inicializa FF1 con un 0, variable para guardar edad más pequeña
FF2 0000 inicializa FF2 con un 0, variable para guardar indice //esto es un simple variable contadora respaldo
FF3 0000 inicializa FF3 con un 0, edad nueva que se lee
A00 4065 //ME
A01 6E6F //NO
A02 723A //R: