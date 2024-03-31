#ifndef ENCRYPTEDNOTEPAD_APP_H_
#define ENCRYPTEDNOTEPAD_APP_H_

#include <wx/wx.h>

#include "EncryptedNotepad/MainUI.h"

namespace EncryptedNotepad
{
    class App : public wxApp
    {
    public:
        bool OnInit() override;
    };
}

#endif