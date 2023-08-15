/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 50;                 /* minimum width when centered */
static const unsigned int alpha = 0xE0;     /* Amount of opacity. 0xff is opaque             */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "monospace:size=10", "NotoColorEmoji:pixelsize=10:antialias=true:autohint=true" };
/* static const char *fonts[] = { */
/* 	"monospace:size=12", */
/* 	"JoyPixels:pixelsize=10:antialias=true:autohint=true" */
/* }; */
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                    fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },

    /* gruvbox theme */
    /* [SchemeNorm] = { "#ebdbb2", "#282828" }, */
	/* [SchemeSel] = { "#ebdbb2", "#98971a" }, */
	/* [SchemeOut] = { "#ebdbb2", "#8ec07c" }, */
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
