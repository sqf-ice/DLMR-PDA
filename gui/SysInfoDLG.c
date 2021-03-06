/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.20                          *
*        Compiled Mar 19 2013, 15:01:00                              *
*        (c) 2013 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"
#include "includes.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#if 0
#define ID_WINDOW_0 (GUI_ID_USER + 0x00)
#define ID_TEXT_0   (GUI_ID_USER + 0x01)
#define ID_TEXT_1   (GUI_ID_USER + 0x02)
#define ID_TEXT_2   (GUI_ID_USER + 0x03)
#define ID_TEXT_3   (GUI_ID_USER + 0x04)
#define ID_TEXT_4   (GUI_ID_USER + 0x05)
#define ID_TEXT_5   (GUI_ID_USER + 0x0C)
#define ID_TEXT_6   (GUI_ID_USER + 0x0D)
#define ID_TEXT_7   (GUI_ID_USER + 0x0E)

#define ID_EDIT_0   (GUI_ID_USER + 0x11)
#define ID_EDIT_1   (GUI_ID_USER + 0x12)
#define ID_EDIT_2   (GUI_ID_USER + 0x13)
#define ID_EDIT_3   (GUI_ID_USER + 0x14)
#define ID_EDIT_4   (GUI_ID_USER + 0x15)
#define ID_EDIT_5   (GUI_ID_USER + 0x16)

#define ID_BUTTON_0 (GUI_ID_USER + 0x18)
#define ID_BUTTON_1 (GUI_ID_USER + 0x19)
#define ID_BUTTON_2 (GUI_ID_USER + 0x1A)
#define ID_BUTTON_3 (GUI_ID_USER + 0x1B)
#endif



/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "SysInfo",   ID_WINDOW_0, 0,    0,   240, 295, 0, 0x0, 0 },
  { TEXT_CreateIndirect, MM_Vtg,        ID_TEXT_0,   12,   12,  120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, LCDModule,      ID_TEXT_1,   12,   42, 120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, PLCModule,      ID_TEXT_2,   12,   72, 120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, HardVersion,   ID_TEXT_3,   12,   132, 120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, SiModule,       ID_TEXT_4,   12,   102,120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, SotfVersion,   ID_TEXT_5,   12,   162, 120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect, SDInfo,    ID_TEXT_6,   12,   192, 120, 20, 0, 0x0, 0 },
  //{ TEXT_CreateIndirect, ,        ID_TEXT_7,   12,   222, 120, 20, 0, 0x0, 0 },
    
  { EDIT_CreateIndirect, "vtg",         ID_EDIT_0,   125,  10,  100, 20, 0, 0x64, 0 },
  { EDIT_CreateIndirect, "lcd",         ID_EDIT_1,   125,  40,  100, 20, EDIT_CF_HCENTER, 0x64, 0 },
  { EDIT_CreateIndirect, "plc",         ID_EDIT_2,   125,  70,  100, 20, EDIT_CF_HCENTER, 0x64, 0 },
  { EDIT_CreateIndirect, "si4438",      ID_EDIT_3,   125,  100, 100, 20, EDIT_CF_HCENTER, 0x64, 0 },
  { EDIT_CreateIndirect, "pcb",         ID_EDIT_4,   125,  130, 100, 20, EDIT_CF_HCENTER, 0x64, 0 },
  { EDIT_CreateIndirect, "soft",        ID_EDIT_5,   125,  160, 100, 20, EDIT_CF_HCENTER, 0x64, 0 },
    
  { BUTTON_CreateIndirect, Update,      ID_BUTTON_0, 10,   262, 55, 25, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, Quit,        ID_BUTTON_1, 175,  262, 55, 25, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "F1",        ID_BUTTON_2, 125,  190, 100, 20, 0, 0x0, 0 },
  //{ BUTTON_CreateIndirect, "F2",        ID_BUTTON_3, 145,  220, 80, 20, 0, 0x0, 0 },
};




/*********************************************************************
*
*       Static code
*
**********************************************************************
*/



