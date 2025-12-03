/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "yrRYo/bvlPAD"
#define LAYER_STATE_8BIT

#define RGB_MATRIX_STARTUP_SPD 60

// https://docs.qmk.fm/features/caps_word#invert-on-shift
#define CAPS_WORD_INVERT_ON_SHIFT

// Tap-hold configuration for home row mods.
// https://getreuer.info/posts/keyboards/achordion/index.html#tap-hold-configuration
#define TAPPING_TERM 175
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM_PER_KEY

// Mouse keys
// https://docs.qmk.fm/features/mouse_keys
#define MK_KINETIC_SPEED
