/***************************************************************
 * Name:      cppMySkel1Main.h
 * Purpose:   Defines Application Frame for the cppMySkel1 application
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   2024-08-24
 * Copyright: Mr. Arch Brooks (https://archman.us)
 * License:   (Specify your license here, e.g., MIT, GPL, etc.)
 **************************************************************/

#ifndef CPPMYSKEL1MAIN_H
#define CPPMYSKEL1MAIN_H

// wxWidgets headers used for GUI components
//(*Headers(cppMySkel1Frame)
#include <wx/colordlg.h>    // For color dialog functionality
#include <wx/fontdlg.h>     // For font dialog functionality
#include <wx/frame.h>       // Base class for the main application frame
#include <wx/menu.h>        // For menu bar and menu items
#include <wx/statusbr.h>    // For status bar functionality
//*)

// Definition of the main frame class for the application
class cppMySkel1Frame: public wxFrame
{
public:
    // Constructor and Destructor
    cppMySkel1Frame(wxWindow* parent, wxWindowID id = -1); // Initializes the main frame
    virtual ~cppMySkel1Frame();                             // Cleans up resources

    wxColourData data;  // Stores color data used for color dialog
    wxColour color;     // Represents a selected color

private:

    // Event handlers for user interactions
    //(*Handlers(cppMySkel1Frame)
    void OnQuit(wxCommandEvent& event);              // Handles "Quit" menu item
    void OnAbout(wxCommandEvent& event);             // Handles "About" menu item
    void OnmenChangeBkgSelected(wxCommandEvent& event);  // Changes background color
    void OnmenChgFontSelected(wxCommandEvent& event);    // Changes font style
    //*)

    // Identifiers for menu items and controls
    //(*Identifiers(cppMySkel1Frame)
    static const long ID_ChgCol;         // Identifier for "Change Background Color" menu
    static const long ID_ChgFont;        // Identifier for "Change Font" menu
    static const long idMenuQuit;        // Identifier for "Quit" menu item
    static const long idMenuAbout;       // Identifier for "About" menu item
    static const long ID_STATUSBAR1;     // Identifier for status bar
    //*)

    // Declarations of GUI components
    //(*Declarations(cppMySkel1Frame)
    wxColourDialog* ColourDialog1;       // Dialog for selecting colors
    wxFontDialog* FontDialog1;           // Dialog for selecting fonts
    wxMenuItem* menChangeBkg;            // Menu item for changing background color
    wxMenuItem* menChgFont;              // Menu item for changing font
    wxStatusBar* StatusBar1;             // Status bar at the bottom of the frame
    //*)

    DECLARE_EVENT_TABLE() // Macro for declaring the event table
};

#endif // CPPMYSKEL1MAIN_H

