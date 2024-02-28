#include "cframe.h"
#include "ui_cframe.h"

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
    //PESTAÑAS ANTERIORES
    MostrarSimple();
    MPila();
    MCola();
    MostarDoble();
    ui->tab_2->setEnabled(false);
    ui->tab->setEnabled(false);

    //TDA
    ui->GB_Sub_Menu->setEnabled(false);
    ui->TB_Letra->setEnabled(false);
    ui->Btn_Aceptar->setEnabled(false);


}

cframe::~cframe()
{
    delete ui;
}

void cframe::MostrarSimple()//dato-direccion
{
    Actptr = L.PrimPtr;
    Ultimo = L.UltPtr;
    ui->TW_MOSTRAR->clear();
    ui->TW_MOSTRAR->setColumnCount(3);//tab 1 tw_mostar
    ui->TW_MOSTRAR->setRowCount(L.Cant);
    ui->TW_MOSTRAR->setHorizontalHeaderLabels(QStringList() << "LISTA_S dato"<<"ListaS Cant"<<"LS Ultimo");

    for (int f = 0; f < L.Cant; Actptr = Actptr->SigPtr, f++) {
        ui->TW_MOSTRAR->setItem(f, 0, new QTableWidgetItem(QString::fromStdString("") + Actptr->Dato));
        ui->TW_MOSTRAR->setItem(0, 1, new QTableWidgetItem(QString::number(L.Cant)));
        ui->TW_MOSTRAR->setItem(0, 2, new QTableWidgetItem(QString::fromStdString("") + Ultimo->Dato));
    }
}
void cframe::MostarDoble()//izquierda-act-derecha
{
    actD = LD.PrimPtr;
    ultD = LD.UltPtr;
    ui->TW_MOSTRAR->clear();
    ui->TW_MOSTRAR->setColumnCount(3);//tab 2 tw_doble
    ui->TW_MOSTRAR->setRowCount(LD.Cantidad);
    ui->TW_MOSTRAR->setHorizontalHeaderLabels(QStringList() << "LD Izquierda"<<"LD DATO "<<"LD Derecha");

    for (int f=0; f<LD.Cantidad; actD=actD->SigPtr, f++) {
        ui->TW_MOSTRAR->setItem(f,0,new QTableWidgetItem(QString::fromStdString("") + ((actD->AntPtr!=0)? actD->AntPtr->Dato : 0)));
        ui->TW_MOSTRAR->setItem(f,1,new QTableWidgetItem(QString::fromStdString("") + actD->Dato));
        ui->TW_MOSTRAR->setItem(f,2,new QTableWidgetItem(QString::fromStdString("") + ((actD->SigPtr!=0)? actD->SigPtr->Dato : 0)));
    }
}

void cframe::MPilaDoble()
{
    Actptr = pil.PrimPtr;
    Ultimo = pil.UltPtr;
    ui->TW_MOSTRAR->clear();
    ui->TW_MOSTRAR->setColumnCount(3);//tab 1 tw_mostrarpila
    ui->TW_MOSTRAR->setRowCount(pil.Cant) ;
    ui->TW_MOSTRAR->setHorizontalHeaderLabels(QStringList() <<"PILA Izquierda"<<"PILA dato"<<"PILA Derecha");

    for (int f = 0; f < pil.Cant; Actptr = Actptr->SigPtr, f++) {
        ui->TW_MOSTRAR->setItem(f, 0, new QTableWidgetItem(QString::fromStdString("") + Actptr->Dato));
        ui->TW_MOSTRAR->setItem(0, 1, new QTableWidgetItem(QString::fromStdString("") + Ultimo->Dato));
    }
}

