/******************************************************************************
 *
 * This file is part of Buccaneer's Den.
 *
 * Copyright (C) 2011 Vincent Roy http://code.google.com/p/buccaneers-den/
 *
 * Buccaneer's Den is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Buccaneer's Den is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Buccaneer's Den.  If not, see <http://www.gnu.org/licenses/>.
 *
 *****************************************************************************/
#ifndef LINEDEVICECONFIG_H
#define LINEDEVICECONFIG_H

#include <QDialog>

class QLineEdit;
class QComboBox;

class LineDeviceConfig : public QDialog
{
Q_OBJECT
public:
    explicit LineDeviceConfig(QWidget *parent = 0);
    void SetCurrentDevice(const QString &DeviceName);

signals:
    void ConfigChanged(void);

public slots:

private slots:
    void BaudsChanged(int index);
    void DataBitsChanged(int index);
    void ParityChanged(int index);
    void StopBitsChanged(int index);
    void FlowChanged(int index);
    void SelectFont();
    void ChooseTextColor();
    void ChooseBackgroundColor();

private:
    void InitBaudsBox(const QString &DeviceName);
    void InitDataBitsBox();
    void InitParityBox();
    void InitStopBitsBox();
    void InitFlowBox();

    QLineEdit *m_TextExample;
    QPushButton *m_ChangeFont;
    QPushButton *m_ChangeForeground;
    QPushButton *m_ChangeBackground;
    QComboBox *m_PossibleBauds;
    QComboBox *m_PossibleDataBits;
    QComboBox *m_PossibleParity;
    QComboBox *m_PossibleStopBits;
    QComboBox *m_PossibleFlow;
    QString m_CurrentDeviceName;
};

#endif // LINEDEVICECONFIG_H
