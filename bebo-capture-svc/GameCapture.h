#pragma once

#include <tchar.h>
#include <dshow.h>
#include <windows.h>
void * hook(LPCTSTR windowName);
boolean get_game_frame(void ** data, float seconds, IMediaSample *pSample);
