import QtQuick 2.9

import "../components" as KickAssComponents

TextEdit {
    color: KickAssComponents.Style.defaultFontColor
    font.family: KickAssComponents.Style.fontRegular.name
    selectionColor: KickAssComponents.Style.textSelectionColor
    wrapMode: Text.Wrap
    readOnly: true
    selectByMouse: true
    // Workaround for https://bugreports.qt.io/browse/QTBUG-50587
    onFocusChanged: {
        if(focus === false)
            deselect()
    }
}
