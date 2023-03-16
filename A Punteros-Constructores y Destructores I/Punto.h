#ifndef _PUNTO
#define _PUNTO
class Punto {
   private:
      int x;
      int y;
   public:
      Punto();
      Punto(int,int);
      ~Punto(); // Destructor
      void imprimir();
};
#endif
