#pragma once
#include "stdafx.h"
#define WINUTILSAPI __declspec(dllexport)
EXTERN_C{
extern WINUTILSAPI void handleWindow();
extern WINUTILSAPI bool canLoop();
}