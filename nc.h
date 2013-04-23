/* $Revision$ */
#include <ncurses.h>

extern char win_resize;
extern char draw_phase;

void init_ncurses_ui(double graph_limit_in, double hz_in);
void end_ncurses(void);
void fast_log(const char *fmt, ...);
void slow_log(const char *fmt, ...);
void my_beep(void);
void update_terminal(void);
void status_line(char *fmt, ...);
void update_stats(stats_t *resolve, stats_t *connect, stats_t *request, stats_t *total, stats_t *ssl_setup, int n_ok, int n_fail, const char *last_connect_str, const char *fp, char use_tfo, char dg, char use_ssl, stats_t *st_to, stats_t *tcp_rtt_stats, int re_tx, int pmtu, int tos);
