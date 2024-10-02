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

#ifndef _SERIALDIALOG_H_
#define _SERIALDIALOG_H_
#define MAX_SERIAL 2
#include <QtWidgets>
#include "appdata.h"

class QComboBox;

namespace Ui {
    class serialDialog;
}

class serialDialog : public QDialog
{
    Q_OBJECT

  public:
    explicit serialDialog(QWidget *parent = 0);
    ~serialDialog();
    

  private:
    Ui::serialDialog *ui;
    QComboBox * serial[MAX_SERIAL];
    
  private slots:
    void on_cancelButton_clicked();
    void on_okButton_clicked();

};

#endif //_SERIALDIALOG_H_