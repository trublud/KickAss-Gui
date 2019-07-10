import QtQuick 2.9

import "." as KickAssComponents
import "effects/" as KickAssEffects

Rectangle {
    color: KickAssComponents.Style.appWindowBorderColor
    height: 1

    KickAssEffects.ColorTransition {
        targetObj: parent
        blackColor: KickAssComponents.Style._b_appWindowBorderColor
        whiteColor: KickAssComponents.Style._w_appWindowBorderColor
    }
}
