#ifndef DEBUGGER_TUI_H
#define DEBUGGER_TUI_H

#include <z80e/ti/asic.h>
#include <z80e/debugger/debugger.h>

#ifdef CURSES
#include <curses.h>
#endif

typedef struct {
	debugger_t *debugger;
#ifdef CURSES
	WINDOW *debugger_window;
#endif
} tui_state_t;

#ifndef EMSCRIPTEN
void tui_init(tui_state_t *state);
void tui_tick(tui_state_t *state);
#endif

#endif