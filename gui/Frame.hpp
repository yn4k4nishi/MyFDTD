#pragma once

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
    #include "wx/wx.h"
#endif

#include "wx/toolbar.h"
#include "wx/bitmap.h"

enum {
    Minimal_Quit = wxID_EXIT,
    Minimal_About = wxID_ABOUT
};

class MyFrame : public wxFrame {
public:
    MyFrame(const wxString& title);

    void Toolbar(wxToolBarBase* toolbar);

    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

private:
    wxToolBar *m_toolbar;

    wxDECLARE_EVENT_TABLE();
};