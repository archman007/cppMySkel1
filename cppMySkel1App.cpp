/***************************************************************
 * Name:      cppMySkel1App.cpp
 * Purpose:   Code for Application Class
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   2024-08-24
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:
 **************************************************************/

/**
 * @file cppMySkel1App.cpp
 * @brief Implementation of the main application class for cppMySkel1.
 *
 * This file contains the entry point and initialization logic for the cppMySkel1 application.
 */

#include "cppMySkel1App.h"

//(*AppHeaders
#include "cppMySkel1Main.h"
#include <wx/image.h>
//*)

/**
 * @brief Implements the main application class.
 *
 * This macro generates the necessary code to initialize and run the application.
 */
IMPLEMENT_APP(cppMySkel1App);

/**
 * @brief Initializes the application.
 *
 * This function initializes all required image handlers and sets up the main frame of the application.
 *
 * @return `true` if initialization was successful; otherwise, `false`.
 */
bool cppMySkel1App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();  ///< Initialize all image handlers for wxWidgets.
    if ( wxsOK )
    {
        cppMySkel1Frame* Frame = new cppMySkel1Frame(0);  ///< Create the main application frame.
        Frame->Show();                                    ///< Display the main frame.
        SetTopWindow(Frame);                              ///< Set the main frame as the top window.
    }
    //*)
    return wxsOK;
}
