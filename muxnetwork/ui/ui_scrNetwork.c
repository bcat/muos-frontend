#include "ui.h"

void ui_screen_init(lv_obj_t *ui_screen, lv_obj_t *ui_pnlContent, struct theme_config *theme) {
    ui_pnlEnable = lv_obj_create(ui_pnlContent);
    ui_pnlIdentifier = lv_obj_create(ui_pnlContent);
    ui_pnlPassword = lv_obj_create(ui_pnlContent);
    ui_pnlType = lv_obj_create(ui_pnlContent);
    ui_pnlAddress = lv_obj_create(ui_pnlContent);
    ui_pnlSubnet = lv_obj_create(ui_pnlContent);
    ui_pnlGateway = lv_obj_create(ui_pnlContent);
    ui_pnlDNS = lv_obj_create(ui_pnlContent);
    ui_pnlConnect = lv_obj_create(ui_pnlContent);

    ui_lblEnable = lv_label_create(ui_pnlEnable);
    ui_lblIdentifier = lv_label_create(ui_pnlIdentifier);
    ui_lblPassword = lv_label_create(ui_pnlPassword);
    ui_lblType = lv_label_create(ui_pnlType);
    ui_lblAddress = lv_label_create(ui_pnlAddress);
    ui_lblSubnet = lv_label_create(ui_pnlSubnet);
    ui_lblGateway = lv_label_create(ui_pnlGateway);
    ui_lblDNS = lv_label_create(ui_pnlDNS);
    ui_lblConnect = lv_label_create(ui_pnlConnect);

    ui_icoEnable = lv_img_create(ui_pnlEnable);
    ui_icoIdentifier = lv_img_create(ui_pnlIdentifier);
    ui_icoPassword = lv_img_create(ui_pnlPassword);
    ui_icoType = lv_img_create(ui_pnlType);
    ui_icoAddress = lv_img_create(ui_pnlAddress);
    ui_icoSubnet = lv_img_create(ui_pnlSubnet);
    ui_icoGateway = lv_img_create(ui_pnlGateway);
    ui_icoDNS = lv_img_create(ui_pnlDNS);
    ui_icoConnect = lv_img_create(ui_pnlConnect);

    ui_lblEnableValue = lv_label_create(ui_pnlEnable);
    ui_lblIdentifierValue = lv_label_create(ui_pnlIdentifier);
    ui_lblPasswordValue = lv_label_create(ui_pnlPassword);
    ui_lblTypeValue = lv_label_create(ui_pnlType);
    ui_lblAddressValue = lv_label_create(ui_pnlAddress);
    ui_lblSubnetValue = lv_label_create(ui_pnlSubnet);
    ui_lblGatewayValue = lv_label_create(ui_pnlGateway);
    ui_lblDNSValue = lv_label_create(ui_pnlDNS);
    ui_lblConnectValue = lv_label_create(ui_pnlConnect);

    ui_pnlStatusCore = lv_obj_create(ui_screen);
    lv_obj_set_width(ui_pnlStatusCore, 640);
    lv_obj_set_height(ui_pnlStatusCore, LV_SIZE_CONTENT);
    lv_obj_set_align(ui_pnlStatusCore, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(ui_pnlStatusCore, -theme->FOOTER.HEIGHT - 5);
    lv_obj_set_flex_flow(ui_pnlStatusCore, LV_FLEX_FLOW_COLUMN);
    lv_obj_clear_flag(ui_pnlStatusCore, LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);
    lv_obj_set_style_bg_color(ui_pnlStatusCore, lv_color_hex(0x0D0803), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlStatusCore, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pnlStatusCore, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_pnlStatusCore, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_pnlStatusCore, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_pnlStatusCore, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_pnlStatusCore, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_pnlStatusCore, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_pnlStatusCore, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pnlStatus = lv_obj_create(ui_pnlStatusCore);
    if (theme->MISC.CONTENT.ALIGNMENT == 1) {
        lv_obj_set_x(ui_pnlStatusCore, (640 - theme->MISC.CONTENT.WIDTH) / 2 + theme->MISC.CONTENT.PADDING_LEFT);
    } else if (theme->MISC.CONTENT.ALIGNMENT == 2) {
        lv_obj_set_x(ui_pnlStatusCore, 640 - theme->MISC.CONTENT.WIDTH + theme->MISC.CONTENT.PADDING_LEFT);
    } else {
        lv_obj_set_x(ui_pnlStatusCore, theme->MISC.CONTENT.PADDING_LEFT);
    }

    ui_lblStatus = lv_label_create(ui_pnlStatus);
    ui_icoStatus = lv_img_create(ui_pnlStatus);
    ui_lblStatusValue = lv_label_create(ui_pnlStatus);

    ui_pnlEntry = lv_obj_create(ui_screen);
    lv_obj_set_width(ui_pnlEntry, 640);
    lv_obj_set_height(ui_pnlEntry, 480);
    lv_obj_set_align(ui_pnlEntry, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_pnlEntry, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_pnlEntry, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_pnlEntry, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(ui_pnlEntry, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_radius(ui_pnlEntry, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pnlEntry, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlEntry, 128, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pnlEntry, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_pnlEntry, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_pnlEntry, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_pnlEntry, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_pnlEntry, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_pnlEntry, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_pnlEntry, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_txtEntry = lv_textarea_create(ui_pnlEntry);
    lv_obj_set_width(ui_txtEntry, 550);
    lv_obj_set_height(ui_txtEntry, LV_SIZE_CONTENT);
    lv_obj_set_align(ui_txtEntry, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_txtEntry, 1024);
    lv_textarea_set_one_line(ui_txtEntry, true);
    lv_obj_set_style_radius(ui_txtEntry, theme->OSK.RADIUS, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_txtEntry, lv_color_hex(theme->OSK.BORDER), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_txtEntry, theme->OSK.BORDER_ALPHA, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_txtEntry, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
}
