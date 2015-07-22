#include "dialog.h"
#include "ui_dialog.h"
#include <QGraphicsTextItem>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QGraphicsScene* scene = new QGraphicsScene( this );
    ui->graphicsView->setScene( scene );

    // creates a text item and adds it up to the scene
    QGraphicsTextItem* text = new QGraphicsTextItem;
    text->setTextInteractionFlags( Qt::TextEditorInteraction );
    text->setPlainText( "Hello World!" );
    scene->addItem( text );

}

Dialog::~Dialog()
{
    delete ui;
}
