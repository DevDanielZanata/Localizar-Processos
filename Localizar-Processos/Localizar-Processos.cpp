#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>


int main()
{
    HANDLE hSnap;
    PROCESSENTRY32 pe;
    hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

    pe.dwSize = sizeof(pe);
    Process32First(hSnap, &pe);

    do {
        printf("%ls\n", pe.szExeFile);
    } while (Process32Next(hSnap, &pe));



    return 0;
}

