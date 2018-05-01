/*	Copyright 2008 Filipe Azevedo <pasnox@gmail.com>
	Copyright 2013 Theo Berkau <cwx@cyberwarriorx.com>

	This file is part of Yabause.

	Yabause is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Yabause is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Yabause; if not, write to the Free Software
	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
*/
#ifndef UISTVSETTING_H
#define UISTVSETTING_H

#include "ui_UISTVSetting.h"
#include "UIControllerSetting.h"
#include "QtYabause.h"

#include <QMap>

class QTimer;

class UISTVSetting : public UIControllerSetting, public Ui::UISTVSetting
{
	Q_OBJECT

public:
	UISTVSetting( PerInterface_struct* core, uint port, uint pad, uint perType, QWidget* parent = 0 );
	virtual ~UISTVSetting();

protected:

protected slots:
};

#endif // UISTVSetting_H
