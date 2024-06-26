// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: han-wt32

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_SplashScreen
void ui_SplashScreen_screen_init(void);
lv_obj_t * ui_SplashScreen;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label1;
lv_obj_t * ui_lblpassword;
lv_obj_t * ui_lblssid;
lv_obj_t * ui_lblversion;


// SCREEN: ui_HomeScreen
void ui_HomeScreen_screen_init(void);
lv_obj_t * ui_HomeScreen;
lv_obj_t * ui_btnconfirm;
void ui_event_btnpost(lv_event_t * e);
lv_obj_t * ui_btnpost;
lv_obj_t * ui_Image1;
lv_obj_t * ui_barhashrate;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label7;
lv_obj_t * ui_btndelete;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label10;
lv_obj_t * ui_lblhashrate;
lv_obj_t * ui_lblbestdiff;
lv_obj_t * ui_lbltemplates;
lv_obj_t * ui_lblvalid;
lv_obj_t * ui_lblshares32;
lv_obj_t * ui_lblclock;
lv_obj_t * ui_Label2;
void ui_event_btnpre(lv_event_t * e);
lv_obj_t * ui_btnpre;
lv_obj_t * ui_Label11;
lv_obj_t * ui_lbltotalhashrate;
lv_obj_t * ui_Label19;
lv_obj_t * ui_lbltemperature;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label9;


// SCREEN: ui_StatsScreen
void ui_StatsScreen_screen_init(void);
lv_obj_t * ui_StatsScreen;
lv_obj_t * ui_btnconfirm2;
void ui_event_btnpost2(lv_event_t * e);
lv_obj_t * ui_btnpost2;
lv_obj_t * ui_Image2;
lv_obj_t * ui_btndelete2;
void ui_event_btnpre2(lv_event_t * e);
lv_obj_t * ui_btnpre2;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Label16;


// SCREEN: ui_ClockScreen
void ui_ClockScreen_screen_init(void);
lv_obj_t * ui_ClockScreen;
lv_obj_t * ui_Label18;
void ui_event_btnpre3(lv_event_t * e);
lv_obj_t * ui_btnpre3;
lv_obj_t * ui_btnconfirm3;
void ui_event_btnpost3(lv_event_t * e);
lv_obj_t * ui_btnpost3;
lv_obj_t * ui_btndelete3;
lv_obj_t * ui_lblclock2;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Label17;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_2063710799[1] = {&ui_img_1552732429};
const lv_img_dsc_t * ui_imgset_metal[1] = {&ui_img_metal2_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_btnpost(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_StatsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_StatsScreen_screen_init);
    }
}
void ui_event_btnpre(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ClockScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_ClockScreen_screen_init);
    }
}
void ui_event_btnpost2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ClockScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_ClockScreen_screen_init);
    }
}
void ui_event_btnpre2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_HomeScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_HomeScreen_screen_init);
    }
}
void ui_event_btnpre3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_StatsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_StatsScreen_screen_init);
    }
}
void ui_event_btnpost3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ClockScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_ClockScreen_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_SplashScreen_screen_init();
    ui_HomeScreen_screen_init();
    ui_StatsScreen_screen_init();
    ui_ClockScreen_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_SplashScreen);
}