void cframe::MPila()
{
    Actptr = pil.PrimPtr;
    Ultimo = pil.UltPtr;
    ui->TW_MOSTRAR->clear();
    ui->TW_MOSTRAR->setColumnCount(2);//tab 1 tw_mostrarpila
    ui->TW_MOSTRAR->setRowCount(pil.Cant) ;
    ui->TW_MOSTRAR->setHorizontalHeaderLabels(QStringList() <<"PILA dato"<<"PILA Ultimo");

    for (int f = 0; f < pil.Cant; Actptr = Actptr->SigPtr, f++) {
        ui->TW_MOSTRAR->setItem(f, 0, new QTableWidgetItem(QString::fromStdString("") + Actptr->Dato));
        ui->TW_MOSTRAR->setItem(0, 1, new QTableWidgetItem(QString::fromStdString("") + Ultimo->Dato));
    }
}

void cframe::MCola()
{
    Actptr = col.PrimPtr;
    Ultimo = col.UltPtr;
    ui->TW_MOSTRAR->clear();
    ui->TW_MOSTRAR->setColumnCount(2);//tab 1 tw_mostrarcola
    ui->TW_MOSTRAR->setRowCount(col.Cant);
    ui->TW_MOSTRAR->setHorizontalHeaderLabels(QStringList() <<"COLA dato"<<"Cola Ultimo");

    for (int f = 0; f < col.Cant; Actptr = Actptr->SigPtr, f++) {
        ui->TW_MOSTRAR->setItem(f, 0, new QTableWidgetItem(QString::fromStdString("") + Actptr->Dato));
        ui->TW_MOSTRAR->setItem(0, 1, new QTableWidgetItem(QString::fromStdString("") + Ultimo->Dato));
    }
}

void cframe::actualizarSubmenu(bool activado){
    ui->GB_Sub_Menu->setEnabled(activado);
    ui->TB_Letra->setEnabled(!activado);
    ui->Btn_Aceptar->setEnabled(!activado);
    ui->TB_Letra->clear();
    ui->RB_Simple->setCheckable(activado);
    ui->RB_Doble->setCheckable(activado);
    //cambios
    ui->RB_Doble->setChecked(false);
    ui->RB_Simple->setChecked(false);

    ui->RB_Cola->setChecked(false);
    ui->RB_Pila->setChecked(false);
    ui->RB_Lista->setChecked(false);
    ui->RB_Arbol->setChecked(false);


}

void cframe::on_RB_Lista_clicked()
{
    actualizarSubmenu(true);
}


void cframe::on_RB_Pila_clicked()
{
    actualizarSubmenu(true);
}


void cframe::on_RB_Cola_clicked()
{
    actualizarSubmenu(true);
}

void cframe::on_RB_Arbol_clicked()
{
    ui->GB_Sub_Menu->setEnabled(false);
    ui->TB_Letra->setEnabled(true);
    ui->Btn_Aceptar->setEnabled(false);
    ui->TB_Letra->clear();
    ui->RB_Simple->setCheckable(false);
    ui->RB_Doble->setCheckable(false);
}



void cframe::on_RB_Simple_clicked()
{
    ui->TB_Letra->setEnabled(true);
}

void cframe::on_RB_Doble_clicked()
{
    ui->TB_Letra->setEnabled(true);

}
//TAB 3

void cframe::on_Btn_Aceptar_clicked()
{
    if(ui->TB_Letra->text().isEmpty() && ui->tab_3->isActiveWindow()){
        QMessageBox::warning(this, "No funca", "No deje espacios vacios");
    }else{
        Letra=ui->TB_Letra->text().toStdString()[0];
        if(ui->RB_Lista->isChecked()){
            if(ui->RB_Simple->isChecked()){
                L.InsertarInicio(Letra);
                MostrarSimple();
            }else{
                LD.InsertarInicio(Letra);
                MostarDoble();
            }
        }else if(ui->RB_Cola->isChecked()){
            if(ui->CB_ORDEN->currentIndex()==0){
                col.Entra(Letra);
            }else{
                col.Sale(Letra);
            }
            MCola();
        }else if(ui->RB_Pila->isChecked()){
            if(ui->CB_ORDEN->currentIndex()==0){
                pil.Empujar(Letra);
            }else{
                pil.Sacar(Letra);
            }
            MPila();
        }else if(ui->RB_Arbol->isChecked()){

        }

    }
    ui->TB_Letra->clear();
    actualizarSubmenu(false);


}

