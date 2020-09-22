#include <Windows.h>
#include <tchar.h>
#include <cassert>
#include <cstdio>
#include <iostream>

int main()
{

    std::cout<<"Loading DLL"<<std::endl;
    HINSTANCE hWtsLib = LoadLibrary("F:\\wood\\work\\CompressorPerfMon\\DLNG\\TW_NG_ISO1_400.dll");
    std::cout<<"DLL Loaded"<<std::endl;
    std::cout<<hWtsLib<<std::endl;

	// if(!hWtsLib){
    //     DWORD errc = GetLastError();
    //     printf("%u\n", errc); // it gets error 127
    // }
    // int(__stdcall * pFoo)(int, int);
    // (FARPROC &)pFoo = GetProcAddress(hLib, _T("foo"));
    // if (pFoo == NULL)
    // {
    //     DWORD errc = GetLastError();
    //     printf("%u\n", errc); // it gets error 127
    // }
    // else
    // {
    //     printf("success load\n");
    // }
    // // pFoo(04,1);
    // FreeLibrary(hLib);
    // return 0;
}