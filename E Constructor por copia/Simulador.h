#ifndef _SIMU
#define _SIMU
#include "Termostato.h"

   class Simulador {
      public:
         Termostato subeCopia( Termostato );
         Termostato & subeReferencia( Termostato & );
         Termostato * subePuntero( Termostato * ); 
   };

#endif
