#include "ui.h"

void ui_screen_init(lv_obj_t *ui_pnlContent);

lv_obj_t *ui_pnlTracker;
lv_obj_t *ui_pnlTester;
lv_obj_t *ui_pnlSystem;
lv_obj_t *ui_pnlCredits;
lv_obj_t *ui_lblTracker;
lv_obj_t *ui_lblTester;
lv_obj_t *ui_lblSystem;
lv_obj_t *ui_lblCredits;
lv_obj_t *ui_icoTracker;
lv_obj_t *ui_icoTester;
lv_obj_t *ui_icoSystem;
lv_obj_t *ui_icoCredits;

void ui_init(lv_obj_t *ui_pnlContent) {
    ui_screen_init(ui_pnlContent);
}
