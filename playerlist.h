#ifndef _PLAYERLIST_H_
#define _PLAYERLIST_H_
#include <QTreeWidget>


class Displaywin;
class Playerlist: public QTreeWidget
{
    Q_OBJECT
public:
    Playerlist(QWidget *parent = NULL);
    ~Playerlist();
    QTreeWidgetItem* createItem(QString text);

signals:
    void toItem(QTreeWidgetItem *);


private:
    QTreeWidgetItem *m_cameraItems;
    QTreeWidgetItem *items1_1;
    QTreeWidgetItem *items1_2;

};


#endif
