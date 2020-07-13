static const char norm_fg[] = "#aacdd9";
static const char norm_bg[] = "#010709";
static const char norm_border[] = "#768f97";

static const char sel_fg[] = "#aacdd9";
static const char sel_bg[] = "#455C56";
static const char sel_border[] = "#aacdd9";

static const char urg_fg[] = "#aacdd9";
static const char urg_bg[] = "#27556A";
static const char urg_border[] = "#27556A";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