// USER START (Optionally insert additional static code)
// USER END
static void _init_SysInfoDLg(WM_MESSAGE *pMsg)
{
    WM_HWIN hItem;
    u8 tmpbuf[32];
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    //EDIT_SetText(hItem, "123");
    WM_DisableWindow(hItem);
    EDIT_SetFloatMode(hItem,((g_sys_ctrl.pwrValue*3.3)/2048),0,99999,2,
                             GUI_EDIT_SUPPRESS_LEADING_ZEROES);
    //WIDGET_SetEffect(hItem,&WIDGET_Effect_None);
    

    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_1);
    if(1 == LCD_GetID())
    {
        EDIT_SetText(hItem, "ILI9341");
    }
    else
    {
        EDIT_SetText(hItem, HardwareErr);
    }
    //WIDGET_SetEffect(hItem,&WIDGET_Effect_None);
    WM_DisableWindow(hItem);

    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_2);
    EDIT_SetText(hItem, HardwareOK);
    //WIDGET_SetEffect(hItem,&WIDGET_Effect_None);
    WM_DisableWindow(hItem);

    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_3);
    if(SI_TYPE == SI_Read_ID())
    {
        EDIT_SetText(hItem, "SI4438");
    }
    else
    {
        EDIT_SetText(hItem, HardwareErr);
    }
    //WIDGET_SetEffect(hItem,&WIDGET_Effect_None);
    WM_DisableWindow(hItem);

    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_4);
    sprintf(tmpbuf, "v%d.%d", HARDWARE_VERSION / 10, HARDWARE_VERSION % 10);
    EDIT_SetText(hItem, tmpbuf);
    //WIDGET_SetEffect(hItem,&WIDGET_Effect_None);
    WM_DisableWindow(hItem);

    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_5);
    sprintf(tmpbuf, "v%d.%d", SOFTWARE_VERSION / 10, SOFTWARE_VERSION % 10);
    EDIT_SetText(hItem, tmpbuf);
    //WIDGET_SetEffect(hItem,&WIDGET_Effect_None);
    WM_DisableWindow(hItem);

    hItem = WM_GetDialogItem(pMsg->hWin,ID_BUTTON_0);
    BUTTON_SetBkColor(hItem, 0, GUI_GREEN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);


    hItem = WM_GetDialogItem(pMsg->hWin,ID_BUTTON_1);
    BUTTON_SetBkColor(hItem, 0, GUI_YELLOW);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    hItem = WM_GetDialogItem(pMsg->hWin,ID_BUTTON_2);
    BUTTON_SetBkColor(hItem, 0, GUI_CYAN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
#if 0
    hItem = WM_GetDialogItem(pMsg->hWin,ID_BUTTON_3);
    BUTTON_SetBkColor(hItem, 0, GUI_CYAN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
#endif
}

static void SID_DelHandle(void)
{
    WM_DeleteWindow(g_hWin_SysInfo);
    g_hWin_SysInfo = HBWIN_NULL;
    WM_SetFocus(g_hWin_menu);
    WM_ShowWindow(g_hWin_TimeBar);
    WM_ShowWindow(g_hWin_Date);
}

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //WIDGET_SetDefaultEffect(&WIDGET_Effect_None);
    _init_SysInfoDLg(pMsg);
    memset(g_sys_ctrl.DevCheckCode,0,sizeof(g_sys_ctrl.DevCheckCode));
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {}
    break;
  case WM_KEY:
    Id    = WM_GetId(pMsg->hWinSrc);
    //g_sys_ctrl.xx_len= strlen(g_sys_ctrl.DevCheckCode);
    if( strlen(g_sys_ctrl.DevCheckCode) == 8)
    {
        g_sys_ctrl.DevCheckCode[8] = '\0';
            
        if(0 == strcmp(g_sys_ctrl.DevCheckCode, g_self_check_pwd))
        {
            OSSemPost(g_sem_check);  
            /*next action reserved*/
        }
        memset(g_sys_ctrl.DevCheckCode,0,sizeof(g_sys_ctrl.DevCheckCode));
    }
    
    if(1 == ((WM_KEY_INFO *)(pMsg->Data.p))->PressedCnt)
    {
        switch(((WM_KEY_INFO *)(pMsg->Data.p))->Key)
        {
            case GUI_KEY_GREEN:
                ERR_NOTE(g_hWin_SysInfo,8);
                break;
            case GUI_KEY_YELLOW:
                //sys_ctrl.resetFlag = 0;
                memset(g_sys_ctrl.DevCheckCode,0,sizeof(g_sys_ctrl.DevCheckCode));
                SID_DelHandle();
                g_gui_para.state = GUI_STATE_IDLE;
                break;
            case GUI_KEY_F2:
#if 0
                g_hWin_SDInfo = CreateSDInfo();
                WM_ShowWindow(g_hWin_SDInfo);
                WM_SetFocus(g_hWin_SDInfo);
#endif
                break;
            case GUI_KEY_F1:
                //g_sys_ctrl.resetFlag = 1;
                //ERR_NOTE(g_hWin_SysInfo,GUI_MSBOX_RESET_ERROR);
                g_hWin_SDInfo = CreateSDInfo();
                WM_ShowWindow(g_hWin_SDInfo);
                WM_SetFocus(g_hWin_SDInfo);
                break;
            case '0':
                g_sys_ctrl.DevCheckCode[strlen(g_sys_ctrl.DevCheckCode)] = '0';
                break;
            case '1':
                g_sys_ctrl.DevCheckCode[strlen(g_sys_ctrl.DevCheckCode)] = '1';
                break;
            case '2':
                g_sys_ctrl.DevCheckCode[strlen(g_sys_ctrl.DevCheckCode)] = '2';
                break;
            case '3':
                g_sys_ctrl.DevCheckCode[strlen(g_sys_ctrl.DevCheckCode)] = '3';
                break;
            case '4':
                g_sys_ctrl.DevCheckCode[strlen(g_sys_ctrl.DevCheckCode)] = '4';
                break;
            case '5':
                g_sys_ctrl.DevCheckCode[strlen(g_sys_ctrl.DevCheckCode)] = '5';
                break;
            case '6':
                g_sys_ctrl.DevCheckCode[strlen(g_sys_ctrl.DevCheckCode)] = '6';
                break;
            case '7':
                g_sys_ctrl.DevCheckCode[strlen(g_sys_ctrl.DevCheckCode)] = '7';
                break;
            case '8':
                g_sys_ctrl.DevCheckCode[strlen(g_sys_ctrl.DevCheckCode)] = '8';
                break;
            case '9':
                g_sys_ctrl.DevCheckCode[strlen(g_sys_ctrl.DevCheckCode)] = '9';
                break;
        }
    }
    break;
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

WM_HWIN SID_GetVoltage(void)
{
    return WM_GetDialogItem(g_hWin_SysInfo, ID_EDIT_0);
}

WM_HWIN SID_GetLCD(void)
{
    return WM_GetDialogItem(g_hWin_SysInfo, ID_EDIT_1);
}

WM_HWIN SID_GetPLC(void)
{
    return WM_GetDialogItem(g_hWin_SysInfo, ID_EDIT_2);
}

WM_HWIN SID_GetSi4438(void)
{
    return WM_GetDialogItem(g_hWin_SysInfo, ID_EDIT_3);
}






/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateSysInfo
*/
WM_HWIN CreateSysInfo(void);
WM_HWIN CreateSysInfo(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, g_hWin_menu, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
