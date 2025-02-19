/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include "keycodes.h"

#pragma once

/* Layout */

#define _HOME_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | P       | L       | W       | M       | Q       |    | Z       | F       | O       | U       | ' "     |   */\
       KC_P    , KC_L    , KC_W    , KC_M    , KC_Q    ,      KC_Z    , KC_F    , KC_O    , KC_U    , KC_QUOT ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Y       | R       | S       | T       | K       |    | J       | N       | A       | E       | I       |   */\
       KC_Y    , KC_R    , MT_S    , MT_T    , KC_K    ,      KC_J    , MT_N    , MT_A    , KC_E    , KC_I    ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Z       | X       | C       | D       | V       |    | K       | H       | , <     | ; :     | . >     |   */\
       KC_G    , KC_X    , KC_C    , KC_D    , KC_V    ,      KC_B    , KC_H    , KC_COMM , KC_SCLN , KC_DOT  ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | SPC     |         |    |         |         |                                 */\
                                     LT_SPC  , OSM_SFT ,      OSM_CTL , OSL_SYM
/*                                 `-------------------'    `-------------------'                                 */


#define _SYM_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | ESC     | @       | #       | $       | %       |    | ^       | &       | *       | `       | BSPC    |   */\
       KC_ESC  , KC_AT   , KC_HASH , KC_DLR  , KC_PERC ,      KC_CIRC , KC_AMPR , KC_ASTR , KC_GRV  , KC_BSPC ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | TAB     | =       | _       | -       | +       |    | \       | (       | )       | |       | ENT     |   */\
       KC_TAB  , KC_EQL  , KC_UNDS , KC_MINS , KC_PLUS ,      KC_BSLS , KC_LPRN , KC_RPRN , KC_PIPE , KC_ENT  ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         | ?       | /       | !       | ~       |    | [       | {       | }       | ]       |         |   */\
       KC_NO   , KC_QUES , KC_SLSH , KC_EXLM , KC_TILD ,      KC_LBRC , KC_LCBR , KC_RCBR , KC_RBRC , TO_GLOB ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     TO_HOME , OSM_SFT ,      OSM_CTL , TO_NUM
/*                                 `-------------------'    `-------------------'                                 */


#define _BASE_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | P       | L       | W       | M       | Q       |    | Z       | F       | O       | U       | '       |   */\
       ES_P    , ES_L    , ES_W    , ES_M    , ES_Q    ,      ES_Z    , ES_F    , ES_O    , ES_U    , ES_QUOT ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Y       | R       | S       | T       | K       |    | J       | N       | A       | E       | I       |   */\
       ES_Y    , ES_R    , MT_S    , MT_T    , ES_K    ,      ES_J    , MT_N    , MT_A    , ES_E    , ES_I    ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Z       | X       | C       | D       | V       |    | K       | H       | ,       | ;       | .       |   */\
       ES_G    , ES_X    , ES_C    , ES_D    , ES_V    ,      ES_B    , ES_H    , ES_COMM , ES_SCLN , ES_DOT  ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | SPC     |         |    |         |         |                                 */\
                                     LT_SPC  , OSL_MAJ ,      OSM_CTL , OSL_SIM
/*                                 `-------------------'    `-------------------'                                 */


#define _MAJ_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | P       | L       | W       | M       | Q       |    | Z       | F       | O       | U       | "       |   */\
       S(ES_P) , S(ES_L) , S(ES_W) , S(ES_M) , S(ES_Q) ,      S(ES_Z) , S(ES_F) , S(ES_O) , S(ES_U) , ES_DQUO ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Y       | R       | S       | T       | K       |    | J       | N       | A       | E       | I       |   */\
       S(ES_Y) , S(ES_R) , S(ES_S) , S(ES_T) , S(ES_K) ,      S(ES_J) , S(ES_N) , S(ES_A) , S(ES_E) , S(ES_I) ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Z       | X       | C       | D       | V       |    | K       | H       | <       | :       | >       |   */\
       S(ES_G) , S(ES_X) , S(ES_C) , S(ES_D) , S(ES_V) ,      S(ES_B) , S(ES_H) , ES_LABK , ES_COLN , ES_RABK ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | SPC     |         |    |         |         |                                 */\
                                     LT_SPC  , OSL_MAJ ,      OSM_CTL , OSL_SIM
/*                                 `-------------------'    `-------------------'                                 */


