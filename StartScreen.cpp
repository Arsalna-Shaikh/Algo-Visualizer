/**
 * @file StartScreen.cpp
 * @brief Implements the StartScreen class, the application's landing page.
 */

#include "StartScreen.h"
#include "ui_StartScreen.h"
#include "MainMenu.h"   // Include this if you want to open the MainMenu

StartScreen::StartScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StartScreen)
{
    ui->setupUi(this);
}

StartScreen::~StartScreen()
{
    delete ui;
}

void StartScreen::on_startButton_clicked()
{
    // Open the main menu
    MainMenu *menu = new MainMenu();
    menu->show();

    // Hide or close the start screen
    this->close();   // or this->hide();
}
