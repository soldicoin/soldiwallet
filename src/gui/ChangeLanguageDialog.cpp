// Copyright (c) 2016 The Karbowanec developers
// Copyright (c) 2018 Soldi developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "ChangeLanguageDialog.h"
#include "ui_changelanguagedialog.h"
#include "Settings.h"

namespace WalletGui {

ChangeLanguageDialog::ChangeLanguageDialog(QWidget* _parent) : QDialog(_parent), m_ui(new Ui::ChangeLanguageDialog) {
  m_ui->setupUi(this);
}

ChangeLanguageDialog::~ChangeLanguageDialog() {
}

void ChangeLanguageDialog::initLangList() {
 QString currentlang = Settings::instance().getLanguage();

     int index = 0;

         if(currentlang.compare("it") == 0)
         {
             index = 1;
         }
         else if(currentlang.compare("uk") == 0)
         {
             index = 2;
         }

         m_ui->ChangeLangComboBox->setCurrentIndex(index);

}

QString ChangeLanguageDialog::getLang() const {

    QString lang;
     int n = m_ui->ChangeLangComboBox->currentIndex();
     if (n == 1)
         {
             lang = "it";
         }
         else if (n == 2)
         {
             lang = "uk";
         }
         else
         {
             lang = "en";
         }
     return lang;
}

}
