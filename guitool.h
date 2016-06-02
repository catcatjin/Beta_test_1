#ifndef GUITOOL_H
#define GUITOOL_H

#include <QPushButton>
#include <QProgressBar>
#include <QString>

enum ButtonColor{
    RED_BTN = 0,
    GREEN_BTN,
    BULE_BTN,
    YELLOW_BTN,
    WHITE_BTN,
    GRAY_BTN,
    RED_XBTN,
    GREEN_XBTN,
    BULE_XBTN,
    YELLOW_XBTN,
    WHITE_XBTN,
    GRAY_XBTN,
    DEFAULT_BTN = 19,
};

enum ButtonID{
    TEST_BTN = 0,
    UART2_BTN = 1,
    UART3_BTN = 2,
    UART4_BTN = 3,
    UART5_BTN = 4,
    USB1_BTN = 5,
    USB2_BTN = 6,
    USB3_BTN = 7,
    USBOTG_BTN = 8,
    TFT_BTN = 9,
    VGA2_BTN = 10,
    VIDEO_BTN = 11,
    AUDIO_BTN = 12,
    MIC_BTN = 13,
    LAN1_BTN = 14,
    MEM_BTN = 15,
    EMMC_BTN = 16,
    MICROSD_BTN = 17,
    SD2_BTN = 18,
    FRAM_BTN = 19,
    SRAM_BTN = 20,
    GPO_BTN = 21,
    GPI_BTN = 22,
    PIC_BTN = 23,
    SW_BTN = 24,
    RTC1_BTN = 25,
    RTC2_BTN = 26,
    WMAC_BTN = 27,
    MKEXT4_BTN = 28,
    FAN_BTN = 29,
    UART1X_BTN = 30,
    GAME_BTN = 31,
    TSS_BTN = 32,
    BIMAGE_BTN = 33,
    SATA_BTN,
    CPU_BTN,
    GPU_BTN,
    // [Start] Add new button here

    // [End] Add
};

enum PBarType{
    PBAR_TYPE0 = 0,
    PBAR_TYPE1,
};

class GUITool{
public:
    GUITool();
    ~GUITool();
    void SetButtonColor(QPushButton *btn, int color);
    void SetProgress(QProgressBar *pbar, int type);
    void GetButtonColor(QPushButton *btn, QColor *color);

private:
    QString btnColorStr[20];
    QString pBarColorStr[20];
};


#endif // GUITOOL_H
