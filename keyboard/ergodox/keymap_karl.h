static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Keymap: Default Layer in QWERTY
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   §    |   1  |   2  |   3  |   4  |   5  |  ´   |           |   '  |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  | ~L5  |           | ~L6  |   Y  |   U  |   I  |   O  |   P  |   Å    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  ~L2   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   Ö  |   Ä    |
     * |--------+------+------+------+------+------|  L0  |           | ~L7  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   -  | RShift
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | ~L5  | ~L2  | LAlt | LGui | LCtrl|                                       | RCtrl| L2   |  Dn  |  Up  | Rght |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | +L2  | Home |       |      | Del  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  End |       | PgUp |      |      |
     *                                 | BkSp |  ESC |------|       |------| Enter| Space|
     *                                 |      |      | FN15 |       | PgDn |      |      |
     *                                 `--------------------'       `--------------------'
     *
     * Symbol layer
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   '    |  F1  |  F2  |  F3  |  F4  |  F5  |  ESC |           |  F12 |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |  ^   |  $   |  |   |  ~   |      | ~L5  |           | ~L6  |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Tab/Shf|  {   |  }   |  [   |  ]   |      |------|           |------| Left |  Up  |  Dn  | Rght |      |        |
     * |--------+------+------+------+------+------|  L0  |           | ~L7  |------+------+------+------+------+--------|
     * | LShift |      |      |  <   |  >   |      |      |           |      |      |      |      |      |      | RShift
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | ~L5  | ~L2  | LAlt | LGui | LCtrl|                                       | RCtrl| L2   |  Dn  |  Up  | Rght |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | +L2  | Home |       | PgUp | Del  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 | BkSp |  ESC |------|       |------| Enter| Space|
     *                                 |      |      |  Spc |       | Ins  |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP(  // layer 0 : default
        // left hand
        FN12,1,   2,   3,   4,   5,   EQL,
        TAB, Q,   W,   E,   R,   T,   FN2,
        FN1, A,   S,   D,   F,   G,
        LSFT,  Z,   X,   C,   V,   B,   FN1,
        LGUI,GRV, LALT,LGUI,LCTL,
                                      LCTL,LALT,
                                           HOME,
                                 BSPC,ESC, FN16,
        // right hand
             BSLS,6,   7,   8,   9,   0,   MINS,
             LBRC,Y,   U,   I,   O,   P,   LBRC,
                  H,   J,   K,   L,   SCLN,QUOT,
             FN1, N,   M,   COMM,DOT, SLSH,RSFT,
                       RCTL,FN1, DOWN,UP,  RGHT,
        RALT,RCTL,
        PGUP,
        PGDN,ENT, SPC
    ),
    KEYMAP(  // layer 1 : function and symbol keys
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F11,
        TRNS,FN14,FN15,TRNS,FN13,TRNS,FN4,
        TRNS,FN8, FN9, FN10,FN11,TRNS,
        TRNS,TRNS,TRNS,GRV, FN5 ,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 DEL ,TRNS,TRNS,
        // right hand
             F12, F6,  F7,  F8,  F9,  F10, F11,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,
                  LEFT,DOWN,UP,  RGHT,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 2 : keyboard functions
        // left hand
        FN0, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             FN4, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 3: numpad
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

enum macro_id {
  MACRO_CARET,
};


/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(TEENSY_KEY),                    // FN0 - Teensy key
    ACTION_LAYER_MOMENTARY(1),                      // FN1 - switch to Layer1
    ACTION_LAYER_MOMENTARY(2),                      // FN2 - switch to Layer2
    ACTION_LAYER_MOMENTARY(3),                      // FN3 - switch to Layer3
    ACTION_LAYER_MOMENTARY(3),                      // FN4 - switch to Layer3

    ACTION_MODS_KEY(MOD_LSFT, KC_GRV),              // FN5 - Shift with ~ = >
    ACTION_MODS_KEY(MOD_LSFT, KC_8),                // FN6 - Shift with 8 = (
    ACTION_MODS_KEY(MOD_LSFT, KC_9),                // FN7 - Shift with 9 = )
    ACTION_MODS_KEY(MOD_LSFT|MOD_LALT, KC_8),       // FN8 - Shift + alt with 8 = {
    ACTION_MODS_KEY(MOD_LSFT|MOD_LALT, KC_9),       // FN9 - Shift + alt with 9 = }
    ACTION_MODS_KEY(MOD_LALT, KC_8),                // FN10 - Alt with 8 = [
    ACTION_MODS_KEY(MOD_LALT, KC_9),                // FN11 - Alt with 9 = ]

    ACTION_MODS_KEY(MOD_LALT, KC_6),                // FN12 - Alt with 6 = §
    ACTION_MODS_KEY(MOD_LALT, KC_RBRC),             // FN13 - Alt with ] = ~
    /* ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN14 - Shift with ] = ^ */
    ACTION_MACRO(MACRO_CARET),                      // FN14 - Shift with ] plus space = ^
    ACTION_MODS_KEY(MOD_LALT, KC_4),                // FN14 - Alt with 4 = $

    ACTION_MODS_KEY(MOD_LALT, KC_SPC),              // FN16 - Alt with Space = Launch Bar
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case MACRO_CARET:
            return (record->event.pressed ?
                    MACRO( D(LSHIFT), T(RBRC), U(LSHIFT), END ) :
                    MACRO( T(SPACE), END ));
    }
    return MACRO_NONE;
}
