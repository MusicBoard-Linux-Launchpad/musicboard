/********************************************************************************
** Form generated from reading UI file 'musicboard.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICBOARD_H
#define UI_MUSICBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicBoard
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *P7;
    QPushButton *P1;
    QPushButton *P2;
    QPushButton *P4;
    QPushButton *P3;
    QPushButton *P5;
    QPushButton *P8;
    QPushButton *P6;
    QPushButton *P11;
    QPushButton *P9;
    QPushButton *P12;
    QPushButton *P10;
    QPushButton *P13;
    QPushButton *P14;
    QPushButton *P15;
    QPushButton *P16;
    QPushButton *P17;
    QListView *File2;
    QTreeView *File1;
    QLineEdit *Error;
    QLineEdit *Path;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *C_B;
    QPushButton *D_B;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *F_B;
    QPushButton *G_B;
    QPushButton *A_B;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *C;
    QPushButton *D;
    QPushButton *E;
    QPushButton *F;
    QPushButton *G;
    QPushButton *A;
    QPushButton *B;
    QPushButton *C2;
    QPushButton *D2;
    QPushButton *E2;
    QPushButton *F2;
    QPushButton *G2;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *F2_B;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *C2_B;
    QPushButton *D2_B;
    QTextEdit *NumlockLabel;
    QFrame *line;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *K1;
    QPushButton *K2;
    QPushButton *K3;
    QPushButton *K4;
    QPushButton *Set1;
    QPushButton *Set2;
    QPushButton *Set3;
    QPushButton *Set4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Close;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *R1;
    QPushButton *R2;
    QPushButton *R3;
    QPushButton *R4;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *TrLeft;
    QPushButton *TrRight;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *R5;
    QPushButton *R6;
    QPushButton *R7;
    QPushButton *R8;
    QTextEdit *NumlockLabel_2;
    QSlider *VolSlider;
    QLabel *VolLabel;
    QFrame *line_2;
    QPushButton *HelpButton;
    QPushButton *AboutButton;
    QLabel *label_4;
    QFrame *About;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QPushButton *AboutClose;
    QLabel *label_5;
    QFrame *line_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MusicBoard)
    {
        if (MusicBoard->objectName().isEmpty())
            MusicBoard->setObjectName(QStringLiteral("MusicBoard"));
        MusicBoard->resize(861, 534);
        MusicBoard->setMinimumSize(QSize(861, 534));
        MusicBoard->setMaximumSize(QSize(861, 534));
        MusicBoard->setCursor(QCursor(Qt::UpArrowCursor));
        MusicBoard->setAutoFillBackground(false);
        MusicBoard->setStyleSheet(QLatin1String("#MusicBoard {\n"
"backdround-color: pink;\n"
"}"));
        MusicBoard->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        centralWidget = new QWidget(MusicBoard);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color: rgb(110, 110, 110);"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 40, 191, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        P7 = new QPushButton(gridLayoutWidget);
        P7->setObjectName(QStringLiteral("P7"));
        P7->setMinimumSize(QSize(50, 50));
        P7->setMaximumSize(QSize(50, 50));
        P7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P7, 3, 0, 1, 1);

        P1 = new QPushButton(gridLayoutWidget);
        P1->setObjectName(QStringLiteral("P1"));
        P1->setMinimumSize(QSize(50, 50));
        P1->setMaximumSize(QSize(50, 50));
        P1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P1, 1, 0, 1, 1);

        P2 = new QPushButton(gridLayoutWidget);
        P2->setObjectName(QStringLiteral("P2"));
        P2->setMinimumSize(QSize(50, 50));
        P2->setMaximumSize(QSize(50, 50));
        P2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P2, 1, 1, 1, 1);

        P4 = new QPushButton(gridLayoutWidget);
        P4->setObjectName(QStringLiteral("P4"));
        P4->setMinimumSize(QSize(50, 50));
        P4->setMaximumSize(QSize(50, 50));
        P4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P4, 2, 0, 1, 1);

        P3 = new QPushButton(gridLayoutWidget);
        P3->setObjectName(QStringLiteral("P3"));
        P3->setMinimumSize(QSize(50, 50));
        P3->setMaximumSize(QSize(50, 50));
        P3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P3, 1, 3, 1, 1);

        P5 = new QPushButton(gridLayoutWidget);
        P5->setObjectName(QStringLiteral("P5"));
        P5->setMinimumSize(QSize(50, 50));
        P5->setMaximumSize(QSize(50, 50));
        P5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P5, 2, 1, 1, 1);

        P8 = new QPushButton(gridLayoutWidget);
        P8->setObjectName(QStringLiteral("P8"));
        P8->setMinimumSize(QSize(50, 50));
        P8->setMaximumSize(QSize(50, 50));
        P8->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P8, 3, 1, 1, 1);

        P6 = new QPushButton(gridLayoutWidget);
        P6->setObjectName(QStringLiteral("P6"));
        P6->setMinimumSize(QSize(50, 50));
        P6->setMaximumSize(QSize(50, 50));
        P6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P6, 2, 3, 1, 1);

        P11 = new QPushButton(gridLayoutWidget);
        P11->setObjectName(QStringLiteral("P11"));
        P11->setMinimumSize(QSize(50, 50));
        P11->setMaximumSize(QSize(50, 50));
        P11->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P11, 0, 1, 1, 1);

        P9 = new QPushButton(gridLayoutWidget);
        P9->setObjectName(QStringLiteral("P9"));
        P9->setMinimumSize(QSize(50, 50));
        P9->setMaximumSize(QSize(50, 50));
        P9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P9, 3, 3, 1, 1);

        P12 = new QPushButton(gridLayoutWidget);
        P12->setObjectName(QStringLiteral("P12"));
        P12->setMinimumSize(QSize(50, 50));
        P12->setMaximumSize(QSize(50, 50));
        P12->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P12, 0, 3, 1, 1);

        P10 = new QPushButton(gridLayoutWidget);
        P10->setObjectName(QStringLiteral("P10"));
        P10->setMinimumSize(QSize(50, 50));
        P10->setMaximumSize(QSize(50, 50));
        P10->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(P10, 0, 0, 1, 1);

        P13 = new QPushButton(centralWidget);
        P13->setObjectName(QStringLiteral("P13"));
        P13->setGeometry(QRect(260, 40, 50, 50));
        P13->setMinimumSize(QSize(50, 50));
        P13->setMaximumSize(QSize(50, 50));
        P13->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        P14 = new QPushButton(centralWidget);
        P14->setObjectName(QStringLiteral("P14"));
        P14->setGeometry(QRect(260, 100, 50, 100));
        P14->setMinimumSize(QSize(50, 100));
        P14->setMaximumSize(QSize(50, 50));
        P14->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        P15 = new QPushButton(centralWidget);
        P15->setObjectName(QStringLiteral("P15"));
        P15->setGeometry(QRect(260, 210, 50, 100));
        P15->setMinimumSize(QSize(50, 100));
        P15->setMaximumSize(QSize(7, 50));
        P15->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        P16 = new QPushButton(centralWidget);
        P16->setObjectName(QStringLiteral("P16"));
        P16->setGeometry(QRect(100, 270, 70, 50));
        P16->setMinimumSize(QSize(70, 50));
        P16->setMaximumSize(QSize(50, 50));
        P16->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        P17 = new QPushButton(centralWidget);
        P17->setObjectName(QStringLiteral("P17"));
        P17->setGeometry(QRect(190, 270, 50, 50));
        P17->setMinimumSize(QSize(50, 50));
        P17->setMaximumSize(QSize(50, 50));
        P17->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        File2 = new QListView(centralWidget);
        File2->setObjectName(QStringLiteral("File2"));
        File2->setGeometry(QRect(660, 40, 131, 481));
        File2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        File1 = new QTreeView(centralWidget);
        File1->setObjectName(QStringLiteral("File1"));
        File1->setGeometry(QRect(410, 40, 241, 481));
        File1->setContextMenuPolicy(Qt::DefaultContextMenu);
        File1->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        File1->setFrameShape(QFrame::StyledPanel);
        Error = new QLineEdit(centralWidget);
        Error->setObjectName(QStringLiteral("Error"));
        Error->setGeometry(QRect(320, 140, 81, 28));
        Error->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Path = new QLineEdit(centralWidget);
        Path->setObjectName(QStringLiteral("Path"));
        Path->setGeometry(QRect(320, 210, 81, 28));
        Path->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(331, 180, 61, 20));
        label->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 110, 81, 20));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 90, 81, 20));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 330, 391, 191));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 83);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 0, 71, 92));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        C_B = new QPushButton(horizontalLayoutWidget_2);
        C_B->setObjectName(QStringLiteral("C_B"));
        C_B->setMinimumSize(QSize(20, 90));
        C_B->setMaximumSize(QSize(20, 90));
        C_B->setStyleSheet(QLatin1String("#C_B {\n"
"background-color: rgb(81, 38, 255);\n"
"}"));

        horizontalLayout_2->addWidget(C_B);

        D_B = new QPushButton(horizontalLayoutWidget_2);
        D_B->setObjectName(QStringLiteral("D_B"));
        D_B->setMinimumSize(QSize(20, 90));
        D_B->setMaximumSize(QSize(20, 90));
        D_B->setStyleSheet(QLatin1String("#D_B {\n"
"background-color: rgb(81, 38, 255);\n"
"}"));

        horizontalLayout_2->addWidget(D_B);

        horizontalLayoutWidget_3 = new QWidget(frame);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(120, 0, 91, 92));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        F_B = new QPushButton(horizontalLayoutWidget_3);
        F_B->setObjectName(QStringLiteral("F_B"));
        F_B->setMinimumSize(QSize(20, 90));
        F_B->setMaximumSize(QSize(20, 90));
        F_B->setStyleSheet(QLatin1String("#F_B {\n"
"background-color: rgb(81, 38, 255);\n"
"}"));

        horizontalLayout_3->addWidget(F_B);

        G_B = new QPushButton(horizontalLayoutWidget_3);
        G_B->setObjectName(QStringLiteral("G_B"));
        G_B->setMinimumSize(QSize(20, 90));
        G_B->setMaximumSize(QSize(20, 90));
        G_B->setStyleSheet(QLatin1String("#G_B {\n"
"background-color: rgb(81, 38, 255);\n"
"}"));

        horizontalLayout_3->addWidget(G_B);

        A_B = new QPushButton(horizontalLayoutWidget_3);
        A_B->setObjectName(QStringLiteral("A_B"));
        A_B->setMinimumSize(QSize(20, 90));
        A_B->setMaximumSize(QSize(20, 90));
        A_B->setStyleSheet(QLatin1String("#A_B {\n"
"background-color: rgb(81, 38, 255);\n"
"}"));

        horizontalLayout_3->addWidget(A_B);

        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 71, 381, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        C = new QPushButton(horizontalLayoutWidget);
        C->setObjectName(QStringLiteral("C"));
        C->setMinimumSize(QSize(20, 100));
        C->setMaximumSize(QSize(20, 100));
        C->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(C);

        D = new QPushButton(horizontalLayoutWidget);
        D->setObjectName(QStringLiteral("D"));
        D->setMinimumSize(QSize(20, 100));
        D->setMaximumSize(QSize(20, 100));
        D->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(D);

        E = new QPushButton(horizontalLayoutWidget);
        E->setObjectName(QStringLiteral("E"));
        E->setMinimumSize(QSize(20, 100));
        E->setMaximumSize(QSize(20, 100));
        E->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(E);

        F = new QPushButton(horizontalLayoutWidget);
        F->setObjectName(QStringLiteral("F"));
        F->setMinimumSize(QSize(20, 100));
        F->setMaximumSize(QSize(20, 100));
        F->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(F);

        G = new QPushButton(horizontalLayoutWidget);
        G->setObjectName(QStringLiteral("G"));
        G->setMinimumSize(QSize(20, 100));
        G->setMaximumSize(QSize(20, 100));
        G->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(G);

        A = new QPushButton(horizontalLayoutWidget);
        A->setObjectName(QStringLiteral("A"));
        A->setMinimumSize(QSize(20, 100));
        A->setMaximumSize(QSize(20, 100));
        A->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(A);

        B = new QPushButton(horizontalLayoutWidget);
        B->setObjectName(QStringLiteral("B"));
        B->setMinimumSize(QSize(20, 100));
        B->setMaximumSize(QSize(20, 100));
        B->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(B);

        C2 = new QPushButton(horizontalLayoutWidget);
        C2->setObjectName(QStringLiteral("C2"));
        C2->setMinimumSize(QSize(20, 100));
        C2->setMaximumSize(QSize(20, 100));
        C2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(C2);

        D2 = new QPushButton(horizontalLayoutWidget);
        D2->setObjectName(QStringLiteral("D2"));
        D2->setMinimumSize(QSize(20, 100));
        D2->setMaximumSize(QSize(20, 100));
        D2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(D2);

        E2 = new QPushButton(horizontalLayoutWidget);
        E2->setObjectName(QStringLiteral("E2"));
        E2->setMinimumSize(QSize(20, 100));
        E2->setMaximumSize(QSize(20, 100));
        E2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(E2);

        F2 = new QPushButton(horizontalLayoutWidget);
        F2->setObjectName(QStringLiteral("F2"));
        F2->setMinimumSize(QSize(20, 100));
        F2->setMaximumSize(QSize(20, 100));
        F2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(F2);

        G2 = new QPushButton(horizontalLayoutWidget);
        G2->setObjectName(QStringLiteral("G2"));
        G2->setMinimumSize(QSize(20, 100));
        G2->setMaximumSize(QSize(20, 100));
        G2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(G2);

        A->raise();
        C->raise();
        D->raise();
        E->raise();
        F->raise();
        G->raise();
        B->raise();
        C2->raise();
        D2->raise();
        E2->raise();
        F2->raise();
        G2->raise();
        horizontalLayoutWidget_5 = new QWidget(frame);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(330, 0, 41, 71));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        F2_B = new QPushButton(horizontalLayoutWidget_5);
        F2_B->setObjectName(QStringLiteral("F2_B"));
        F2_B->setMinimumSize(QSize(20, 90));
        F2_B->setMaximumSize(QSize(20, 90));
        F2_B->setStyleSheet(QLatin1String("#F2_B {\n"
"background-color: rgb(81, 38, 255);\n"
"}"));

        horizontalLayout_5->addWidget(F2_B);

        horizontalLayoutWidget_4 = new QWidget(frame);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(240, 0, 71, 71));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        C2_B = new QPushButton(horizontalLayoutWidget_4);
        C2_B->setObjectName(QStringLiteral("C2_B"));
        C2_B->setMinimumSize(QSize(20, 90));
        C2_B->setMaximumSize(QSize(20, 90));
        C2_B->setStyleSheet(QLatin1String("#C2_B {\n"
"background-color: rgb(81, 38, 255);\n"
"}"));

        horizontalLayout_4->addWidget(C2_B);

        D2_B = new QPushButton(horizontalLayoutWidget_4);
        D2_B->setObjectName(QStringLiteral("D2_B"));
        D2_B->setMinimumSize(QSize(20, 90));
        D2_B->setMaximumSize(QSize(20, 90));
        D2_B->setStyleSheet(QLatin1String("#D2_B {\n"
"background-color: rgb(81, 38, 255);\n"
"}"));

        horizontalLayout_4->addWidget(D2_B);

        NumlockLabel = new QTextEdit(centralWidget);
        NumlockLabel->setObjectName(QStringLiteral("NumlockLabel"));
        NumlockLabel->setGeometry(QRect(310, 240, 91, 91));
        NumlockLabel->setFrameShape(QFrame::NoFrame);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 326, 391, 7));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setStyleSheet(QStringLiteral("background-color: rgb(255, 159, 159);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(800, 60, 85, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        K1 = new QPushButton(verticalLayoutWidget);
        K1->setObjectName(QStringLiteral("K1"));
        K1->setMinimumSize(QSize(50, 50));
        K1->setMaximumSize(QSize(50, 50));
        K1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(K1);

        K2 = new QPushButton(verticalLayoutWidget);
        K2->setObjectName(QStringLiteral("K2"));
        K2->setMinimumSize(QSize(50, 50));
        K2->setMaximumSize(QSize(50, 50));
        K2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(K2);

        K3 = new QPushButton(verticalLayoutWidget);
        K3->setObjectName(QStringLiteral("K3"));
        K3->setMinimumSize(QSize(50, 50));
        K3->setMaximumSize(QSize(50, 50));
        K3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(K3);

        K4 = new QPushButton(verticalLayoutWidget);
        K4->setObjectName(QStringLiteral("K4"));
        K4->setMinimumSize(QSize(50, 50));
        K4->setMaximumSize(QSize(50, 50));
        K4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(K4);

        Set1 = new QPushButton(verticalLayoutWidget);
        Set1->setObjectName(QStringLiteral("Set1"));
        Set1->setMinimumSize(QSize(50, 50));
        Set1->setMaximumSize(QSize(50, 50));
        Set1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(Set1);

        Set2 = new QPushButton(verticalLayoutWidget);
        Set2->setObjectName(QStringLiteral("Set2"));
        Set2->setMinimumSize(QSize(50, 50));
        Set2->setMaximumSize(QSize(50, 50));
        Set2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(Set2);

        Set3 = new QPushButton(verticalLayoutWidget);
        Set3->setObjectName(QStringLiteral("Set3"));
        Set3->setMinimumSize(QSize(50, 50));
        Set3->setMaximumSize(QSize(50, 50));
        Set3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(Set3);

        Set4 = new QPushButton(verticalLayoutWidget);
        Set4->setObjectName(QStringLiteral("Set4"));
        Set4->setMinimumSize(QSize(50, 50));
        Set4->setMaximumSize(QSize(50, 50));
        Set4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(Set4);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(840, 0, 21, 21));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Close = new QPushButton(verticalLayoutWidget_2);
        Close->setObjectName(QStringLiteral("Close"));
        Close->setMinimumSize(QSize(17, 17));
        Close->setMaximumSize(QSize(17, 17));
        Close->setCursor(QCursor(Qt::UpArrowCursor));
        Close->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
""));

        verticalLayout_2->addWidget(Close);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 20, 31, 261));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        R1 = new QPushButton(verticalLayoutWidget_3);
        R1->setObjectName(QStringLiteral("R1"));
        R1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(23);
        sizePolicy1.setVerticalStretch(64);
        sizePolicy1.setHeightForWidth(R1->sizePolicy().hasHeightForWidth());
        R1->setSizePolicy(sizePolicy1);
        R1->setMinimumSize(QSize(17, 34));
        R1->setMaximumSize(QSize(17, 34));
        R1->setCursor(QCursor(Qt::UpArrowCursor));
        R1->setStyleSheet(QLatin1String("font: 7.4pt \"Cantarell\";\n"
"background-color: rgb(126, 255, 255);"));

        verticalLayout_3->addWidget(R1);

        R2 = new QPushButton(verticalLayoutWidget_3);
        R2->setObjectName(QStringLiteral("R2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(23);
        sizePolicy2.setVerticalStretch(74);
        sizePolicy2.setHeightForWidth(R2->sizePolicy().hasHeightForWidth());
        R2->setSizePolicy(sizePolicy2);
        R2->setMinimumSize(QSize(17, 34));
        R2->setMaximumSize(QSize(17, 34));
        R2->setStyleSheet(QStringLiteral("font: 7.4pt \"Cantarell\";"));

        verticalLayout_3->addWidget(R2);

        R3 = new QPushButton(verticalLayoutWidget_3);
        R3->setObjectName(QStringLiteral("R3"));
        sizePolicy2.setHeightForWidth(R3->sizePolicy().hasHeightForWidth());
        R3->setSizePolicy(sizePolicy2);
        R3->setMinimumSize(QSize(17, 34));
        R3->setMaximumSize(QSize(17, 34));
        R3->setStyleSheet(QStringLiteral("font: 7.4pt \"Cantarell\";"));

        verticalLayout_3->addWidget(R3);

        R4 = new QPushButton(verticalLayoutWidget_3);
        R4->setObjectName(QStringLiteral("R4"));
        sizePolicy2.setHeightForWidth(R4->sizePolicy().hasHeightForWidth());
        R4->setSizePolicy(sizePolicy2);
        R4->setMinimumSize(QSize(17, 34));
        R4->setMaximumSize(QSize(17, 34));
        R4->setStyleSheet(QStringLiteral("font: 7.4pt \"Cantarell\";"));

        verticalLayout_3->addWidget(R4);

        horizontalLayoutWidget_11 = new QWidget(centralWidget);
        horizontalLayoutWidget_11->setObjectName(QStringLiteral("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(5, 300, 91, 21));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        TrLeft = new QPushButton(horizontalLayoutWidget_11);
        TrLeft->setObjectName(QStringLiteral("TrLeft"));
        TrLeft->setMinimumSize(QSize(34, 17));
        TrLeft->setMaximumSize(QSize(34, 17));
        TrLeft->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));

        horizontalLayout_11->addWidget(TrLeft);

        TrRight = new QPushButton(horizontalLayoutWidget_11);
        TrRight->setObjectName(QStringLiteral("TrRight"));
        TrRight->setMinimumSize(QSize(34, 17));
        TrRight->setMaximumSize(QSize(34, 17));
        TrRight->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));

        horizontalLayout_11->addWidget(TrRight);

        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(40, 20, 21, 261));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        R5 = new QPushButton(verticalLayoutWidget_4);
        R5->setObjectName(QStringLiteral("R5"));
        sizePolicy1.setHeightForWidth(R5->sizePolicy().hasHeightForWidth());
        R5->setSizePolicy(sizePolicy1);
        R5->setMinimumSize(QSize(17, 34));
        R5->setMaximumSize(QSize(17, 34));
        R5->setStyleSheet(QStringLiteral("font: 7.4pt \"Cantarell\";"));

        verticalLayout_4->addWidget(R5);

        R6 = new QPushButton(verticalLayoutWidget_4);
        R6->setObjectName(QStringLiteral("R6"));
        sizePolicy2.setHeightForWidth(R6->sizePolicy().hasHeightForWidth());
        R6->setSizePolicy(sizePolicy2);
        R6->setMinimumSize(QSize(17, 34));
        R6->setMaximumSize(QSize(17, 34));
        R6->setStyleSheet(QStringLiteral("font: 7.4pt \"Cantarell\";"));

        verticalLayout_4->addWidget(R6);

        R7 = new QPushButton(verticalLayoutWidget_4);
        R7->setObjectName(QStringLiteral("R7"));
        sizePolicy2.setHeightForWidth(R7->sizePolicy().hasHeightForWidth());
        R7->setSizePolicy(sizePolicy2);
        R7->setMinimumSize(QSize(17, 34));
        R7->setMaximumSize(QSize(17, 34));
        R7->setStyleSheet(QStringLiteral("font: 7.4pt \"Cantarell\";"));

        verticalLayout_4->addWidget(R7);

        R8 = new QPushButton(verticalLayoutWidget_4);
        R8->setObjectName(QStringLiteral("R8"));
        sizePolicy2.setHeightForWidth(R8->sizePolicy().hasHeightForWidth());
        R8->setSizePolicy(sizePolicy2);
        R8->setMinimumSize(QSize(17, 34));
        R8->setMaximumSize(QSize(17, 34));
        R8->setStyleSheet(QStringLiteral("font: 7.4pt \"Cantarell\";"));

        verticalLayout_4->addWidget(R8);

        NumlockLabel_2 = new QTextEdit(centralWidget);
        NumlockLabel_2->setObjectName(QStringLiteral("NumlockLabel_2"));
        NumlockLabel_2->setGeometry(QRect(0, 270, 101, 31));
        NumlockLabel_2->setFrameShape(QFrame::NoFrame);
        VolSlider = new QSlider(centralWidget);
        VolSlider->setObjectName(QStringLiteral("VolSlider"));
        VolSlider->setGeometry(QRect(320, 65, 81, 21));
        VolSlider->setCursor(QCursor(Qt::ArrowCursor));
        VolSlider->setLayoutDirection(Qt::LeftToRight);
        VolSlider->setStyleSheet(QLatin1String("selection-background-color: rgb(209, 197, 255);\n"
"alternate-background-color: rgb(209, 197, 255);\n"
"gridline-color: rgb(209, 197, 255);\n"
"selection-color: rgb(209, 197, 255);\n"
"color: rgb(209, 197, 255);"));
        VolSlider->setOrientation(Qt::Horizontal);
        VolLabel = new QLabel(centralWidget);
        VolLabel->setObjectName(QStringLiteral("VolLabel"));
        VolLabel->setGeometry(QRect(320, 40, 81, 21));
        VolLabel->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 30, 841, 5));
        sizePolicy.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy);
        line_2->setMinimumSize(QSize(0, 5));
        line_2->setMaximumSize(QSize(16777215, 5));
        line_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 159, 159);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        HelpButton = new QPushButton(centralWidget);
        HelpButton->setObjectName(QStringLiteral("HelpButton"));
        HelpButton->setGeometry(QRect(10, 0, 41, 28));
        HelpButton->setCursor(QCursor(Qt::UpArrowCursor));
        AboutButton = new QPushButton(centralWidget);
        AboutButton->setObjectName(QStringLiteral("AboutButton"));
        AboutButton->setGeometry(QRect(60, 0, 61, 28));
        AboutButton->setCursor(QCursor(Qt::UpArrowCursor));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(390, -1, 81, 31));
        About = new QFrame(centralWidget);
        About->setObjectName(QStringLiteral("About"));
        About->setGeometry(QRect(430, 70, 191, 271));
        About->setFrameShape(QFrame::StyledPanel);
        About->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_5 = new QWidget(About);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(170, 0, 21, 21));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        AboutClose = new QPushButton(verticalLayoutWidget_5);
        AboutClose->setObjectName(QStringLiteral("AboutClose"));
        AboutClose->setMinimumSize(QSize(17, 17));
        AboutClose->setMaximumSize(QSize(17, 17));
        AboutClose->setCursor(QCursor(Qt::UpArrowCursor));
        AboutClose->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
""));

        verticalLayout_5->addWidget(AboutClose);

        label_5 = new QLabel(About);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 10, 81, 20));
        line_3 = new QFrame(About);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 40, 171, 5));
        sizePolicy.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy);
        line_3->setMinimumSize(QSize(0, 5));
        line_3->setMaximumSize(QSize(16777215, 5));
        line_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 159, 159);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        textEdit = new QTextEdit(About);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 50, 111, 91));
        textEdit->setFrameShadow(QFrame::Sunken);
        textEdit->setLineWidth(0);
        textEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        textEdit->setPlaceholderText(QStringLiteral(""));
        textEdit_2 = new QTextEdit(About);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(true);
        textEdit_2->setGeometry(QRect(40, 140, 111, 121));
        textEdit_2->setFrameShadow(QFrame::Sunken);
        textEdit_2->setLineWidth(0);
        textEdit_2->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_2->setReadOnly(true);
        textEdit_2->setTextInteractionFlags(Qt::TextSelectableByMouse);
        textEdit_2->setPlaceholderText(QStringLiteral(""));
        textEdit_3 = new QTextEdit(About);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setEnabled(true);
        textEdit_3->setGeometry(QRect(40, 170, 111, 91));
        textEdit_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textEdit_3->setFrameShadow(QFrame::Sunken);
        textEdit_3->setLineWidth(0);
        textEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        textEdit_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_3->setReadOnly(true);
        textEdit_3->setTextInteractionFlags(Qt::TextSelectableByMouse);
        textEdit_3->setPlaceholderText(QStringLiteral(""));
        MusicBoard->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MusicBoard);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 0, 0));
        menuBar->setMaximumSize(QSize(0, 0));
        MusicBoard->setMenuBar(menuBar);
        statusBar = new QStatusBar(MusicBoard);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setMaximumSize(QSize(0, 0));
        MusicBoard->setStatusBar(statusBar);

        retranslateUi(MusicBoard);

        QMetaObject::connectSlotsByName(MusicBoard);
    } // setupUi

    void retranslateUi(QMainWindow *MusicBoard)
    {
        MusicBoard->setWindowTitle(QApplication::translate("MusicBoard", "MusicBoard", Q_NULLPTR));
        P7->setText(QApplication::translate("MusicBoard", "P7", Q_NULLPTR));
        P7->setShortcut(QApplication::translate("MusicBoard", "End", Q_NULLPTR));
        P1->setText(QApplication::translate("MusicBoard", "P1", Q_NULLPTR));
        P1->setShortcut(QApplication::translate("MusicBoard", "Home", Q_NULLPTR));
        P2->setText(QApplication::translate("MusicBoard", "P2", Q_NULLPTR));
        P2->setShortcut(QApplication::translate("MusicBoard", "Up", Q_NULLPTR));
        P4->setText(QApplication::translate("MusicBoard", "P4", Q_NULLPTR));
        P4->setShortcut(QApplication::translate("MusicBoard", "Left", Q_NULLPTR));
        P3->setText(QApplication::translate("MusicBoard", "P3", Q_NULLPTR));
        P3->setShortcut(QApplication::translate("MusicBoard", "PgUp", Q_NULLPTR));
        P5->setText(QApplication::translate("MusicBoard", "P5", Q_NULLPTR));
        P5->setShortcut(QApplication::translate("MusicBoard", "Clear", Q_NULLPTR));
        P8->setText(QApplication::translate("MusicBoard", "P8", Q_NULLPTR));
        P8->setShortcut(QApplication::translate("MusicBoard", "Down", Q_NULLPTR));
        P6->setText(QApplication::translate("MusicBoard", "P6", Q_NULLPTR));
        P6->setShortcut(QApplication::translate("MusicBoard", "Right", Q_NULLPTR));
        P11->setText(QApplication::translate("MusicBoard", "P11", Q_NULLPTR));
        P11->setShortcut(QApplication::translate("MusicBoard", "/", Q_NULLPTR));
        P9->setText(QApplication::translate("MusicBoard", "P9", Q_NULLPTR));
        P9->setShortcut(QApplication::translate("MusicBoard", "PgDown", Q_NULLPTR));
        P12->setText(QApplication::translate("MusicBoard", "P12", Q_NULLPTR));
        P12->setShortcut(QApplication::translate("MusicBoard", "*", Q_NULLPTR));
        P10->setText(QApplication::translate("MusicBoard", "P10", Q_NULLPTR));
        P10->setShortcut(QApplication::translate("MusicBoard", "NumLock", Q_NULLPTR));
        P13->setText(QApplication::translate("MusicBoard", "P13", Q_NULLPTR));
        P13->setShortcut(QApplication::translate("MusicBoard", "-", Q_NULLPTR));
        P14->setText(QApplication::translate("MusicBoard", "P14", Q_NULLPTR));
        P14->setShortcut(QApplication::translate("MusicBoard", "+", Q_NULLPTR));
        P15->setText(QApplication::translate("MusicBoard", "P15", Q_NULLPTR));
        P15->setShortcut(QApplication::translate("MusicBoard", "Enter", Q_NULLPTR));
        P16->setText(QApplication::translate("MusicBoard", "P16", Q_NULLPTR));
        P16->setShortcut(QApplication::translate("MusicBoard", "Ins", Q_NULLPTR));
        P17->setText(QApplication::translate("MusicBoard", "P17", Q_NULLPTR));
        P17->setShortcut(QApplication::translate("MusicBoard", "Del", Q_NULLPTR));
        label->setText(QApplication::translate("MusicBoard", " Filepath:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MusicBoard", "  Selected:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MusicBoard", "    Button", Q_NULLPTR));
        C_B->setText(QString());
        C_B->setShortcut(QApplication::translate("MusicBoard", "2", Q_NULLPTR));
        D_B->setText(QString());
        D_B->setShortcut(QApplication::translate("MusicBoard", "3", Q_NULLPTR));
        F_B->setText(QString());
        F_B->setShortcut(QApplication::translate("MusicBoard", "5", Q_NULLPTR));
        G_B->setText(QString());
        G_B->setShortcut(QApplication::translate("MusicBoard", "6", Q_NULLPTR));
        A_B->setText(QString());
        A_B->setShortcut(QApplication::translate("MusicBoard", "7", Q_NULLPTR));
        C->setText(QString());
        C->setShortcut(QApplication::translate("MusicBoard", "Q", Q_NULLPTR));
        D->setText(QString());
        D->setShortcut(QApplication::translate("MusicBoard", "W", Q_NULLPTR));
        E->setText(QString());
        E->setShortcut(QApplication::translate("MusicBoard", "E", Q_NULLPTR));
        F->setText(QString());
        F->setShortcut(QApplication::translate("MusicBoard", "R", Q_NULLPTR));
        G->setText(QString());
        G->setShortcut(QApplication::translate("MusicBoard", "T", Q_NULLPTR));
        A->setText(QString());
        A->setShortcut(QApplication::translate("MusicBoard", "Y", Q_NULLPTR));
        B->setText(QString());
        B->setShortcut(QApplication::translate("MusicBoard", "U", Q_NULLPTR));
        C2->setText(QString());
        C2->setShortcut(QApplication::translate("MusicBoard", "I", Q_NULLPTR));
        D2->setText(QString());
        D2->setShortcut(QApplication::translate("MusicBoard", "O", Q_NULLPTR));
        E2->setText(QString());
        E2->setShortcut(QApplication::translate("MusicBoard", "P", Q_NULLPTR));
        F2->setText(QString());
        F2->setShortcut(QApplication::translate("MusicBoard", "[", Q_NULLPTR));
        G2->setText(QString());
        G2->setShortcut(QApplication::translate("MusicBoard", "]", Q_NULLPTR));
        F2_B->setText(QString());
        F2_B->setShortcut(QApplication::translate("MusicBoard", "=", Q_NULLPTR));
        C2_B->setText(QString());
        C2_B->setShortcut(QApplication::translate("MusicBoard", "9", Q_NULLPTR));
        D2_B->setText(QString());
        D2_B->setShortcut(QApplication::translate("MusicBoard", "0", Q_NULLPTR));
        NumlockLabel->setHtml(QApplication::translate("MusicBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#babdb6;\">NumLock has to be OFF</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#babdb6;\"><br /></p></body></html>", Q_NULLPTR));
        K1->setText(QApplication::translate("MusicBoard", "K1", Q_NULLPTR));
        K1->setShortcut(QApplication::translate("MusicBoard", "H", Q_NULLPTR));
        K2->setText(QApplication::translate("MusicBoard", "K2", Q_NULLPTR));
        K2->setShortcut(QApplication::translate("MusicBoard", "J", Q_NULLPTR));
        K3->setText(QApplication::translate("MusicBoard", "K3", Q_NULLPTR));
        K3->setShortcut(QApplication::translate("MusicBoard", "K", Q_NULLPTR));
        K4->setText(QApplication::translate("MusicBoard", "K4", Q_NULLPTR));
        K4->setShortcut(QApplication::translate("MusicBoard", "L", Q_NULLPTR));
        Set1->setText(QApplication::translate("MusicBoard", "Set1", Q_NULLPTR));
        Set1->setShortcut(QApplication::translate("MusicBoard", "N", Q_NULLPTR));
        Set2->setText(QApplication::translate("MusicBoard", "Set2", Q_NULLPTR));
        Set2->setShortcut(QApplication::translate("MusicBoard", "M", Q_NULLPTR));
        Set3->setText(QApplication::translate("MusicBoard", "Set3", Q_NULLPTR));
        Set3->setShortcut(QApplication::translate("MusicBoard", ",", Q_NULLPTR));
        Set4->setText(QApplication::translate("MusicBoard", "Set4", Q_NULLPTR));
        Set4->setShortcut(QApplication::translate("MusicBoard", ".", Q_NULLPTR));
        Close->setText(QApplication::translate("MusicBoard", "X", Q_NULLPTR));
        Close->setShortcut(QApplication::translate("MusicBoard", "NumLock", Q_NULLPTR));
        R1->setText(QApplication::translate("MusicBoard", "R1", Q_NULLPTR));
        R2->setText(QApplication::translate("MusicBoard", "R2", Q_NULLPTR));
        R2->setShortcut(QApplication::translate("MusicBoard", "S", Q_NULLPTR));
        R3->setText(QApplication::translate("MusicBoard", "R3", Q_NULLPTR));
        R3->setShortcut(QApplication::translate("MusicBoard", "D", Q_NULLPTR));
        R4->setText(QApplication::translate("MusicBoard", "R4", Q_NULLPTR));
        R4->setShortcut(QApplication::translate("MusicBoard", "F", Q_NULLPTR));
        TrLeft->setText(QApplication::translate("MusicBoard", "<-", Q_NULLPTR));
        TrLeft->setShortcut(QApplication::translate("MusicBoard", "Del", Q_NULLPTR));
        TrRight->setText(QApplication::translate("MusicBoard", "->", Q_NULLPTR));
        TrRight->setShortcut(QApplication::translate("MusicBoard", "Del", Q_NULLPTR));
        R5->setText(QApplication::translate("MusicBoard", "R5", Q_NULLPTR));
        R5->setShortcut(QApplication::translate("MusicBoard", "Z", Q_NULLPTR));
        R6->setText(QApplication::translate("MusicBoard", "R6", Q_NULLPTR));
        R6->setShortcut(QApplication::translate("MusicBoard", "X", Q_NULLPTR));
        R7->setText(QApplication::translate("MusicBoard", "R7", Q_NULLPTR));
        R7->setShortcut(QApplication::translate("MusicBoard", "C", Q_NULLPTR));
        R8->setText(QApplication::translate("MusicBoard", "R8", Q_NULLPTR));
        R8->setShortcut(QApplication::translate("MusicBoard", "V", Q_NULLPTR));
        NumlockLabel_2->setHtml(QApplication::translate("MusicBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#d3d7cf;\"> Only </span><span style=\" font-size:10pt; color:#d3d7cf;\">WAV</span><span style=\" font-size:8pt; color:#d3d7cf;\"> files</span></p></body></html>", Q_NULLPTR));
        VolLabel->setText(QApplication::translate("MusicBoard", "    Volume", Q_NULLPTR));
        HelpButton->setText(QApplication::translate("MusicBoard", "Help", Q_NULLPTR));
        AboutButton->setText(QApplication::translate("MusicBoard", "About", Q_NULLPTR));
        label_4->setText(QApplication::translate("MusicBoard", "MusicBoard", Q_NULLPTR));
        AboutClose->setText(QApplication::translate("MusicBoard", "X", Q_NULLPTR));
        AboutClose->setShortcut(QApplication::translate("MusicBoard", "NumLock", Q_NULLPTR));
        label_5->setText(QApplication::translate("MusicBoard", "MusicBoard", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("MusicBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">MusicBoard  </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Linux Launchpad</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("MusicBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Contributors</p></body></html>", Q_NULLPTR));
        textEdit_3->setHtml(QApplication::translate("MusicBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Single Coil</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MusicBoard: public Ui_MusicBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICBOARD_H
