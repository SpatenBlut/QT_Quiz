#include <QApplication>
#include <QStackedWidget>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    int points = 0;

    QWidget *page1 = new QWidget;
    {
        QLabel *label = new QLabel("Choose a Quiz");
        QLabel *label2 = new QLabel("Points: ");
        auto *lay = new QVBoxLayout(page1);
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 20px;}");
        lay->addWidget(label);
        lay->addWidget(label2);

        // Quize Buttons
        QPushButton *quiz1Button = new QPushButton("Quiz 1");
        QPushButton *quiz2Button = new QPushButton("Quiz 2");

        lay->addWidget(quiz1Button);
        lay->addWidget(quiz2Button);
    }

    // Quiz 1
    QWidget *page2 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page2);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            points = 0;
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                cout << "Correct\n";
                points++;
                cout << points;
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *page3 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page3);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *page4 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page4);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *page5 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page5);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *page6 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page6);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *page7 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page7);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *page8 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page8);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *page9 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page9);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *page10 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page10);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *page11 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page11);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *page12 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page12);
        lay->addWidget(new QPushButton("finish"));
    }

    // Quiz 2
    QWidget *Qpage1 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage1);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            points = 0;
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *Qpage2 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage2);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *Qpage3 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage3);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *Qpage4 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage4);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *Qpage5 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage5);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *Qpage6 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage6);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *Qpage7 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage7);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *Qpage8 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage8);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *Qpage9 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage9);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *Qpage10 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage10);
        QLabel *label = new QLabel("Question 1");
        QLineEdit *answer = new QLineEdit;
        QPushButton *next = new QPushButton("next");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        label->setStyleSheet("QLabel {font-size: 18px;}");
        next->setStyleSheet("background-color: #7c3aed");
        lay->addWidget(label);
        lay->addWidget(answer);
        lay->addWidget(next);
        QObject::connect(next, &QPushButton::clicked, [answer, &points]() {
            QString text = answer->text();
            string solution = "hello";
            cout << text.toStdString() << endl;
            if (text == solution) {
                points++;
                cout << points << endl;
                cout << "Correct\n";
            } else {
                cout << "Wrong" << endl;
            }
        });
    }

    QWidget *Qpage11 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage11);
        lay->addWidget(new QPushButton("finish"));
        next->setStyleSheet("background-color: #7c3aed");
    }

    QStackedWidget *stack = new QStackedWidget;
    stack->addWidget(page1);   // Index 0
    stack->addWidget(page2);   // Index 1
    stack->addWidget(page3);   // Index 2
    stack->addWidget(page4);   // Index 3
    stack->addWidget(page5);   // Index 4
    stack->addWidget(page6);   // Index 5
    stack->addWidget(page7);   // Index 6
    stack->addWidget(page8);   // Index 7
    stack->addWidget(page9);   // Index 8
    stack->addWidget(page10);  // Index 9
    stack->addWidget(page11);  // Index 10
    stack->addWidget(page12);  // Index 11
    stack->addWidget(Qpage1);  // Index 12
    stack->addWidget(Qpage2);  // Index 13
    stack->addWidget(Qpage3);  // Index 14
    stack->addWidget(Qpage4);  // Index 15
    stack->addWidget(Qpage5);  // Index 16
    stack->addWidget(Qpage6);  // Index 17
    stack->addWidget(Qpage7);  // Index 18
    stack->addWidget(Qpage8);  // Index 19
    stack->addWidget(Qpage9);  // Index 20
    stack->addWidget(Qpage10); // Index 21
    stack->addWidget(Qpage11); // Index 22

    // Page 1 - Quiz-Auswahl
    auto buttons = page1->findChildren<QPushButton*>();
    if (buttons.size() > 0) {
        QPushButton *quiz1Button = buttons[0];
        QObject::connect(quiz1Button, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(1); // Startet Quiz 1
        });
    }

    if (buttons.size() > 1) {
        QPushButton *quiz2Button = buttons[1];
        QObject::connect(quiz2Button, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(12); // Startet Quiz 2
        });
    }

    // Quiz 1 Navigation (page 1-12)
    QPushButton *btn2 = page2->findChild<QPushButton*>();
    if (btn2) {
        QObject::connect(btn2, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(2);
        });
    }

    QPushButton *btn3 = page3->findChild<QPushButton*>();
    if (btn3) {
        QObject::connect(btn3, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(3);
        });
    }

    QPushButton *btn4 = page4->findChild<QPushButton*>();
    if (btn4) {
        QObject::connect(btn4, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(4);
        });
    }

    QPushButton *btn5 = page5->findChild<QPushButton*>();
    if (btn5) {
        QObject::connect(btn5, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(5);
        });
    }

    QPushButton *btn6 = page6->findChild<QPushButton*>();
    if (btn6) {
        QObject::connect(btn6, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(6);
        });
    }

    QPushButton *btn7 = page7->findChild<QPushButton*>();
    if (btn7) {
        QObject::connect(btn7, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(7);
        });
    }

    QPushButton *btn8 = page8->findChild<QPushButton*>();
    if (btn8) {
        QObject::connect(btn8, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(8);
        });
    }

    QPushButton *btn9 = page9->findChild<QPushButton*>();
    if (btn9) {
        QObject::connect(btn9, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(9);
        });
    }

    QPushButton *btn10 = page10->findChild<QPushButton*>();
    if (btn10) {
        QObject::connect(btn10, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(10);
        });
    }

    QPushButton *btn11 = page11->findChild<QPushButton*>();
    if (btn11) {
        QObject::connect(btn11, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(11); // Quiz 1 Ende
        });
    }

    QPushButton *btn12 = page12->findChild<QPushButton*>();
    if (btn12) {
        QObject::connect(btn12, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(0); // Zurück zum Hauptmenü
        });
    }

    // Quiz 2 Navigation (Qpage1-Qpage11)
    QPushButton *btnQ1 = Qpage1->findChild<QPushButton*>();
    if (btnQ1) {
        QObject::connect(btnQ1, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(13);
        });
    }

    QPushButton *btnQ2 = Qpage2->findChild<QPushButton*>();
    if (btnQ2) {
        QObject::connect(btnQ2, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(14);
        });
    }

    QPushButton *btnQ3 = Qpage3->findChild<QPushButton*>();
    if (btnQ3) {
        QObject::connect(btnQ3, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(15);
        });
    }

    QPushButton *btnQ4 = Qpage4->findChild<QPushButton*>();
    if (btnQ4) {
        QObject::connect(btnQ4, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(16);
        });
    }

    QPushButton *btnQ5 = Qpage5->findChild<QPushButton*>();
    if (btnQ5) {
        QObject::connect(btnQ5, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(17);
        });
    }

    QPushButton *btnQ6 = Qpage6->findChild<QPushButton*>();
    if (btnQ6) {
        QObject::connect(btnQ6, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(18);
        });
    }

    QPushButton *btnQ7 = Qpage7->findChild<QPushButton*>();
    if (btnQ7) {
        QObject::connect(btnQ7, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(19);
        });
    }

    QPushButton *btnQ8 = Qpage8->findChild<QPushButton*>();
    if (btnQ8) {
        QObject::connect(btnQ8, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(20);
        });
    }

    QPushButton *btnQ9 = Qpage9->findChild<QPushButton*>();
    if (btnQ9) {
        QObject::connect(btnQ9, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(21);
        });
    }

    QPushButton *btnQ10 = Qpage10->findChild<QPushButton*>();
    if (btnQ10) {
        QObject::connect(btnQ10, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(22); // Quiz 2 Ende
        });
    }

    QPushButton *btnQ11 = Qpage11->findChild<QPushButton*>();
    if (btnQ11) {
        QObject::connect(btnQ11, &QPushButton::clicked, [stack]() {
            stack->setCurrentIndex(0); // Zurück zum Hauptmenü
        });
    }

    // Zeige Widget
    stack->setWindowTitle("Quiz-App");
    stack->resize(500, 300);
    stack->show();
    return app.exec();
}