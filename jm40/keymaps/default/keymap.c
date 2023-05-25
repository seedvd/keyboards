// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN,
};

enum custom_keycodes {
A01 = SAFE_RANGE,A02,A03,A04,A05,A06,A07,A08,A09,A10,A11,
B01,B02,B03,B04,B05,B06,B07,B08,B09,B10,B11,B12,
C01,C02,C03,C04,C05,C06,C07,C08,C09,C10,C11,C12,
    D02,D03,D04,D05,D06,D07,D08,D09,D10,D11,

E01,E02,E03,E04,E05,E06,E07,E08,E09,E10,E11,
F01,F02,F03,F04,F05,F06,F07,F08,F09,F10,F11,F12,
G01,G02,G03,G04,G05,G06,G07,G08,G09,G10,G11,G12,
    H02,H03,H04,H05,H06,H07,H08,H09,H10,H11  
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    
    case A01:
        if (record->event.pressed) {
            // when keycode TV is pressed
            SEND_STRING("tv");
        } else {
            // when keycode TV is released
        }
        break;

    case A02:
        if (record->event.pressed) {
            // when keycode GB is pressed
            SEND_STRING("gb");
        } else {
            // when keycode GB is released
        }
        break;

    case A03:
        if (record->event.pressed) {
            // when keycode APO is pressed
            SEND_STRING("apo");
        } else {
            // when keycode APO is released
        }
        break;

    case A04:
        if (record->event.pressed) {
            // when keycode HP is pressed
            SEND_STRING("hp");
        } else {
            // when keycode HP is released
        }
        break;

    case A05:
        if (record->event.pressed) {
            // when keycode TP is pressed
            SEND_STRING("tp");
        } else {
            // when keycode TP is released
        }
        break;

    case A06:
        if (record->event.pressed) {
            // when keycode ESW is pressed
            SEND_STRING("esw");
        } else {
            // when keycode ESW is released
        }
        break;

    case A07:
        if (record->event.pressed) {
            // when keycode FUC is pressed
            SEND_STRING("fuc");
        } else {
            // when keycode FUC is released
        }
        break;

    case A08:
        if (record->event.pressed) {
            // when keycode ML is pressed
            SEND_STRING("ml");
        } else {
            // when keycode ML is released
        }
        break;

    case A09:
        if (record->event.pressed) {
            // when keycode BTK is pressed
            SEND_STRING("btk");
        } else {
            // when keycode BTK is released
        }
        break;

    case A10:
        if (record->event.pressed) {
            // when keycode SP is pressed
            SEND_STRING("sp");
        } else {
            // when keycode SP is released
        }
        break;

    case A11:
        if (record->event.pressed) {
            // when keycode FPE is pressed
            SEND_STRING("fpe");
        } else {
            // when keycode FPE is released
        }
        break;


    case B01:
        if (record->event.pressed) {
            // when keycode UT is pressed
            SEND_STRING("ut");
        } else {
            // when keycode UT is released
        }
        break;

    case B02:
        if (record->event.pressed) {
            // when keycode RBP is pressed
            SEND_STRING("rbp");
        } else {
            // when keycode RBP is released
        }
        break;

    case B03:
        if (record->event.pressed) {
            // when keycode APU is pressed
            SEND_STRING("apu");
        } else {
            // when keycode APU is released
        }
        break;

    case B04:
        if (record->event.pressed) {
            // when keycode TM is pressed
            SEND_STRING("tm");
        } else {
            // when keycode TM is released
        }
        break;

    case B05:
        if (record->event.pressed) {
            // when keycode SA is pressed
            SEND_STRING("sa");
        } else {
            // when keycode SA is released
        }
        break;

    case B06:
        if (record->event.pressed) {
            // when keycode ORG is pressed
            SEND_STRING("org");
        } else {
            // when keycode ORG is released
        }
        break;

    case B07:
        if (record->event.pressed) {
            // when keycode CB is pressed
            SEND_STRING("cb");
        } else {
            // when keycode CB is released
        }
        break;

