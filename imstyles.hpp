#pragma once

#include "imgui.h"
#include "implot.h"

enum imstyle
{
    DEFAULT_STYLE,
    ULTRA_DARK,
};

void default_style();
void ultra_dark_style();
void set_style(imstyle style);