#include <iostream>
#include <windows.h>
#include "Base64.h"
#include "Helper.h"
#include "KeyConstants.h"
#include "IO.h"


using namespace std;

int main()
{
    MSG msg;

    while(GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}
