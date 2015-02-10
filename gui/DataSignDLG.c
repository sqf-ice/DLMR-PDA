/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.22                          *
*        Compiled Jul  4 2013, 15:16:01                              *
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
#define ID_WINDOW_0     (GUI_ID_USER + 0x9B)
//#define ID_TEXT_0     (GUI_ID_USER + 0x9E)
#define ID_TEXT_1     (GUI_ID_USER + 0xA0)
#define ID_BUTTON_0     (GUI_ID_USER + 0xA1)
#define ID_BUTTON_1     (GUI_ID_USER + 0xA2)
#define ID_LISTVIEW_0     (GUI_ID_USER + 0xA3)


int DataSign_Value; //数据标识，全局变量，规约调试中的一项依赖于此
char DataSign_Text[TEXT_LEN]; //listview单元格中的文本内容

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
//获取参数
static const char GetPara[]="\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8f\x82\xe6\x95\xb0";

//电表表号
static const char MeterNum[]="\xe7\x94\xb5\xe8\xa1\xa8\xe8\xa1\xa8\xe5\x8f\xb7";


//抄表项目
static const char ReadMeterSel[]="\xe6\x8a\x84\xe8\xa1\xa8\xe9\xa1\xb9\xe7\x9b\xae";


//当前正向有功电能
static const char Positive[]="\xe5\xbd\x93\xe5\x89\x8d\xe6\xad\xa3\xe5\x90\x91\xe6\x9c\x89\xe5\x8a\x9f\xe7\x94\xb5\xe8\x83\xbd";


//当前反向有功电能
static const char Negative[]="\xe5\xbd\x93\xe5\x89\x8d\xe5\x8f\x8d\xe5\x90\x91\xe6\x9c\x89\xe5\x8a\x9f\xe7\x94\xb5\xe8\x83\xbd";


//日冻结正向有功电能
static const char DayPositive[]="\xe6\x97\xa5\xe5\x86\xbb\xe7\xbb\x93\xe6\xad\xa3\xe5\x90\x91\xe6\x9c\x89\xe5\x8a\x9f\xe7\x94\xb5\xe8\x83\xbd";


//日冻结反向有功电能
static const char DayNegative[]="\xe6\x97\xa5\xe5\x86\xbb\xe7\xbb\x93\xe5\x8f\x8d\xe5\x90\x91\xe6\x9c\x89\xe5\x8a\x9f\xe7\x94\xb5\xe8\x83\xbd";

//数据标识
static const char DataSign[]="\xe6\x95\xb0\xe6\x8d\xae\xe6\xa0\x87\xe8\xaf\x86";

//确定
static const char Confirm[]="\xe7\xa1\xae\xe5\xae\x9a";

//取消
static const char Cancel[]="\xe5\x8f\x96\xe6\xb6\x88";

//退出
static const char Quit[]="\xe9\x80\x80\xe5\x87\xba";


static const char _acItems[][64] = 
{
    //当前正
    "\xe5\xbd\x93\xe5\x89\x8d\xe6\xad\xa3\xe5\x90\x91\xe6\x9c\x89\xe5\x8a\x9f\xe7\x94\xb5\xe8\x83\xbd",
    //当前反
    "\xe5\xbd\x93\xe5\x89\x8d\xe5\x8f\x8d\xe5\x90\x91\xe6\x9c\x89\xe5\x8a\x9f\xe7\x94\xb5\xe8\x83\xbd",
    //日冻结正
    "\xe6\x97\xa5\xe5\x86\xbb\xe7\xbb\x93\xe6\xad\xa3\xe5\x90\x91\xe6\x9c\x89\xe5\x8a\x9f\xe7\x94\xb5\xe8\x83\xbd",
    //日冻结反
    "\xe6\x97\xa5\xe5\x86\xbb\xe7\xbb\x93\xe5\x8f\x8d\xe5\x90\x91\xe6\x9c\x89\xe5\x8a\x9f\xe7\x94\xb5\xe8\x83\xbd",
    "",
};

static const char _acFlagItems[][DL_T_07+1][10] = 
{
    { "9010", "00010000"},
    { "9020", "00020000"},
    { "",     "00010001"},
    { "",     "00020001"},
    { "", ""},
};


