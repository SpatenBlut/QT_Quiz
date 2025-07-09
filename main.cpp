#include <QApplication>
#include <QStackedWidget>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *page1 = new QWidget;
    {
        QLabel *label = new QLabel("Hallo Welt!");
        auto *lay = new QVBoxLayout(page1);
        label->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
        lay->addWidget(label);

        // Quize Buttons
        QPushButton *quiz1Button = new QPushButton("Quiz 1");
        QPushButton *quiz2Button = new QPushButton("Quiz 2");
        int quiz2start = 5;

        lay->addWidget(quiz1Button);
        lay->addWidget(quiz2Button);
    }

    // Quiz 1
    int Q1start = 2;
    int Q2start = 0;
    QWidget *page2 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page2);
        lay->addWidget(new QPushButton("quiz 1"));
        Q2start++;
    }

    QWidget *page3 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page3);
        lay->addWidget(new QPushButton("quiz 1.1"));
        Q2start++;
    }

    QWidget *page4 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page4);
        lay->addWidget(new QPushButton("quiz 1.2"));
        Q2start++;
    }

    QWidget *page5 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page5);
        lay->addWidget(new QPushButton("quiz 1.3"));
        Q2start++;
    }

    QWidget *page6 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page6);
        lay->addWidget(new QPushButton("quiz 1.4"));
        Q2start++;
    }

    QWidget *page7 = new QWidget;
    {
        auto *lay = new QVBoxLayout(page7);
        lay->addWidget(new QPushButton("quiz 1.5"));
        Q2start++;
    }

    // Quiz 2
    QWidget *Qpage1 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage1);
        lay->addWidget(new QPushButton("quiz 2"));
        Q2start++;
    }

    QWidget *Qpage2 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage2);
        lay->addWidget(new QPushButton("quiz 2.1"));
    }

    QWidget *Qpage3 = new QWidget;
    {
        auto *lay = new QVBoxLayout(Qpage3);
        lay->addWidget(new QPushButton("quiz 2.2"));
    }

    int Q1count = 1;
    int Q2count = 1;
    QStackedWidget *stack = new QStackedWidget;
    stack->addWidget(page1); // Index 0
    stack->addWidget(page2); // Index 1
    stack->addWidget(page3); // Index 2
    stack->addWidget(page4); // Index 3
    stack->addWidget(page5); // Index 4
    stack->addWidget(page6); // Index 5
    stack->addWidget(page7); // Index 6
    stack->addWidget(Qpage1);// Index 7
    stack->addWidget(Qpage2);// Index 8
    stack->addWidget(Qpage3);// Index 9


    // Page 1
    QPushButton *quiz1Button = page1->findChild<QPushButton*>("Quiz 1");
    if (!quiz1Button) {
        auto buttons = page1->findChildren<QPushButton*>();
        if (buttons.size() > 0) quiz1Button = buttons[0];
        Q1count++;
        Q2count++;
    }
    QObject::connect(quiz1Button, &QPushButton::clicked, [stack]() {
        stack->setCurrentIndex(1);
    });

    auto buttons = page1->findChildren<QPushButton*>();
    if (buttons.size() > 1) {
        QPushButton *quiz2Button = buttons[1];
        QObject::connect(quiz2Button, &QPushButton::clicked, [stack, Q2start]() {
            stack->setCurrentIndex(Q2start);
        });
        Q2count++;
    }

    // Start Quiz 1
    QPushButton *btn2 = page2->findChild<QPushButton*>();
    if (btn2) {
        QObject::connect(btn2, &QPushButton::clicked, [stack, Q1count]() {
            stack->setCurrentIndex(Q1count);
        });
        Q1count++;
        Q2count++;
    }

    QPushButton *btn3 = page3->findChild<QPushButton*>();
    if (btn3) {
        QObject::connect(btn3, &QPushButton::clicked, [stack, Q1count]() {
            stack->setCurrentIndex(Q1count);
        });
        Q1count++;
        Q2count++;
    }

    QPushButton *btn4 = page4->findChild<QPushButton*>();
    if (btn4) {
        QObject::connect(btn4, &QPushButton::clicked, [stack, Q1count]() {
            stack->setCurrentIndex(Q1count);
        });
        Q1count++;
        Q2count++;
    }

    QPushButton *btn5 = page5->findChild<QPushButton*>();
    if (btn5) {
        QObject::connect(btn5, &QPushButton::clicked, [stack, Q1count]() {
            stack->setCurrentIndex(Q1count);
        });
        Q1count++;
        Q2count++;

    }

    QPushButton *btn6 = page6->findChild<QPushButton*>();
    if (btn6) {
        QObject::connect(btn6, &QPushButton::clicked, [stack, Q1count]() {
            stack->setCurrentIndex(Q1count);
        });
        Q1count++;
        Q2count++;
    }

    // Start Quiz 2
    QPushButton *btnQ1 = Qpage1->findChild<QPushButton*>();
    if (btnQ1) {
        QObject::connect(btnQ1, &QPushButton::clicked, [stack, Q2count]() {
            stack->setCurrentIndex(Q2count);
        });
        Q2count++;
    }

    QPushButton *btnQ2 = Qpage2->findChild<QPushButton*>();
    if (btnQ2) {
        QObject::connect(btnQ2, &QPushButton::clicked, [stack, Q2count]() {
            stack->setCurrentIndex(Q2count);
        });
        Q2count++;
    }



    // Zeige Widget
    stack->setWindowTitle("Quiz-App");
    stack->resize(500, 300);
    stack->show();

    return app.exec();
}
