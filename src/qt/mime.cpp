// Copyright (c) 2014-2019, The KickAss Project
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <QtCore>
#include <QApplication>
#include <QFile>
#include <QTextStream>

#include "mime.h"
#include "utils.h"

void registerXdgMime(QApplication &app){
    // MacOS handled via Info.plist
    // Windows handled in the installer by rbrunner7

    QString xdg = QString(
            "[Desktop Entry]\n"
            "Name=KickAss GUI\n"
            "GenericName=KickAss-GUI\n"
            "X-GNOME-FullName=KickAss-GUI\n"
            "Comment=KickAss GUI\n"
            "Keywords=KickAss;\n"
            "Exec=%1 %u\n"
            "Terminal=false\n"
            "Type=Application\n"
            "Icon=kickass\n"
            "Categories=Network;GNOME;Qt;\n"
            "MimeType=x-scheme-handler/kickass;x-scheme-handler/kickassseed\n"
            "StartupNotify=true\n"
            "X-GNOME-Bugzilla-Bugzilla=GNOME\n"
            "X-GNOME-UsesNotifications=true\n"
    ).arg(app.applicationFilePath());

    QString appPath = QStandardPaths::writableLocation(QStandardPaths::ApplicationsLocation);
    QString filePath = QString("%1/kickass-gui.desktop").arg(appPath);

    qDebug() << QString("Writing %1").arg(filePath);
    QFile file(filePath);
    if(file.open(QIODevice::WriteOnly)){
        QTextStream out(&file); out << xdg << endl;
        file.close();
    }
    else
        file.close();
}
