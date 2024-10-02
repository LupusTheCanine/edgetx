/*
 * Copyright (C) EdgeTX
 *
 * Based on code named
 *   opentx - https://github.com/opentx/opentx
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "serialdialog.h"
#include "ui_serialdialog.h"
#include <QtSerialPort/QSerialPortInfo>
#include <string>
//#include <QSerialPortInfo>

serialDialog::serialDialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::serialDialog)
{
    ui->setupUi(this);

    ui->cancelButton->setEnabled(false);
    QStringList serialNames={"COM-1","COM-2"};
    QStringList serialNamesLong={"COM-1","COM-2"};

    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos) {
      //QString s = info.portName() + " " + info.description();
      serialNames.append(info.portName());
      //info.ser
      //serialNamesLong << s;
    }
    char s[30];
    sprintf(s,"added %d devices",infos.count()); 
    QString QS(s);
    serialNames.append(QS);

    ui->AUX_1->clear();
    ui->AUX_2->clear();
    ui->AUX_1->insertItems(0,serialNames);
    ui->AUX_2->insertItems(0,serialNames);
}

serialDialog::~serialDialog()
{
    delete ui;
}

void serialDialog::on_cancelButton_clicked()
{

}
void serialDialog::on_okButton_clicked()
{

}