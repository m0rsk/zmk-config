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
#define DE_DEG  LS(GRAVE) // °
#define DE_EXLM LS(N1)    // !
#define DE_DQUO LS(N2)    // "
#define DE_SECT LS(N3)    // §
#define DE_DLR  LS(N4)    // $
#define DE_PERC LS(N5)    // %
#define DE_AMPR LS(N6)    // &
#define DE_SLSH LS(N7)    // /
#define DE_LPRN LS(N8)    // (
#define DE_RPRN LS(N9)    // )
#define DE_EQL  LS(N0)    // =
#define DE_QUES LS(MINUS)   // ?
#define DE_GRV  LS(EQUAL) // ` (dead)
// Row 2
#define DE_ASTR LS(RBRC) // *
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
#define DE_SUP2 RA(N2)    // ²
#define DE_SUP3 RA(N3)    // ³
#define DE_LCBR RA(N7)    // {
#define DE_LBRC RA(N8)    // [
#define DE_RBRC RA(N9)    // ]
#define DE_RCBR RA(N0)    // }
#define DE_BSLS RA(DE_SS)   // (backslash)
// Row 2
#define DE_AT   RA(Q)    // @
#define DE_EURO RA(E)    // €
#define DE_TILD RA(RBRC) // ~
// Row 4
#define DE_PIPE RA(NUBS) // |
#define DE_MICR RA(M)    // µ

// DEPRECATED
#define DE_UE   LBRC
#define DE_OE   SEMI
#define DE_AE   SQT
#define DE_LESS NUBS
#define DE_RING DE_DEG
#define DE_DQOT DE_DQUO
#define DE_PARA DE_SECT
#define DE_QST  DE_QUES
#define DE_MORE DE_RABK
#define DE_SQ2  DE_SUP2
#define DE_SQ3  DE_SUP3
