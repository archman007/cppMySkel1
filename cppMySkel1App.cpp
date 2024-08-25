/***************************************************************
 * Name:      cppMySkel1App.cpp
 * Purpose:   Code for Application Class
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   2024-08-24
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:
 **************************************************************/

#include "cppMySkel1App.h"

//(*AppHeaders
#include "cppMySkel1Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(cppMySkel1App);

bool cppMySkel1App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	cppMySkel1Frame* Frame = new cppMySkel1Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
