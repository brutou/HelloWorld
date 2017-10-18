#include "stdafx.h"
#include "MessageBox.h"
#include <stdio.h>

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
    if (NULL == lpCmdLine)
    {
        lpCmdLine = "";
    }

    UINT nType           = 0;
    char chType[2048]    = {0};
    char chCaption[2048] = {0};
    char chContent[2048] = {0};

    sscanf(lpCmdLine, "%s\r\n%s\r\n%s", chType, chCaption, chContent);
    nType = atoi(chType);

    ::MessageBox(NULL, chContent, chCaption, nType);

    return 0;
}