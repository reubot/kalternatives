/***************************************************************************
 *   Copyright (C) 2004 by Juanjo                                          *
 *   juanjux@yahoo.es                                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef _KALTERNATIVES_H_
#define _KALTERNATIVES_H_

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <klistview.h>
#include <kpushbutton.h> 
#include <kcombobox.h> 
#include <qwidget.h>
#include <qlabel.h>
#include <qcheckbox.h>

#define KALT_VERSION "0.12"

class TreeItemElement;
class Alternative;
class Item;
class KProcess;
class AltItemElement;
class Kalternatives;
class AltController;
class AltFilesManager;





class Kalternatives : public QWidget
{
    Q_OBJECT

    bool m_bisRoot;
    AltFilesManager *m_mgr;
	KListView* m_optionsList;
	KListView* m_altList;
	KComboBox* m_statusCombo;
	QLabel* m_altTilte;
	QCheckBox* m_hideAlt;
	KPushButton* m_bApply;
	
	void updateData(AltFilesManager *mgr);
	void clearList(KListView* list);
	
public:
    Kalternatives();
    virtual ~Kalternatives();
	KListView *optionsList() const {return m_optionsList;}

private slots:
	void slotSelectAlternativesClicked(QListViewItem *);
    void slotApplyClicked();
	void slotHideAlternativesClicked();
    void slotAboutClicked();
    void die();
	void slotOptionClicked(QListViewItem *option);
	void slotAddClicked();
	void slotDeleteClicked();
	void slotPropertiesClicked();
};

#endif // _KALTERNATIVES_H_