    case B08:
        if (record->event.pressed) {
            // when keycode TB is pressed
            SEND_STRING("tb");
        } else {
            // when keycode TB is released
        }
        break;

    case B09:
        if (record->event.pressed) {
            // when keycode POP is pressed
            SEND_STRING("pop");
        } else {
            // when keycode POP is released
        }
        break;

    case B10:
        if (record->event.pressed) {
            // when keycode FP is pressed
            SEND_STRING("fp");
        } else {
            // when keycode FP is released
        }
        break;

    case B11:
        if (record->event.pressed) {
            // when keycode FPC is pressed
            SEND_STRING("fpc");
        } else {
            // when keycode FPC is released
        }
        break;

    case B12:
        if (record->event.pressed) {
            // when keycode AV is pressed
            SEND_STRING("av");
        } else {
            // when keycode AV is released
        }
        break;

    case C01:
        if (record->event.pressed) {
            // when keycode UC is pressed
            SEND_STRING("uc");
        } else {
            // when keycode UC is released
        }
        break;

    case C02:
        if (record->event.pressed) {
            // when keycode RBS is pressed
            SEND_STRING("rbs");
        } else {
            // when keycode RBS is released
        }
        break;

    case C03:
        if (record->event.pressed) {
            // when keycode AP is pressed
            SEND_STRING("ap");
        } else {
            // when keycode AP is released
        }
        break;

    case C04:
        if (record->event.pressed) {
            // when keycode RU is pressed
            SEND_STRING("ru");
        } else {
            // when keycode RU is released
        }
        break;

    case C05:
        if (record->event.pressed) {
            // when keycode FIT is pressed
            SEND_STRING("fit");
        } else {
            // when keycode FIT is released
        }
        break;

    case C06:
        if (record->event.pressed) {
            // when keycode PP is pressed
            SEND_STRING("pp");
        } else {
            // when keycode PP is released
        }
        break;

    case C07:
        if (record->event.pressed) {
            // when keycode BC is pressed
            SEND_STRING("bc");
        } else {
            // when keycode BC is released
        }
        break;

    case C08:
        if (record->event.pressed) {
            // when keycode OS is pressed
            SEND_STRING("os");
        } else {
            // when keycode OS is released
        }
        break;

    case C09:
        if (record->event.pressed) {
            // when keycode POS is pressed
            SEND_STRING("pos");
        } else {
            // when keycode POS is released
        }
        break;

    case C10:
        if (record->event.pressed) {
            // when keycode FS is pressed
            SEND_STRING("fs");
        } else {
            // when keycode FS is released
        }
        break;

    case C11:
        if (record->event.pressed) {
            // when keycode FPH is pressed
            SEND_STRING("fph");
        } else {
            // when keycode FPH is released
        }
        break;

    case C12:
        if (record->event.pressed) {
            // when keycode WB is pressed
            SEND_STRING("wb");
        } else {
            // when keycode WB is released
        }
        break;


    case D02:
        if (record->event.pressed) {
            // when keycode ^ and Enter is pressed
            SEND_STRING("^\n");
        } else {
            // when keycode ^ and Enter is released
        }
        break;

    case D03:
        if (record->event.pressed) {
            // when keycode /15 and Enter is pressed
            SEND_STRING("/15\n");
        } else {
            // when keycode /15 and Enter is released
        }
        break;

    case D04:
        if (record->event.pressed) {
            // when keycode /16 and Enter is pressed
            SEND_STRING("/16\n");
        } else {
            // when keycode /16 and Enter is released
        }
        break;

    case D05:
        if (record->event.pressed) {
            // when keycode ST and Enter is pressed
            SEND_STRING("st\n");
        } else {
            // when keycode ST and Enter is released
        }
        break;

    case D06:
        if (record->event.pressed) {
            // when keycode WC and Enter is pressed
            SEND_STRING("wc\n");
        } else {
            // when keycode WC and Enter is released
        }
        break;

