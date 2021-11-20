// DummyApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

#include <windows.h>
#include <shlwapi.h>

#include <atlbase.h>
#include <atlconv.h>

#pragma comment(lib, "Shlwapi.lib")

int main()
{
    WCHAR szPath[MAX_PATH + 1] = { 0, };
    GetModuleFileNameW(GetModuleHandle(NULL), szPath, MAX_PATH);

    LPWSTR wszFileName = PathFindFileNameW(szPath);
    CW2A szFileName(wszFileName);

    wprintf(L"%S \r\n", szFileName.m_psz);
    std::cout << "Press any key to close this window . . .\n";

#ifndef _DEBUG
    _getch();
#endif
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
