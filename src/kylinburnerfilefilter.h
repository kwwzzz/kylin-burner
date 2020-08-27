#ifndef KYLINBURNERFILEFILTER_H
#define KYLINBURNERFILEFILTER_H

#include "k3bdataprojectmodel.h"
#include "k3bdatadoc.h"

#include <QWidget>
#include <QEvent>

namespace Ui {
class KylinBurnerFileFilter;
}

class KylinBurnerFileFilter : public QWidget
{
    Q_OBJECT

public:
    explicit KylinBurnerFileFilter(QWidget *parent = nullptr);
    ~KylinBurnerFileFilter();

public:
    bool eventFilter(QObject *obj, QEvent *event);

private:
    void labelCloseStyle(bool in);

private:
    K3b::DataDoc     *currentData, *oldData;
private:
    Ui::KylinBurnerFileFilter *ui;
};

#endif // KYLINBURNERFILEFILTER_H