void cframe::on_TB_Letra_textChanged(const QString &arg1)
{
    ui->Btn_Aceptar->setEnabled(true);
}

//TAB1
void cframe::on_btn_ingresar_clicked()
{
    if(ui->tbx_letra->text().isEmpty()){
        QMessageBox::warning(this, "No funca", "No deje espacios vacios");
    }else{
        Letra=ui->tbx_letra->text().toStdString()[0];
        if(ui->rb_ante->isChecked()){
            L.InsertarAntePneultima(Letra);
        }else if(ui->rb_elimiar->isChecked()){
            if(L.EliminarFin(Letra)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");

            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }
        }else if(ui->rb_inicio->isChecked()){
            L.InsertarInicio(Letra);
        }else if(ui->rb_inFin->isChecked()){
            L.InsertarFin(Letra);
        }else if(ui->rb_in2nd->isChecked()){
            L.Insertar2daPos(Letra);
        }else if(ui->rb_in3ra->isChecked()){
            L.Insertar3raPos(Letra);
        }else if(ui->rb_in4ta->isChecked()){
            L.Insertar4taPos(Letra);
        }else if(ui->rb_in4ta_2->isChecked()){
            L.InsertarPenultima(Letra);
        }else if(ui->rb_inPos->isChecked()){
            int p=ui->sp_pos->text().toInt();
            L.InsertarPosicion(Letra,p);
        }else if(ui->rb_inCrec->isChecked()){
            L.InsertarCreciente(Letra);
        }else if(ui->rb_delI->isChecked()){
            if( L.EliminarInicio(Letra)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");

            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }
        }else if(ui->rb_del2->isChecked()){
            if( L.Eliminar2daPos(Letra)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");

            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }
        }else if(ui->rb_del3->isChecked()){
            if( L.Eliminar3raPos(Letra)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");

            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }
        }else if(ui->rb_delAnt->isChecked()){
            if( L.EliminarAntePneultima(Letra)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");

            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }
        }else if(ui->rb_delPenultimo->isChecked()){
            if( L.EliminarPenultima(Letra)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");

            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }

        }else if(ui->rb_delPos->isChecked()){
            int p=ui->sp_del->text().toInt();
            if( L.EliminarPosicion(Letra,p)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");

            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }
        }else if(ui->rb_delCrec->isChecked()){
            if( L.EliminarCreciente(Letra)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");

            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }
        }else if(ui->rb_delDec->isChecked()){
            if( L.EliminarDecreciente(Letra)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");

            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }

        }else if(ui->rb_inPila->isChecked()){
             pil.Empujar(Letra);
             MPila();
        }else if(ui->rb_delPila->isChecked()){
            if( pil.Sacar(Letra)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");
            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }
            MPila();
        }else if(ui->rb_inCola->isChecked()){
             col.Entra(Letra);
             MCola();
        }else if(ui->rb_delCola->isChecked()){
            if( col.Sale(Letra)==true){
                QMessageBox::warning(this, "si funca", "Eliminado correctamente");
            }else{
                QMessageBox::warning(this, "no funca", "Los datos a eliminar no coinciden");
            }
            MCola();
        }else{
            QMessageBox::warning(this, "No funca", "Seleccione una opcion");
        }
        MostrarSimple();

    }
    ui->tbx_letra->clear();

}

//TAB 2
void cframe::on_pb_doble_clicked()
{
    if(ui->tbx_textD->text().isEmpty() && ui->tab_2->isActiveWindow()){
        QMessageBox::warning(this, "No funca", "No deje espacios vacios");
    }else{
        Letra=ui->tbx_textD->text().toStdString()[0];
        int p=ui->sp->text().toInt();
        if(ui->rb_inantd->isChecked()){

            LD.InsertarPosicion(Letra,p);

        }else if(ui->rb_delfind->isChecked()){
            if(LD.EliminarFin(Letra)){
                QMessageBox::warning(this, "si funca", "ELIMINADO");

            }else{
                QMessageBox::warning(this, "NO funca", "DATOS NO COINCIDEN");

            }
        }
        MostarDoble();
    }
    ui->tbx_textD->clear();

}




