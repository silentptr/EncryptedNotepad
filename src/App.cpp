#include "EncryptedNotepad/App.h"

namespace EncryptedNotepad
{
    bool App::OnInit()
    {
        MainUI* ui = new MainUI;
        ui->Show(true);
        return true;
    }
}

wxIMPLEMENT_APP(EncryptedNotepad::App);