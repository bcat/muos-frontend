#include "ui.h"

void ui_screen_init(lv_obj_t *ui_pnlContent);

lv_obj_t *ui_pnlShell;
lv_obj_t *ui_pnlBrowser;
lv_obj_t *ui_pnlTerminal;
lv_obj_t *ui_pnlSyncthing;
lv_obj_t *ui_pnlResilio;
lv_obj_t *ui_pnlNTP;
lv_obj_t *ui_lblShell;
lv_obj_t *ui_lblBrowser;
lv_obj_t *ui_lblTerminal;
lv_obj_t *ui_lblSyncthing;
lv_obj_t *ui_lblResilio;
lv_obj_t *ui_lblNTP;
lv_obj_t *ui_icoShell;
lv_obj_t *ui_icoBrowser;
lv_obj_t *ui_icoTerminal;
lv_obj_t *ui_icoSyncthing;
lv_obj_t *ui_icoResilio;
lv_obj_t *ui_icoNTP;
lv_obj_t *ui_droShell;
lv_obj_t *ui_droBrowser;
lv_obj_t *ui_droTerminal;
lv_obj_t *ui_droSyncthing;
lv_obj_t *ui_droResilio;
lv_obj_t *ui_droNTP;

void ui_init(lv_obj_t *ui_pnlContent) {
    ui_screen_init(ui_pnlContent);
}
