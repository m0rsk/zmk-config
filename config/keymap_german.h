/* Copyright 2015-2016 Matthias Schmidtt
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once



// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_CIRC &kp GRAVE  // ^ (dead)
#define DE_1    &kp N1    // 1
#define DE_2    &kp N2    // 2
#define DE_3    &kp N3    // 3
#define DE_4    &kp N4    // 4
#define DE_5    &kp N5    // 5
#define DE_6    &kp N6    // 6
#define DE_7    &kp N7    // 7
#define DE_8    &kp N8    // 8
#define DE_9    &kp N9    // 9
#define DE_0    &kp N0    // 0
#define DE_SS   &kp MINUS // ß
#define DE_ACUT &kp EQUAL  // ´ (dead)
// Row 2
#define DE_Q    &kp Q    // Q
#define DE_W    &kp W    // W
#define DE_E    &kp E    // E
#define DE_R    &kp R    // R
#define DE_T    &kp T    // T
#define DE_Z    &kp Y    // Z
#define DE_U    &kp U    // U
#define DE_I    &kp I    // I
#define DE_O    &kp O    // O
#define DE_P    &kp P    // P
#define DE_UDIA &kp LBRC // Ü
#define DE_PLUS &kp RBRC // +
// Row 3
#define DE_A    &kp A    // A
#define DE_S    &kp S    // S
#define DE_D    &kp D    // D
#define DE_F    &kp F    // F
#define DE_G    &kp G    // G
#define DE_H    &kp H    // H
#define DE_J    &kp J    // J
#define DE_K    &kp K    // K
#define DE_L    &kp L    // L
#define DE_ODIA &kp SEMI // Ö
#define DE_ADIA &kp SQT // Ä
#define DE_HASH &kp NUHS // #
// Row 4
#define DE_LABK &kp NUBS // <
#define DE_Y    &kp Z    // Y
#define DE_X    &kp X    // X
#define DE_C    &kp C    // C
#define DE_V    &kp V    // V
#define DE_B    &kp B    // B
#define DE_N    &kp N    // N
#define DE_M    &kp M    // M
#define DE_COMM &kp COMMA // ,
#define DE_DOT  &kp DOT  // .
#define DE_MINS &kp SLASH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_DEG  LS(DE_CIRC) // °
#define DE_EXLM LS(DE_1)    // !
#define DE_DQUO LS(DE_2)    // "
#define DE_SECT LS(DE_3)    // §
#define DE_DLR  LS(DE_4)    // $
#define DE_PERC LS(DE_5)    // %
#define DE_AMPR LS(DE_6)    // &
#define DE_SLSH LS(DE_7)    // /
#define DE_LPRN LS(DE_8)    // (
#define DE_RPRN LS(DE_9)    // )
#define DE_EQL  LS(DE_0)    // =
#define DE_QUES LS(DE_SS)   // ?
#define DE_GRV  LS(DE_ACUT) // ` (dead)
// Row 2
#define DE_ASTR LS(DE_PLUS) // *
// Row 3
#define DE_QUOT LS(NUHS) // '
// Row 4
#define DE_RABK LS(DE_LABK) // >
#define DE_SCLN LS(DE_COMM) // ;
#define DE_COLN LS(DE_DOT)  // :
#define DE_UNDS LS(DE_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ ² │ ³ │   │   │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ @ │   │ € │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_SUP2 RA(DE_2)    // ²
#define DE_SUP3 RA(DE_3)    // ³
#define DE_LCBR RA(DE_7)    // {
#define DE_LBRC RA(DE_8)    // [
#define DE_RBRC RA(DE_9)    // ]
#define DE_RCBR RA(DE_0)    // }
#define DE_BSLS RA(DE_SS)   // (backslash)
// Row 2
#define DE_AT   RA(DE_Q)    // @
#define DE_EURO RA(DE_E)    // €
#define DE_TILD RA(DE_PLUS) // ~
// Row 4
#define DE_PIPE RA(DE_LABK) // |
#define DE_MICR RA(DE_M)    // µ

// DEPRECATED
#define DE_UE   DE_UDIA
#define DE_OE   DE_ODIA
#define DE_AE   DE_ADIA
#define DE_LESS DE_LABK
#define DE_RING DE_DEG
#define DE_DQOT DE_DQUO
#define DE_PARA DE_SECT
#define DE_QST  DE_QUES
#define DE_MORE DE_RABK
#define DE_SQ2  DE_SUP2
#define DE_SQ3  DE_SUP3
