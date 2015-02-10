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
#define ID_WINDOW_0 (GUI_ID_USER + 0x07)
#define ID_BUTTON_0 (GUI_ID_USER + 0x08)
#define ID_BUTTON_1 (GUI_ID_USER + 0x09)
#define ID_BUTTON_2 (GUI_ID_USER + 0x0A)
#define ID_BUTTON_3 (GUI_ID_USER + 0x0B)
#define ID_BUTTON_4 (GUI_ID_USER + 0x0C)

#define ID_TEXT_0 (GUI_ID_USER + 0x0D)
#define ID_TEXT_1 (GUI_ID_USER + 0x0E)
#define ID_TEXT_2 (GUI_ID_USER + 0x0F)
#define ID_TEXT_3 (GUI_ID_USER + 0x10)
#define ID_TEXT_4 (GUI_ID_USER + 0x11)

#define ID_EDIT_0 (GUI_ID_USER + 0x12)
#define ID_EDIT_1 (GUI_ID_USER + 0x13)
#define ID_EDIT_2 (GUI_ID_USER + 0x14)
#define ID_EDIT_3 (GUI_ID_USER + 0x15)
#define ID_EDIT_4 (GUI_ID_USER + 0x16)

#define ID_PROGBAR_0 (GUI_ID_USER + 0x17)


// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/


/*********************************************************************
*
*       Static data
*
**********************************************************************
*/
//通信规约调试
static const char CommStdTest[]="\xe9\x80\x9a\xe4\xbf\xa1\xe8\xa7\x84\xe7\xba\xa6\xe8\xb0\x83\xe8\xaf\x95";

//1-目标地址
static const char TarAddr[]="\xe7\x9b\xae\xe6\xa0\x87\xe5\x9c\xb0\xe5\x9d\x80:";

//2-控制字
static const char CtlCode[]="\xe6\x8e\xa7 \xe5\x88\xb6 \xe5\xad\x97:";

//3-长度
static const char Length[]="\xe9\x95\xbf    \xe5\xba\xa6:";

//4-数据标识
static const char DataSign[]="\xe6\x95\xb0\xe6\x8d\xae\xe6\xa0\x87\xe8\xaf\x86:";

//5-数据域
static const char DataField[]="\xe6\x95\xb0    \xe6\x8d\xae:";

//F1路由表
static const char RoutTab[]="F1\xe8\xb7\xaf\xe7\x94\xb1\xe8\xa1\xa8";

//F2数据标识
static const char DataSignBtn[]="F2\xe6\x95\xb0\xe6\x8d\xae\xe6\xa0\x87\xe8\xaf\x86";

//读设备地址
static const char GetAddr[]="\xe8\xaf\xbb\xe8\xae\xbe\xe5\xa4\x87\xe5\x9c\xb0\xe5\x9d\x80H";

//读数据
static const char Readdata[]="\xe8\xaf\xbb\xe6\x95\xb0\xe6\x8d\xae";

//写数据
static const char WriteData[]="\xe5\x86\x99\xe6\x95\xb0\xe6\x8d\xae";

//读取产品芯片型号
static const char ReadChip[]="\xe8\xaf\xbb\xe5\x8f\x96\xe4\xba\xa7\xe5\x93\x81\xe8\x8a\xaf\xe7\x89\x87\xe5\x9e\x8b\xe5\x8f\xb7";

//#消息内容
static const char Msg[]="#\xe6\xb6\x88\xe6\x81\xaf\xe5\x86\x85\xe5\xae\xb9";

//发送
static const char Send[]="\xe5\x8f\x91\xe9\x80\x81";

//取消
static const char Cancel[]="\xe5\x8f\x96\xe6\xb6\x88";

//退出
static const char Quit[]="\xe9\x80\x80\xe5\x87\xba";


// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect,  "CommProtoTest", ID_WINDOW_0,  0,   0,   240, 295, 0, 0x0, 0 },
  { BUTTON_CreateIndirect,  RoutTab,         ID_BUTTON_0,  6,   14,  80,  20,  0, 0x0, 0 },
  { BUTTON_CreateIndirect,  DataSignBtn,     ID_BUTTON_1,  151, 14,  80,  20,  0, 0x0, 0 },
  { BUTTON_CreateIndirect,  Send,            ID_BUTTON_2,  6,   267, 55,  20,  0, 0x0, 0 },
  { BUTTON_CreateIndirect,  Msg,             ID_BUTTON_3,  80,  267, 80,  20,  0, 0x0, 0 },
  { BUTTON_CreateIndirect,  Quit,          ID_BUTTON_4,  178, 266, 55,  20,  0, 0x0, 0 },
    
  { TEXT_CreateIndirect,    TarAddr,         ID_TEXT_0,    8,   49,  80, 20,  0, 0x0, 0 },
  { TEXT_CreateIndirect,    CtlCode,         ID_TEXT_1,    8,   83,  80, 20,  0, 0x0, 0 },
  { TEXT_CreateIndirect,    DataSign,        ID_TEXT_2,    8,  122, 80, 20,  0, 0x0, 0 },
  { TEXT_CreateIndirect,    Length,          ID_TEXT_3,    8,  156, 80, 20,  0, 0x0, 0 },
  { TEXT_CreateIndirect,    DataField,       ID_TEXT_4,    8,  195, 80, 20,  0, 0x0, 0 },
    
  { EDIT_CreateIndirect,    "addr",          ID_EDIT_0,    96,  48,  135, 20,  0, 0x64, 0 },
  { EDIT_CreateIndirect,    "ctl",           ID_EDIT_1,    96,  82,  135, 20,  0, 0x64, 0 },
  { EDIT_CreateIndirect,    "flag",          ID_EDIT_2,    96,  118, 135, 20,  0, 0x64, 0 },
  { EDIT_CreateIndirect,    "length",        ID_EDIT_3,    96,  156, 135, 20,  0, 0x64, 0 },
  { EDIT_CreateIndirect,    "data",          ID_EDIT_4,    96,  195, 135, 20,  0, 0x64, 0 },
  { PROGBAR_CreateIndirect, "Progbar",       ID_PROGBAR_0, 12,  236, 216, 20,  0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/
static char std_Edit1_Text[8]; //edit文本字符串
static int  std_Edit1_Value;

static char std_Edit3_Text[32]; //edit文本字符串
static int  std_Edit3_Value;


static int key_press_cnt=1;

#if 1
static const u8 c_645ctrlDef[2][PLC_CTRL_MAX_NUM] = 
{ 
    //97规约
    {0x05, 0x01, 0x04,  4,5,6,7,8,9,10,11,12,13,14,15,16},
    //07规约
    {0x13, 0X11, 0X14,  4,5,6,7,8,9,10,11,12,13,14,15,16}
};
#endif

u8 GUI_char2hex(u8 ch);

u8 GUI_char2hex(u8 ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return (ch-'0');
    }
    if((ch >= 'a') && (ch <= 'f'))
    {
        return ((ch-'a')+10);
    }
    if((ch >= 'A') && (ch <= 'F'))
    {
        return ((ch-'A')+10);
    }
    return 0xff;
}


WM_HWIN STM_Get_PROGBAR()
{    
     return WM_GetDialogItem(g_hWin_std, ID_PROGBAR_0);            
}

void STM_Print_resp_data(u8 * src, u8 * send_ptr, u8 len)
{
    u8 i;
    for(i = 0; i < len; i++)
    {
        *send_ptr++ = GUI_Hex2Char( src[i]>>4);
        *send_ptr++ = GUI_Hex2Char( src[i]&0x0f);
        *send_ptr++ = ' ';
    }
    *send_ptr++ = 0;
}



void STM_proc_resp_data(void)
{
    WM_HWIN hItem;
    u8 * pbuf, temb[32];
    u32 len;

    pbuf = g_plc_prm.data_buf;
    len = g_plc_prm.data_len;

    if(g_hWin_std != WM_HWIN_NULL)
    {        
        hItem = WM_GetDialogItem(g_hWin_std, ID_EDIT_3);
        sprintf(temb, "%d", len);
        EDIT_SetText(hItem, temb);
        
        //SWITCH(DATA FLAG)
        if(len)
        {
            if(len > 8)
                len = 8;
            hItem = WM_GetDialogItem(g_hWin_std, ID_EDIT_4);
            STM_Print_resp_data(pbuf,temb, len);      
            EDIT_SetText(hItem, temb);           
        }                            
    }
}

