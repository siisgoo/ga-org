#ifndef _MAIN_H_
#define _MAIN_H_

#include "list.h"
#include "gamerec.h"
#include <limits.h>

/* vars */
extern int done;

extern char *argv0;
extern int g_qflag, g_dflag;

extern char g_user_db[PATH_MAX];
extern char g_user_path[PATH_MAX];

extern int g_scan_depth;

extern game_tab_t gr_tab;

extern node_t *g_exceptions;
extern node_t *g_exceptions_head;
extern node_t *g_inclusions;
extern node_t *g_inclusions_head;

#endif
