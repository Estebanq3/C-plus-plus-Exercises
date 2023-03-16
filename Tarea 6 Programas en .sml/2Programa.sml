000 B0D0 mover un 0 a registro D para llevar el índice de los números
001 2FF0 leer valor N 
002 0FF0 cargar MBR con la n 
003 BEC0 mover la n a registro C 
004 7C1E resta n-1 para saber si es negativo y lo deja en MBR, es decir usuario digitó n = 0
005 DFFC salta a FFC(fin del programa) si n era 0 pues da negativo al restar contador   
006 0FF0 carga el MBR de nuevo con la n
007 BECO mover lo de MBR (la n) a registro C

008 7CFC resta 1 al contador n para ver si ya contador es 0
009 DFFA termina el programa si el contador ya alcanzó 0, si da -1 se termina el programa
010 2FF3 leer número nuevo, posible alpha
011 6D1D suma 1 al contador que lleva el índice
012 0FF3 cargo valor leído al MBR
013 BEA0 mover MBR valor leído al registro A

014 0FF1 carga FF1(cargo alpha para compararlo con posible nuevo alpha) al MBR 
015 BEB0 mover MBR al registro B 
016 7ABE resto registro A-B y lo dejo en E 
017 D008 salto a dirección 008 para leer un nuevo número si no se pudo superar alpha
018 BAE0 el valor que superó a alpha lo muevo a MBR para guardar el nuevo alpha
019 1FF1 guardo el nuevo alpha en su celda, la dirección FF1
020 BDE0 muevo el índice del nuevo alpha al MBR
021 1FF2 guarda índice de alpha en memoria de nuevo
022 E008 salta a leer un nuevo número

FFA 4FF1 imprime el número alpha ganador
FFB 4FF2 imprime el índice del número alpha
FFC	FFFF fin del programa  


//variables
FF0 0000 inicializa FF0 con un 0, n 
FF1 0000 inicializa FF1 con un 0, variable para guardar número alpha
FF2 0000 inicializa FF2 con un 0, variable para guardar indice de alpha
FF3 0000 inicializa FF3 con un 0, número que se lee
A