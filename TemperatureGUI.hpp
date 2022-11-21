#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QDebug>

class TemperatureGUI : public QWidget { // extend QWidget

private:
    QLineEdit * fEditFahr = new QLineEdit();
    QLabel *fLabelFahr = new QLabel{"Fahrenheit"};
    QLineEdit * fEditCel = new QLineEdit();
    QLabel *fLabelCel = new QLabel{"Celsius"};

public:
    TemperatureGUI() {
        QFont font{"Times New Roman"};
        font.setPointSize(16);
        fLabelFahr->setFont(font);
        fLabelCel->setFont(font);
        QGridLayout *layout = new QGridLayout;
        layout->addWidget(fEditFahr,1,1);
        layout->addWidget(fLabelFahr,1,2);
        layout->addWidget(fEditCel,2,1);
        layout->addWidget(fLabelCel,2,2);
        this->setLayout(layout);
    }
};