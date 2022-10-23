#include <wx/wxprec.h>
 
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

const int ID_BUTTON = 1;

class DemoFrame : public wxFrame
{
public:
    DemoFrame(const wxString& title);

    wxStaticText *labelHeight;
    wxStaticText *labelWeight;
    wxTextCtrl *textctrlHeight;
    wxTextCtrl *textctrlWeight;

    wxButton *button;
    void OnPress(wxCommandEvent& event);

    wxStaticText *result;
};


// void DemoFrame::OnPress(wxCommandEvent& event)
// {
//   result->SetLabelText(wxT("Pressed"));
// }

DemoFrame::DemoFrame(const wxString& title) 
    : wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(400, 250))
{
    // wxPanel *panel = new wxPanel(this, -1);
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    wxSizerFlags flags;
    flags.Expand().Border(wxALL, 5);

    labelHeight = new wxStaticText(this, -1, wxT("Height:"));
    labelWeight = new wxStaticText(this, -1, wxT("Weight:"));
    textctrlHeight = new wxTextCtrl(this, -1);
    textctrlWeight = new wxTextCtrl(this, -1);

    button = new wxButton(this, ID_BUTTON, wxT("Press"));
    Connect(ID_BUTTON, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(DemoFrame::OnPress));

    result = new wxStaticText(this, -1, wxT("Your results"));

    vbox->Add(labelHeight, flags);
    vbox->Add(textctrlHeight, flags);
    vbox->Add(labelWeight, flags);
    vbox->Add(textctrlWeight, flags);
    vbox->Add(button, flags);
    vbox->Add(result, flags);
    this->SetSizer(vbox);

    Centre();
}

class MainApp : public wxApp
{
public:
    virtual bool OnInit();
};

bool MainApp::OnInit()
{
    DemoFrame *frame =new DemoFrame("Demo App");
    frame->Show(true);

    return true;
}

// IMPLEMENT_APP(DemoApp);