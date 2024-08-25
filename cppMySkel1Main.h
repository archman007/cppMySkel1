/***************************************************************
 * Name:      cppMySkel1Main.h
 * Purpose:   Defines Application Frame
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   2024-08-24
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:
 **************************************************************/

#ifndef CPPMYSKEL1MAIN_H
#define CPPMYSKEL1MAIN_H

//(*Headers(cppMySkel1Frame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class cppMySkel1Frame: public wxFrame
{
    public:

        cppMySkel1Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~cppMySkel1Frame();

    private:

        //(*Handlers(cppMySkel1Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(cppMySkel1Frame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(cppMySkel1Frame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CPPMYSKEL1MAIN_H