static u32 Get_Para_From_Widget(WM_MESSAGE * pMsg)
{
    u8  i, tb[GUI_645_ADDR_LENGTH+2], len;
    WM_HWIN hItem;
    WM_HWIN hWin;
 
    int dropdown_num;
    
    hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_0);
    EDIT_GetText(hItem, tb, GUI_645_ADDR_LENGTH+1);
    
    //GUI_GetStrDataFlag(tb , GUI_645_ADDR_LENGTH);

    if(strlen(tb) != GUI_645_ADDR_LENGTH)
    {
        ERR_NOTE(g_hWin_std,GUI_MSBOX_ADDR_ERROR);
        return DEV_ERROR;
    }
    
    if(DEV_OK != GUI_GetMeterAddr(tb, g_send_para_pkg.dstAddr))
    {
        ERR_NOTE(g_hWin_std,GUI_MSBOX_ADDR_ERROR);
        return DEV_ERROR;
    }    
    //
#if 0
    //control word
    hItem=WM_GetDialogItem(pMsg->hWin,ID_DROPDOWN_0);
    dropdown_num=DROPDOWN_GetSel(hItem);

    if(dropdown_num >= PLC_CTRL_MAX_NUM)
        dropdown_num  = PLC_CTRL_MAX_NUM - 1;
#endif 

   

    //g_sys_register_para.plcProtocol = DL_T_07;


    hItem = WM_GetDialogItem(pMsg->hWin,ID_EDIT_2);
    //g_send_para_pkg.g_datasign = EDIT_GetValue(pMsg->hWin);
    EDIT_GetText(hItem, tb, 8 + 1);

    if(g_sys_register_para.plcProtocol == DL_T_07)
        len = DL645_07_DATA_ITEM_LEN;
    else
        len = DL645_97_DATA_ITEM_LEN;
    
    if(strlen(tb) != (len<<1))
    {       
        ERR_NOTE(g_hWin_std,GUI_MSBOX_DIDO_ERROR);
        
        //g_hWin_Err=CreateErrNote(g_hWin_std);
        return DEV_ERROR;
    }

    if(DEV_OK != GUI_GetStrDataFlag(tb, g_sys_register_para.plcProtocol ))
    {
        ERR_NOTE(g_hWin_std,GUI_MSBOX_DIDO_ERROR);
        
        //g_hWin_Err=CreateErrNote(g_hWin_std);
        return DEV_ERROR;
    }
    

    hItem = WM_GetDialogItem(pMsg->hWin,ID_EDIT_3);/*长度*/
    EDIT_GetText(hItem,std_Edit1_Text,4);
    g_send_para_pkg.dataLen = atoi(std_Edit1_Text);
  
    hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_4);/*数据*/
    EDIT_GetText(hItem, tb, 20);

    g_send_para_pkg.cmdType = PLC_CMD_TYPE_COMMON;

    return DEV_OK;
}



    
//向上选择
void CPT_SelEdt_Up(WM_MESSAGE * pMsg)
{
    WM_HWIN hItem;
    if(key_press_cnt==KEY_PRESS_CNT_MIN)
    {
        
        //WM_SetFocus(hItem);
        
        hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_4);
        ///EDIT_SetBkColor(hItem,0,GUI_GREEN);
        WM_SetFocus(hItem);

        hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_0);
        EDIT_SetBkColor(hItem,0,0xC0C0C0);
        
        key_press_cnt=4;
    }
    else
    {
        key_press_cnt--;
        hItem=WM_GetDialogItem(pMsg->hWin,(ID_EDIT_0+key_press_cnt));
        //EDIT_SetBkColor(hItem,0,GUI_GREEN);
        WM_SetFocus(hItem);

        hItem=WM_GetDialogItem(pMsg->hWin,(ID_EDIT_0+key_press_cnt+1));
        EDIT_SetBkColor(hItem,0,0xC0C0C0);
    }
}
//向下选择
void CPT_SelEdt_Down(WM_MESSAGE *pMsg)
{
    WM_HWIN hItem;
    if(key_press_cnt==4)
    {
        hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_0);
        //EDIT_SetBkColor(hItem,0,GUI_GREEN);
        WM_SetFocus(hItem);
        
        hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_4);
        EDIT_SetBkColor(hItem,0,0xC0C0C0);
        
        key_press_cnt=KEY_PRESS_CNT_MIN;
    }
    else
    {
        key_press_cnt++;
        hItem=WM_GetDialogItem(pMsg->hWin,(ID_EDIT_0+key_press_cnt));
        //EDIT_SetBkColor(hItem,0,GUI_GREEN);
        WM_SetFocus(hItem);
        
        hItem=WM_GetDialogItem(pMsg->hWin,(ID_EDIT_0+key_press_cnt-1));
        EDIT_SetBkColor(hItem,0,0xC0C0C0);

    }

}


