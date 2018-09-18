﻿#include "MyEvent.h"

DEFINE_EVENT_TYPE(wxEVT_COMMAND_REMASK_ALL)
IMPLEMENT_DYNAMIC_CLASS(MyRemaskEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_MYTREEITEM_CLICKED)
IMPLEMENT_DYNAMIC_CLASS(MyTreeItemClickedEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_NEWACCOUNTOK_CLICKED)
IMPLEMENT_DYNAMIC_CLASS(NewAccountOkClickedEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_MYNB_VALUE_CHANGE)
IMPLEMENT_DYNAMIC_CLASS(MyNBValueChangeEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_MYSTAR_CHANGE)
IMPLEMENT_DYNAMIC_CLASS(MyStarChangeEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_UPDATE_MAILLSIT)
IMPLEMENT_DYNAMIC_CLASS(MyCustomEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_MYDATAVIEW_SELECT_CHANGE)
IMPLEMENT_DYNAMIC_CLASS(MyDataViewSelectChangeEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_MYREAD_STAT_CHANGE)
IMPLEMENT_DYNAMIC_CLASS(MyReadStatChangeEvent, wxCommandEvent)


DEFINE_EVENT_TYPE(wxEVT_COMMAND_SETUP_GROUP)
IMPLEMENT_DYNAMIC_CLASS(SetUpGroupEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_EDIT_GROUP)
IMPLEMENT_DYNAMIC_CLASS(EditGroupEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_SETUP_ACCOUNT)
IMPLEMENT_DYNAMIC_CLASS(MySetUpAccountEvent, wxCommandEvent)


DEFINE_EVENT_TYPE(wxEVT_COMMAND_CEFRIGHT_MENU)
IMPLEMENT_DYNAMIC_CLASS(CEFRightMenuEvent, wxCommandEvent)
bool CEFRightMenuEvent::SetVecString(size_t index, std::string str)
{
    if ((index - m_string.size()) > 1)
    {
        return false;
    }
    if (m_string.size() <= index)
    {
        m_string.push_back(str);
        return true;
    }
    else
    {
        m_string[index] = str;
        return true;
    }
}

DEFINE_EVENT_TYPE(wxEVT_COMMAND_MYSHIFTANDCTRL)
IMPLEMENT_DYNAMIC_CLASS(MyShiftAndCtrlEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_MYADDRESSBOOK_TREECTRL_ITEMCLICK)
IMPLEMENT_DYNAMIC_CLASS(MyAddressBookTreeCtrlItemClickEvent, wxCommandEvent)

DEFINE_EVENT_TYPE(wxEVT_COMMAND_MYAPPLICATION_CLICKED)
IMPLEMENT_DYNAMIC_CLASS(MyApplicationClickedEvent, wxCommandEvent)