#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void handleMouseClick();
    bool eventFilter(QObject* obj, QEvent* event);

private:
    Ui::MainWindow *ui;
    int clickCount;
};

#endif // MAINWINDOW_H
