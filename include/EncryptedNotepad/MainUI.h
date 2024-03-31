#ifndef ENCRYPTEDNOTEPAD_MAINUI_H_
#define ENCRYPTEDNOTEPAD_MAINUI_H_

#include <wx/wx.h>

#define ENCRYPTEDNOTEPAD_ID_NEW  1000
#define ENCRYPTEDNOTEPAD_ID_OPEN 1001
#define ENCRYPTEDNOTEPAD_ID_SAVE 1002

namespace EncryptedNotepad
{
    class MainUI : public wxFrame
    {
    private:
        wxTextCtrl* m_TextArea;
    public:
        MainUI();
    
        void OnFileNew(wxCommandEvent&);
        void OnFileOpen(wxCommandEvent&);
        void OnFileSave(wxCommandEvent&);
    };
}

#endif