#define _QWTY_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | Q       | W       | E       | R       | T       |    | Y       | U       | I       | O       | P       |   */\
       ES_Q    , ES_W    , ES_E    , ES_R    , ES_T    ,      ES_Y    , ES_U    , ES_I    , ES_O    , ES_P    ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | A       | S       | D       | F       | G       |    | H       | J       | K       | L       | Ñ       |   */\
       ES_A    , ES_S    , ES_D    , ES_F    , ES_G    ,      ES_H    , ES_J    , ES_K    , ES_L    , ES_NTIL ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Q       | X       | C       | V       | B       |    | N       | M       | , ;     | . :     | - _     |   */\
       ES_Q    , ES_X    , ES_C    , ES_V    , ES_B    ,      ES_N    , ES_M    , ES_COMM , ES_DOT  , ES_MINS ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | SPC     |         |    |         |         |                                 */\
                                     LT_SPC  , OSM_SFT ,      OSM_CTL , OSL_SIM
/*                                 `-------------------'    `-------------------'                                 */


#define _SIM_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | ESC     | @       | #       | $       | %       |    | ^       | &       | *       | `       | BSPC    |   */\
       KC_ESC  , ES_AT   , ES_HASH , ES_DLR  , ES_PERC ,      ES_CIRC , ES_AMPR , ES_ASTR , ES_GRV  , KC_BSPC ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | TAB     | =       | _       | -       | +       |    | \       | (       | )       | |       | ENT     |   */\
       KC_TAB  , ES_EQL  , ES_UNDS , ES_MINS , ES_PLUS ,      ES_BSLS , ES_LPRN , ES_RPRN , ES_PIPE , KC_ENT  ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         | ?       | /       | !       | ~       |    | [       | {       | }       | ]       |         |   */\
       KC_NO   , ES_QUES , ES_SLSH , ES_EXLM , ES_TILD ,      ES_LBRC , ES_LCBR , ES_RCBR , ES_RBRC , TO_GLOB ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     TO_BASE , OSM_SFT ,      OSM_CTL , TO_NUM
/*                                 `-------------------'    `-------------------'                                 */


#define _NUM_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | NUM     | ·       | ¿       | ¡       | PSCR    |    | +       | P7 HOME | P8 UP   | P9 PGUP | BSPC    |   */\
       KC_NUM  , ES_BULT , ES_IQUE , ES_IEXL , KC_PSCR ,      KC_PPLS , KC_P7   , KC_P8   , KC_P9   , KC_BSPC ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         | ¨       | `       | ´       | €       |    | P0 INS  | P4 LEFT | P5      | P6 RGHT | PENT    |   */\
       KC_NO   , ES_DIAE , ES_GRV  , ES_ACUT , ES_EUR  ,      KC_P0   , KC_P4   , KC_P5   , KC_P6   , KC_PENT ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         |         | Ç       | Ñ       |         |    | -       | P1 END  | P2 DOWN | P3 PGDN | . DEL   |   */\
       KC_NO   , KC_NO   , ES_CCED , ES_NTIL , KC_NO   ,      KC_PMNS , KC_P1   , KC_P2   , KC_P3   , KC_PDOT ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     TO_BASE , OSM_SFT ,      OSM_CTL , KC_NO
/*                                 `-------------------'    `-------------------'                                 */


#define _GLOB_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   |         | MS BTN1 | MS UP   | MS BTN2 | WBAK    |    | BOOT    | F7      | F8      | F9      | F10     |   */\
       KC_NO   , MS_BTN1 , MS_UP   , MS_BTN2 , KC_WBAK ,      QK_BOOT , KC_F7   , KC_F8   , KC_F9   , KC_F10  ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         | MS LEFT | MS DOWN | MS RGHT | WFWD    |    |         | F4      | F5      | F6      | F11     |   */\
       TO_BASE , MS_LEFT , MS_DOWN , MS_RGHT , KC_WFWD ,      KC_VOLU , KC_F4   , KC_F5   , KC_F6   , KC_F11  ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         | MS LEFT | MS UP   | MS DOWN | MS RGHT |    |         | F1      | F2      | F3      | F12     |   */\
       TO_QWTY , MS_WHLL , MS_WHLU , MS_WHLD , MS_WHLR ,      KC_VOLD , KC_F1   , KC_F2   , KC_F3   , KC_F12  ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     TO_BASE , OSM_SFT ,      OSM_ALT , KC_NO
/*                                 `-------------------'    `-------------------'                                 */

