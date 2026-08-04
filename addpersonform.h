#ifndef ADDPERSONFORM_H
#define ADDPERSONFORM_H

#include <QWidget>

namespace Ui {
class AddPersonForm;
}

class AddPersonForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddPersonForm(QWidget *parent = nullptr);
    ~AddPersonForm();

signals:
    void personAdded(); // Сигнал об успешном добавлении

private slots:
    void onSaveClicked();
    void onCancelClicked();

private:
    Ui::AddPersonForm *ui;
};

#endif // ADDPERSONFORM_H