    case D07:
        if (record->event.pressed) {
            // when keycode GY is pressed
            SEND_STRING("gy");
        } else {
            // when keycode GY is released
        }
        break;

    case D08:
        if (record->event.pressed) {
            // when keycode PO is pressed
            SEND_STRING("po");
        } else {
            // when keycode PO is released
        }
        break;

    case D09:
        if (record->event.pressed) {
            // when keycode /- and Enter is pressed
            SEND_STRING("/-\n");
        } else {
            // when keycode /- and Enter is released
        }
        break;

    case D10:
        if (record->event.pressed) {
            // when keycode /+ and Enter is pressed
            SEND_STRING("/+\n");
        } else {
            // when keycode /+ and Enter is released
        }
        break;

    case D11:
        if (record->event.pressed) {
            // when keycode // and Enter is pressed
            SEND_STRING("//\n");
        } else {
            // when keycode // and Enter is released 
        }
        break;

//******* FN LAYER *******************************************************
    
    case E04:
        if (record->event.pressed) {
            // when keycode 5600 and Enter is pressed
            SEND_STRING("5600\n");
        } else {
            // when keycode 5600 and Enter is released 
        }
        break;

    case E05:
        if (record->event.pressed) {
            // when keycode 4401 and Enter is pressed
            SEND_STRING("4401\n");
        } else {
            // when keycode 4401 and Enter is released 
        }
        break;

    case E06:
        if (record->event.pressed) {
            // when keycode 5555 and Enter is pressed
            SEND_STRING("5555\n");
        } else {
            // when keycode 5555 and Enter is released 
        }
        break;

    case E07:
        if (record->event.pressed) {
            // when keycode /17 PO FRZ REC'D is pressed
            SEND_STRING("po frz rec'd");
        } else {
            // when keycode /17 PO FRZ REC'D is released 
        }
        break;

    case E09:
        if (record->event.pressed) {
            // when keycode CL is pressed
            SEND_STRING("cl");
        } else {
            // when keycode CL is released 
        }
        break;

    case E10:
        if (record->event.pressed) {
            // when keycode HC is pressed
            SEND_STRING("hc");
        } else {
            // when keycode HC is released 
        }
        break;

    case F01:
        if (record->event.pressed) {
            // when keycode /2 ENTER,999999, Enter is pressed
            SEND_STRING("/2\n999999\n");
        } else {
            // when keycode 999999 and Enter is released 
        }
        break;

    case F02:
        if (record->event.pressed) {
            // when keycode /2,enter,111112,enter is pressed
            SEND_STRING("/2\n111112\n");
        } else {
            // when keycode 111112 and Enter is released 
        }
        break;

    case F04:
        if (record->event.pressed) {
            // when keycode for 5600 and "URINE LEAKED IN TRANSIT" in /17 NOTE is pressed
            SEND_STRING("urine leaked in transit");
        } else {
            // when keycode for 5600 and "URINE LEAKED IN TRANSIT" in /17 NOTE is released 
        }
        break;
        
    case F05:
        if (record->event.pressed) {
            // when keycode for 4401 and "URINE EMPTY" in /17 note is pressed
            SEND_STRING("urine empty");
        } else {
            // when keycode for 4401 and "URINE EMPTY" in /17 note is released 
        }
        break;

    case F06:
        if (record->event.pressed) {
            // when keycode for 5555 and "XXXX NO FRZ REC'D" in /17 note is pressed
            SEND_STRING("xxxx no frz rec'd");
        } else {
            // when keycode for 5555 and "XXXX NO FRZ REC'D" in /17 note is released 
        }
        break;

    case F07:
        if (record->event.pressed) {
            // when keycode "HARD STICK" in /17 note is pressed
            SEND_STRING("hard stick");
        } else {
            // when keycode "HARD STICK" in /17 note is released 
        }
        break;

