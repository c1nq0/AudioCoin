#ifndef TRANSACTIONDESCDIALOG_H
#define TRANSACTIONDESCDIALOG_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
    class TransactionDescDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class TransactionDescDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TransactionDescDialog(const QModelIndex &idx, QWidget *parent = 0);
    ~TransactionDescDialog();

private:
    Ui::TransactionDescDialog *ui;

private slots:
    void on_closeButton_clicked();
};

#endif // TRANSACTIONDESCDIALOG_H
