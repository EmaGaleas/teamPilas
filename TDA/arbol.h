#ifndef ARBOL_H
#define ARBOL_H
#include <nodoD.h>

template<typename tipo>
class arbol{
private:
    nodoD<tipo> *RaizPtr;
public:
    arbol();
    arbol(nodoD<tipo>* r);
    void setRaiz(nodoD<tipo> *n);
    nodoD<tipo>* getRaiz();
    bool esVacio();
    nodoD<tipo> *hijoIzq();
    nodoD<tipo> *hijoDer();
    nodoD<tipo> raizArbol();
    nodoD<tipo> *nuevoArbol(nodoD<tipo> *Derecha, tipo Dato, nodoD<tipo> *Izquierda);

};

template<typename tipo>
arbol<tipo>::arbol() : RaizPtr(0) {}

template<typename tipo>
arbol<tipo>::arbol(nodoD<tipo> *r) : RaizPtr(r){}

template<typename tipo>
void arbol<tipo>::setRaiz(nodoD<tipo> *n) {
    this->RaizPtr = n;
}

template<typename tipo>
bool arbol<tipo>::esVacio()
{
    return RaizPtr==0;
}

template<typename tipo>
nodoD<tipo>* arbol<tipo>::getRaiz() {
    return RaizPtr;
}

template<typename tipo>
nodoD<tipo> arbol<tipo>::raizArbol(){
    if(RaizPtr)
        return *RaizPtr;
    else
        throw "Arbol es Vacio";
}

template<typename tipo>
nodoD<tipo> *arbol<tipo>::hijoIzq()
{
    if(RaizPtr){
        return RaizPtr->SubArboIzq();
    }else{
        throw std::runtime_error("Árbol vacío");
    }
}

template<typename tipo>
nodoD<tipo> *arbol<tipo>::hijoDer()
{
    if(RaizPtr){
        return RaizPtr->SubArbolDer();
    }else{
        std::runtime_error("Arbol vacio");
    }
}

//Nodo* nuevoArbol(Nodo* ramaIzqda, Tipoelemento dato, Nodo* ramaDrcha)Rafael
//{
//return new Nodo(ramaIzqda, dato, ramaDrcha);
//}
//};

template<typename tipo>
nodoD<tipo> *arbol<tipo>::nuevoArbol(nodoD<tipo> *DerPtr, tipo Dato, nodoD<tipo> *IzqPtr)
{
    return new nodoD(DerPtr, Dato, IzqPtr);
}
#endif // ARBOL_H

