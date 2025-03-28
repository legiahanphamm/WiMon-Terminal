// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.1
// LVGL version: 9.1.0
// Project name: SquareLine_Project

#include "ui.h"


const ui_theme_variable_t _ui_theme_color_Surface[2] = {0x10191B, 0x10191B};
const ui_theme_variable_t _ui_theme_alpha_Surface[2] = {255, 255};

const ui_theme_variable_t _ui_theme_color_On_Surface[2] = {0xE2D5CF, 0xE2D5CF};
const ui_theme_variable_t _ui_theme_alpha_On_Surface[2] = {255, 255};

const ui_theme_variable_t _ui_theme_color_Error[2] = {0xA85F5F, 0xA85F5F};
const ui_theme_variable_t _ui_theme_alpha_Error[2] = {255, 255};

const ui_theme_variable_t _ui_theme_color_Success[2] = {0x63A85F, 0x63A85F};
const ui_theme_variable_t _ui_theme_alpha_Success[2] = {255, 255};

const ui_theme_variable_t _ui_theme_color_Warn[2] = {0xFFFB46, 0xFFFB46};
const ui_theme_variable_t _ui_theme_alpha_Warn[2] = {255, 255};
uint8_t ui_theme_idx = UI_THEME_DEFAULT;


void ui_theme_set(uint8_t theme_idx)
{
    ui_theme_idx = theme_idx;
    _ui_theme_set_variable_styles(UI_VARIABLE_STYLES_MODE_FOLLOW);
}