/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect,     NULL,     ID_WINDOW_0,   0,   0,   240, 295, 0, 0x0, 0 },
  { LISTVIEW_CreateIndirect,   NULL,     ID_LISTVIEW_0, 8,   50,  225, 203, 0, 0x0, 0 },
  { TEXT_CreateIndirect,       DataSign, ID_TEXT_1,     13,  31,  80,  20,  0, 0x0, 0 },
  { BUTTON_CreateIndirect,     Confirm,  ID_BUTTON_0,   8,   264, 55,  25,  0, 0x0, 0 },
  { BUTTON_CreateIndirect,     Quit,   ID_BUTTON_1,   175, 264, 55,  25,  0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};




/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

static void __AddListviewItem(LISTVIEW_Handle hObj, const char* pMake, const char* pModel) {
  unsigned NumItems;

  NumItems = LISTVIEW_GetNumRows(hObj);
  LISTVIEW_AddRow(hObj, NULL);
  LISTVIEW_SetItemText(hObj, 0, NumItems, pMake);
  LISTVIEW_SetItemText(hObj, 1, NumItems, pModel);
}

//获取listview中的值并赋给规约调试页面的数据标识选项
static void set_datasign_value(WM_MESSAGE *pMsg)
{
    WM_HWIN hItem;
    hItem=WM_GetDialogItem(pMsg->hWin,ID_LISTVIEW_0);
    //LISTVIEW_GetSel(hItem);
    LISTVIEW_GetItemText(hItem,1,LISTVIEW_GetSel(hItem),DataSign_Text,TEXT_LEN);
    //g_sys_register_para.para_data[9]=atoi(DataSign_Text);
    CST_Set_DataFlag(DataSign_Text);
    GUI_GetStrDataFlag(DataSign_Text, g_sys_register_para.plcProtocol);
    //CST_Set_DataFlag();
       
}


/**************************************************************
*初始化对话框
*
***************************************************************/
static void _init_dialog(WM_MESSAGE * pMsg)
{
    WM_HWIN hItem;
    int     i=0; //对增加的行进行计数
    //GUI_UC_SetEncodeUTF8();
    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_0);
    BUTTON_SetBkColor(hItem,0,GUI_GREEN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
    
    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_1);
    BUTTON_SetBkColor(hItem,0,GUI_YELLOW);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);


    
    hItem = WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0);
    LISTVIEW_AddColumn(hItem, 153, ReadMeterSel, GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_AddColumn(hItem, 72,  DataSign, GUI_TA_HCENTER | GUI_TA_VCENTER);
    LISTVIEW_SetGridVis(hItem, 0);
    LISTVIEW_SetHeaderHeight(hItem, 20);
    LISTVIEW_SetAutoScrollV(hItem,1);
    while (_acItems[i][0]) 
    {
        if(g_sys_register_para.plcProtocol >  DL_T_07)
        {
            g_sys_register_para.plcProtocol =  DL_T_07;
        }
        if(_acFlagItems[i][g_sys_register_para.plcProtocol][0])
        {
            __AddListviewItem(hItem, _acItems[i], _acFlagItems[i][g_sys_register_para.plcProtocol]);
        }
        i++;
    }
    LISTVIEW_SetSel(hItem,0);
}

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  
  switch (pMsg->MsgId) 
  {
  case WM_INIT_DIALOG:
    //
    GUI_UC_SetEncodeUTF8();
    _init_dialog(pMsg);
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    
    break;

  case WM_KEY:
    if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
    {
        switch(((WM_KEY_INFO *)(pMsg->Data.p))->Key)
        {
            case GUI_KEY_YELLOW:
                WM_DeleteWindow(g_hWin_DataSign);
                g_hWin_DataSign=HBWIN_NULL;
                WM_SetFocus(g_hWin_std);
                break;
            case GUI_KEY_GREEN:
                set_datasign_value(pMsg);
                WM_DeleteWindow(g_hWin_DataSign);
                g_hWin_DataSign=HBWIN_NULL;
                WM_SetFocus(g_hWin_std);
                break;
        }
    }
    break;

  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateDataSign
*/
WM_HWIN CreateDataSign(void);
WM_HWIN CreateDataSign(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, g_hWin_std, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/

