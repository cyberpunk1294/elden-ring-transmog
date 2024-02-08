
#define WIN32_LEAN_AND_MEAN
#include <cstdio>
#include <iostream>
#include <stdexcept>
#include <windows.h>

#include "Transmog.hpp"

using namespace std;

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    if (fdwReason == DLL_PROCESS_ATTACH)
    {
#if _DEBUG
        AllocConsole();
        FILE *stream;
        freopen_s(&stream, "CONOUT$", "w", stdout);
        freopen_s(&stream, "CONOUT$", "w", stderr);
        freopen_s(&stream, "CONIN$", "r", stdin);
#endif
        try
        {
            Transmog::initialize();
        }
        catch (runtime_error const &e)
        {
            cerr << "Error initializing mod: " << e.what() << endl;
        }
    }
    else if (fdwReason == DLL_PROCESS_DETACH && lpvReserved != nullptr)
    {
        try
        {
            Transmog::deinitialize();
        }
        catch (runtime_error const &e)
        {
            cerr << "Error deinitializing mod: " << e.what() << endl;
        }
    }
    return TRUE;
}