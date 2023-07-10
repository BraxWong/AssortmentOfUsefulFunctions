#include "File.h"
#include <codecvt>
#include <io.h>

std::string File::get_desktop_path()
{
    wchar_t* p;
    if (S_OK != SHGetKnownFolderPath( FOLDERID_Desktop, 0, NULL, &p )) return "";
    std::filesystem::path result = p;
    CoTaskMemFree( p );
    return result.string();
}

bool File::directoryExists(const char* dirPath)
{
    if (_access(dirPath, 0) == 0)
    {
        return true;
    }
    return false;
}