void CPT_Color_Change(WM_MESSAGE *pMsg)
{
    WM_HWIN hItem;
    int i;
    for(i=0;i<5;i++)
    {
        hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_0+i);
        if(WM_HasFocus(hItem)==1)
        {
            EDIT_SetBkColor(hItem,0,GUI_GREEN);
        }

    }
}


void CST_Set_DataFlag(u8 * tst)
{
    WM_HWIN hItem;
    hItem=WM_GetDialogItem(g_hWin_std,(ID_EDIT_2));
    EDIT_SetText(hItem, tst); 
}


WM_HWIN CPT_Set_Addr(void)
{
    return WM_GetDialogItem(g_hWin_std,ID_EDIT_0);
}

WM_HWIN CPT_Set_CtlCode(void)
{
    return WM_GetDialogItem(g_hWin_std,ID_EDIT_1);
}

WM_HWIN CPT_Set_DataFlag(void)
{
    return WM_GetDialogItem(g_hWin_std,ID_EDIT_2);
}

WM_HWIN CPT_Set_Length(void)
{
    return WM_GetDialogItem(g_hWin_std,ID_EDIT_3);
}

WM_HWIN CPT_Set_Data(void)
{
    return WM_GetDialogItem(g_hWin_std,ID_EDIT_4);
}


static void _init_dialog(WM_MESSAGE * pMsg)
{
    WM_HWIN hItem;
    int i;
    u8 tempbuf[10];

   
    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_0);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_1);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_2);
    BUTTON_SetBkColor(hItem,0,GUI_GREEN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_3);
    BUTTON_SetBkColor(hItem,0,GUI_CYAN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_4);
    BUTTON_SetBkColor(hItem,0,GUI_YELLOW);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    for(i=0;i<5;i++)
    {
        hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_0+i);
        WM_DisableWindow(hItem);
    }


    
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    //EDIT_SetHexMode(pMsg->hWin,0x999999999999,0,0xffffffffffffff);
    //GUI_EditHex(hItem);
    
    EDIT_SetText(hItem, GUI_hex2MeterAddrStr(g_sys_control.recentMeterAddr, 6));
    //
    // Initialization of 'Dropdown'
    //
    
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_1);
    EDIT_SetText(hItem, Readdata);
     if(g_sys_register_para.plcProtocol == DL_T_07)
    {
        g_send_para_pkg.ctlCode = c_645ctrlDef[g_sys_register_para.plcProtocol][1]; 
    }
    else if(g_sys_register_para.plcProtocol == DL_T_97)
    {
        g_send_para_pkg.ctlCode = c_645ctrlDef[g_sys_register_para.plcProtocol][1]; 
    }
    //EDIT_SetBkColor(hItem,0,GUI_GREEN);

    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_2);
    //hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_3);
    GUI_GetHexDataFlag(tempbuf, g_sys_control.defaultDataFlag, 4);
    EDIT_SetText(hItem, tempbuf);
    //EDIT_SetText(hItem, "0001 0000");
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_3);
    //GUI_GetHexDataFlag(tempbuf, g_sys_control.defaultDataFlag, 4);
    EDIT_SetText(hItem, "0");
    
    
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_4);
    EDIT_SetText(hItem, "00000000");

    hItem = WM_GetDialogItem(pMsg->hWin, ID_PROGBAR_0);
    PROGBAR_SetBarColor(hItem,0,GUI_GREEN);
}


// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  int key_num;
  // USER START (Optionally insert additional variables)
  // USER END
  key_num=((WM_KEY_INFO *)(pMsg->Data.p))->Key;
  
  switch (pMsg->MsgId) 
  {
      case WM_INIT_DIALOG:
        
        _init_dialog(pMsg);
        //CPT_Color_Change(pMsg);
        break;
     case WM_KEY:
        Id  = WM_GetId(pMsg->hWinSrc);
        if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==1)
        {
            switch(Id)
            {
              case ID_EDIT_0:
                if(key_num==GUI_KEY_ENTER)
                {
                  g_sys_control.selectWidget=EDIT_ADDR;
                  g_hWin_Input=Create_Edit_Set(g_hWin_std);
                  
                  WM_SetFocus(g_hWin_Input);
                }
                break;
              case ID_EDIT_1:
                if(key_num==GUI_KEY_ENTER)
                {
                  g_sys_control.selectWidget=LISTBOX_CTLCODE;
                  g_hWin_Input=Create_ListBox_Set(g_hWin_std);
                  
                  WM_SetFocus(g_hWin_Input);
                }
                break;
              case ID_EDIT_2:
                if(key_num==GUI_KEY_ENTER)
                {
                  g_sys_control.selectWidget=EDIT_DATA_FLAG;
                  g_hWin_Input=Create_Edit_Set(g_hWin_std);
                  WM_SetFocus(g_hWin_Input);
                }
                break;
              case ID_EDIT_3:
                if(key_num==GUI_KEY_ENTER)
                {
                  g_sys_control.selectWidget=EDIT_LENGTH;
                  g_hWin_Input=Create_Edit_Set(g_hWin_std);
                  WM_SetFocus(g_hWin_Input);
                }
                break;
              case ID_EDIT_4:
                if(key_num==GUI_KEY_ENTER)
                {
                  g_sys_control.selectWidget=EDIT_DATA;
                  g_hWin_Input=Create_Edit_Set(g_hWin_std);
                  WM_SetFocus(g_hWin_Input);
                }
                break;                
            }               

        }
        switch(((WM_KEY_INFO *)(pMsg->Data.p))->Key)
        {
            case GUI_KEY_YELLOW:
                if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==1)
                {
                    WM_DeleteWindow(g_hWin_std);
                    g_hWin_std = HBWIN_NULL;
                    WM_BringToBottom(g_hWin_msg);
                    WM_HideWindow(g_hWin_msg);
                    WM_ShowWindow(g_hWin_TimeBar);
                    WM_ShowWindow(g_hWin_Date);
                    WM_SetFocus(g_hWin_menu); 
                    g_sys_control.guiState = GUI_PLC_MSG_IDLE;
                }
                break;
                
            case GUI_KEY_GREEN:
                if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
                {
                    if(DEV_OK == Get_Para_From_Widget(pMsg))//获取参数数据
                    {
                        g_sys_control.guiState = GUI_PLC_MSG_TEST;
                        OSMboxPost(g_sys_control.downMb,(void*)&g_send_para_pkg);
                    }  
                }
                break;
                
            case GUI_KEY_UP:
                if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
                {
                    CPT_SelEdt_Up(pMsg);
                    CPT_Color_Change(pMsg);
                }
                
                break;
                
            case GUI_KEY_DOWN:
                if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
                {
                    CPT_SelEdt_Down(pMsg);
                    CPT_Color_Change(pMsg);
                }
                
                break;
                
            case GUI_KEY_F1:
                if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
                {
                    g_hWin_relay=CreateRelayAddr();
                    WM_ShowWindow(g_hWin_relay);
                    WM_SetFocus(g_hWin_relay);
                }
                break;

            case GUI_KEY_F2:
                if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
                {
                    g_hWin_DataSign=CreateDataSign();
                    WM_ShowWindow(g_hWin_DataSign);
                    WM_SetFocus(g_hWin_DataSign);
                }
                break;

            case '#':
                if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
                {
                    WM_BringToTop(g_hWin_msg);
                    WM_ShowWindow(g_hWin_msg);                    
                    WM_SetFocus(g_hWin_msg);
                }
                break;

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
*       CreateCommProtoTest
*/
WM_HWIN CreateCommStdTest(void);
WM_HWIN CreateCommStdTest(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, g_hWin_menu, 0, 0);
  return hWin;

}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
