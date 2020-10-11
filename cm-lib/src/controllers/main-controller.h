#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <QObject>

namespace cm::controllers {


class Q_DECL_EXPORT MainController : public QObject {

Q_OBJECT

public:
    explicit MainController(QObject *parent = nullptr);

signals:

};

}

#endif // MAINCONTROLLER_H