    case F09:
        if (record->event.pressed) {
            // when keycode MS is pressed
            SEND_STRING("ms");
        } else {
            // when keycode MS is released 
        }
        break;

    case G01:
        if (record->event.pressed) {
            // when keycode /2,enter,999998,enter is pressed
            SEND_STRING("/2\n999998\n");
        } else {
            // when keycode 999998 and Enter is released 
        }
        break;

    case G02:
        if (record->event.pressed) {
            // when keycode /2,enter,111113,enter is pressed
            SEND_STRING("/2\n111113\n");
        } else {
            // when keycode 111113 and Enter is released 
        }
        break;

    case G04:
        if (record->event.pressed) {
            // when keycode for 5600 with "IMPROPER SPECIMEN" in /17 note is pressed
            SEND_STRING("improper specimen");
        } else {
            // when keycode for 5600 with "IMPROPER SPECIMEN" in /17 note is released 
        }
        break;

    case G07:
        if (record->event.pressed) {
            // when keycode "LOW VOLUME SERUM" in /17 note is pressed
            SEND_STRING("low volume serum");
        } else {
            // when keycode "LOW VOLUME SERUM" in /17 note is released 
        }
        break;

    case G09:
        if (record->event.pressed) {
            // when keycode UOS is pressed
            SEND_STRING("uos");
        } else {
            // when keycode UOS is released 
        }
        break;

    case H02:
        if (record->event.pressed) {
            // when keycode /17 and Enter is pressed
            SEND_STRING("/17\n");
        } else {
            // when keycode /17 and Enter is released 
        }
        break;

    case H04:
        if (record->event.pressed) {
            // when keycode for 5600 with "503 out of stability" in /17 note is pressed
            SEND_STRING("503 out of stability");
        } else {
            // when keycode for 5600 with "503 out of stability" in /17 note is released 
        }
        break;

    case H09:
        if (record->event.pressed) {
            // when keycode VE is pressed
            SEND_STRING("ve");
        } else {
            // when keycode VE is released 
        }
        break;


    }
    return true;
};

/* BASE LAYER
 * ,-----------------------------------------------------------------------------------.
 * |TV    |GB    |APO   |HP    |TP    |ESW   |FUC   |ML    |BTK   |SP    |FPE   |BKSP  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |UT    |RBP   |APU   |TM    |SA    |ORG   |CB    |TB    |POP   |FP    |FPC   |AV    |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |UC    |RBS   |AP    |RU    |FIT   |PP    |BC    |OS    |POS   |FS    |FPH   |WB    |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |_FN   |^     |/15   |/16   | ST   |WC    |GY    |PO    |/_    |/+    |//    |ENTER |
 * `-----------------------------------------------------------------------------------'
 */

/* FN LAYER
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |5600  |4401  |5555  |Note  |      |CL    |HC    |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |999999|111112|      |Note  |Note  |Note  |Note  |      |MS    |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |999998|111113|      |Note  |      |      |Note  |      |UOS   |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |_FN   |/17   |      |Note  |      |      |      |      |VE    |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT (
        A01,A02,A03,A04,A05,A06,A07,A08,A09,A10,A11,KC_BACKSPACE,
        B01,B02,B03,B04,B05,B06,B07,B08,B09,B10,B11,B12,
        C01,C02,C03,C04,C05,C06,C07,C08,C09,C10,C11,C12,
        MO(_FN),D02,D03,D04,D05,D06,D07,D08,D09,D10,D11,KC_ENTER
        ),

    [_FN] = LAYOUT (
        E01,E02,E03,E04,E05,E06,E07,E08,E09,E10,E11,KC_TRANSPARENT,
        F01,F02,F03,F04,F05,F06,F07,F08,F09,F10,F11,F12,
        G01,G02,G03,G04,G05,G06,G07,G08,G09,G10,G11,G12,
        KC_TRANSPARENT,H02,H03,H04,H05,H06,H07,H08,H09,H10,H11,KC_TRANSPARENT
        ),
    
};


