#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class rettangolo {
    private:
        double base, altezza;

    public:        
        Rettangolo();
        Rettangolo(double base);
        Rettangolo(double base, double altezza);


        ~Rettangolo();

        void setBase(double x);
        void setAltezza(double x);

        double getBase();
        double getAltezza();
        double getPerimetro();
        double getArea();
        double getDiagonale();

        void stampa();
}; 

#endif