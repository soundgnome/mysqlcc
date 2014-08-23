/* Copyright (C) 2003 MySQL AB & Jorge del Conde

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU Library General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.
  
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Library General Public License for more details.
    
  You should have received a copy of the GNU Library General Public
  License along with this library; if not, write to the Free
  Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
  MA 02111-1307, USA 
*/
#ifndef CCREDITSBOX_H
#define CCREDITSBOX_H

#include <q3textedit.h>
//Added by qt3to4:
#include <Q3GridLayout>
#include <QLabel>
#include <Q3HBoxLayout>
#include <Q3VBoxLayout>
#include "CInfoDialog.h"

class Q3VBoxLayout; 
class Q3HBoxLayout; 
class Q3GridLayout; 
class QLabel;

class CCreditsWidget : public QWidget
{ 
  Q_OBJECT
    
public:
  CCreditsWidget( QWidget* parent = 0, const char* name = 0, Qt::WFlags fl = 0 );
  ~CCreditsWidget();
  
private:
  QLabel* TextLabel3_2;
  QLabel* TextLabel2_2;
  QLabel* TextLabel2;
  QLabel* TextLabel3;
  Q3GridLayout* creditsWidgetLayout;
};

class CCreditsBox : public CInfoDialog
{ 
  Q_OBJECT
    
public:
  CCreditsBox( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, Qt::WFlags fl = 0 );
  ~CCreditsBox();
  
private:
  CCreditsWidget* creditsWidget;
};

#endif // CCREDITSBOX_H
