#include "EncryptedNotepad/MainUI.h"

namespace EncryptedNotepad
{
    MainUI::MainUI() : wxFrame(nullptr, wxID_ANY, "Encrypted Notepad", wxDefaultPosition, wxSize(800, 600))
    {
        wxMenuBar* menuBar = new wxMenuBar;

        wxMenu* fileMenu = new wxMenu;
        fileMenu->Append(ENCRYPTEDNOTEPAD_ID_NEW, "&New");
        fileMenu->Append(ENCRYPTEDNOTEPAD_ID_OPEN, "&Open");
        fileMenu->Append(ENCRYPTEDNOTEPAD_ID_SAVE, "&Save");

        menuBar->Append(fileMenu, "&File");
        SetMenuBar(menuBar);

        Bind(wxEVT_MENU, &MainUI::OnFileNew, this, ENCRYPTEDNOTEPAD_ID_NEW);
        Bind(wxEVT_MENU, &MainUI::OnFileOpen, this, ENCRYPTEDNOTEPAD_ID_OPEN);
        Bind(wxEVT_MENU, &MainUI::OnFileSave, this, ENCRYPTEDNOTEPAD_ID_SAVE);

        m_TextArea = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);
        m_TextArea->SetEditable(false);

        SetMinSize(wxSize(600, 450));
        CenterOnScreen();
        Maximize();
    }

    void MainUI::OnFileNew(wxCommandEvent& e)
    {
        wxFileDialog dialog(this, "New Encrypted Notepad file", wxEmptyString, wxEmptyString,
        "Encrypted Notepad files (*.cryptnote)|*.cryptnote", wxFD_SAVE | wxFD_OVERWRITE_PROMPT);

        if (dialog.ShowModal() == wxID_CANCEL)
        {
            return;
        }
    }

    void MainUI::OnFileOpen(wxCommandEvent& e)
    {
        
    }

    void MainUI::OnFileSave(wxCommandEvent& e)
    {
        
    }
}