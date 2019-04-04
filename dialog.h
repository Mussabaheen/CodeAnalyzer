#include <iostream>

#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>

void Dialog_function()
{


  OPENFILENAME ofn;
    ZeroMemory( &filename, sizeof( filename ) );
    ZeroMemory( &ofn,      sizeof( ofn ) );
    ofn.lStructSize  = sizeof( ofn );
    ofn.hwndOwner    = NULL;  // If you have a window to center over, put its HANDLE here
    ofn.lpstrFilter  = "Text Files\0*.txt\0Any File\0*.*\0";
    ofn.lpstrFile    = filename;
    ofn.nMaxFile     = MAX_PATH;
    ofn.lpstrTitle   = "Select a File, yo!";
  if (GetOpenFileNameA( &ofn ))
  {
    std::cout << "You chose the file \"" << filename << "\"\n";
  }

}
