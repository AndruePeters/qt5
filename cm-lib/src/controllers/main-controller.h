#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <string>

#include <QObject>
#include <QString>

namespace cm::controllers {


class Q_DECL_EXPORT MainController : public QObject {

Q_OBJECT
    Q_PROPERTY( QString ui_welcomeMessage READ welcomeMessageSTLConv  )

public:
    explicit MainController(QObject *parent = nullptr);
    std::string welcomeMessage = "This is the MainController";

    QString welcomeMessageSTLConv() const { return QString::fromStdString(welcomeMessage); }
    QString asf = "test message";

signals:

};

}

#endif // MAINCONTROLLER_H
