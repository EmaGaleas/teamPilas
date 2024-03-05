#ifndef CFRAME_H
#define CFRAME_H
#include <lista.h>
#include <QMessageBox>
#include <QMainWindow>
#include <pila.h>
#include <cola.h>
#include <listaD.h>
#include <pilasD.h>
#include <colaD.h>
#include <arbol.h>


QT_BEGIN_NAMESPACE
namespace Ui { class cframe; }
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();

    void actualizarSubmenu(bool activado);

    //viejos
    void MostrarSimple();
    void MPila();
    void MCola();
    //nuevos
    void MostarDoble();
    void MPilaDoble();
    void MColaDoble();
    void Preorden();
    void Preorden(nodoD<char> *a);
    void Postorden();
    void Postorden(nodoD<char> *a);
    void Inorden();
    void Inorden(nodoD<char> *a);

private slots:
    void on_btn_ingresar_clicked();

    void on_pb_doble_clicked();

    void on_RB_Lista_clicked();

    void on_RB_Pila_clicked();

    void on_RB_Cola_clicked();

    void on_RB_Arbol_clicked();

    void on_RB_Simple_clicked();

    void on_RB_Doble_clicked();

    void on_Btn_Aceptar_clicked();

    void on_TB_Letra_textChanged(const QString &arg1);

private:
    Ui::cframe *ui;

    lista<char> L; //no lleva asterisco en <tipo*> porque es primitivo
    nodo<char> *Actptr;
    nodo<char> *Ultimo;

    char Letra;

    pila<char> pil;//pila y cola son hijos de la clase lista
    cola<char> col;

    listaD<char> LD;
    nodoD<char> *actD;
    nodoD<char> *ultD;

    pilasD<char> pilD;
    colaD<char> colD;

    arbol<char> arbol;

    int h;
    int m=0;


};
#endif // CFRAME_H





