/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *mainStacked;
    QWidget *page_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *choiceAccountLabel;
    QPushButton *addAccountButton;
    QComboBox *choiceAccountComboBox;
    QPushButton *loginBtn;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *leftSmallLayout;
    QPushButton *changeAccountBtn;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *leftLargeLayout;
    QPushButton *profileOpenBtn;
    QSpacerItem *verticalSpacer_4;
    QStackedWidget *mainMainStacked;
    QWidget *page;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QPushButton *newPostBtn;
    QTextEdit *newPostTextEdit;
    QSpacerItem *verticalSpacer_8;
    QWidget *page_2;
    QVBoxLayout *rightLayout;
    QPushButton *logoutBtn;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_5;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *passwordLineEdit;
    QLabel *label_2;
    QLineEdit *loginLineEdit;
    QSpacerItem *verticalSpacer_6;
    QPushButton *login1Btn;
    QWidget *page_6;
    QGridLayout *gridLayout_4;
    QWebEngineView *loginBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1090, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainStacked = new QStackedWidget(centralwidget);
        mainStacked->setObjectName(QString::fromUtf8("mainStacked"));
        mainStacked->setLineWidth(1);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_2 = new QGridLayout(page_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 8, 0, 1, 4);

        choiceAccountLabel = new QLabel(page_3);
        choiceAccountLabel->setObjectName(QString::fromUtf8("choiceAccountLabel"));
        choiceAccountLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(choiceAccountLabel, 3, 0, 1, 1);

        addAccountButton = new QPushButton(page_3);
        addAccountButton->setObjectName(QString::fromUtf8("addAccountButton"));

        gridLayout_2->addWidget(addAccountButton, 3, 3, 1, 1);

        choiceAccountComboBox = new QComboBox(page_3);
        choiceAccountComboBox->setObjectName(QString::fromUtf8("choiceAccountComboBox"));

        gridLayout_2->addWidget(choiceAccountComboBox, 3, 1, 1, 2);

        loginBtn = new QPushButton(page_3);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));

        gridLayout_2->addWidget(loginBtn, 6, 1, 1, 2);

        mainStacked->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        horizontalLayout = new QHBoxLayout(page_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leftSmallLayout = new QVBoxLayout();
        leftSmallLayout->setObjectName(QString::fromUtf8("leftSmallLayout"));
        leftSmallLayout->setSizeConstraint(QLayout::SetFixedSize);
        changeAccountBtn = new QPushButton(page_4);
        changeAccountBtn->setObjectName(QString::fromUtf8("changeAccountBtn"));
        changeAccountBtn->setMinimumSize(QSize(60, 60));
        changeAccountBtn->setMaximumSize(QSize(60, 60));
        changeAccountBtn->setIconSize(QSize(60, 60));
        changeAccountBtn->setFlat(true);

        leftSmallLayout->addWidget(changeAccountBtn);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        leftSmallLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(leftSmallLayout);

        leftLargeLayout = new QVBoxLayout();
        leftLargeLayout->setObjectName(QString::fromUtf8("leftLargeLayout"));
        profileOpenBtn = new QPushButton(page_4);
        profileOpenBtn->setObjectName(QString::fromUtf8("profileOpenBtn"));
        profileOpenBtn->setMinimumSize(QSize(225, 0));
        profileOpenBtn->setMaximumSize(QSize(225, 16777215));

        leftLargeLayout->addWidget(profileOpenBtn);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        leftLargeLayout->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(leftLargeLayout);

        mainMainStacked = new QStackedWidget(page_4);
        mainMainStacked->setObjectName(QString::fromUtf8("mainMainStacked"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 500, 550));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 350));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        newPostBtn = new QPushButton(groupBox);
        newPostBtn->setObjectName(QString::fromUtf8("newPostBtn"));

        gridLayout_7->addWidget(newPostBtn, 1, 1, 1, 2);

        newPostTextEdit = new QTextEdit(groupBox);
        newPostTextEdit->setObjectName(QString::fromUtf8("newPostTextEdit"));

        gridLayout_7->addWidget(newPostTextEdit, 0, 0, 1, 4);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 0, 0, 1, 1);

        mainMainStacked->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mainMainStacked->addWidget(page_2);

        horizontalLayout->addWidget(mainMainStacked);

        rightLayout = new QVBoxLayout();
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        logoutBtn = new QPushButton(page_4);
        logoutBtn->setObjectName(QString::fromUtf8("logoutBtn"));
        logoutBtn->setMinimumSize(QSize(225, 0));
        logoutBtn->setMaximumSize(QSize(225, 16777215));

        rightLayout->addWidget(logoutBtn);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        rightLayout->addItem(verticalSpacer_5);


        horizontalLayout->addLayout(rightLayout);

        mainStacked->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_3 = new QGridLayout(page_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(page_5);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 4, 1, 1, 1);

        passwordLineEdit = new QLineEdit(page_5);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));

        gridLayout_3->addWidget(passwordLineEdit, 2, 1, 1, 1);

        label_2 = new QLabel(page_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        loginLineEdit = new QLineEdit(page_5);
        loginLineEdit->setObjectName(QString::fromUtf8("loginLineEdit"));

        gridLayout_3->addWidget(loginLineEdit, 1, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 0, 1, 1, 1);

        login1Btn = new QPushButton(page_5);
        login1Btn->setObjectName(QString::fromUtf8("login1Btn"));

        gridLayout_3->addWidget(login1Btn, 3, 1, 1, 1);

        mainStacked->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        gridLayout_4 = new QGridLayout(page_6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        loginBrowser = new QWebEngineView(page_6);
        loginBrowser->setObjectName(QString::fromUtf8("loginBrowser"));
        loginBrowser->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout_4->addWidget(loginBrowser, 0, 0, 1, 1);

        mainStacked->addWidget(page_6);

        gridLayout->addWidget(mainStacked, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1090, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        mainStacked->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        choiceAccountLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        addAccountButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        changeAccountBtn->setText(QString());
        profileOpenBtn->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        newPostBtn->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\203\320\261\320\273\320\270\320\272\320\276\320\262\320\260\321\202\321\214", nullptr));
        logoutBtn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        login1Btn->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
