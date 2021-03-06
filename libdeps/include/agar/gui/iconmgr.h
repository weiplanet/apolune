/*	Public domain	*/

#ifndef _AGAR_GUI_ICONMGR_H_
#define _AGAR_GUI_ICONMGR_H_
#include <agar/gui/begin.h>

/* Description of icon stored in data segment. */
typedef struct ag_static_icon {
	Uint w, h;			/* Dimensions in pixels */
	Uint32 Rmask;			/* Red mask */
	Uint32 Gmask;			/* Green mask */
	Uint32 Bmask;			/* Blue mask */
	Uint32 Amask;			/* Alpha mask */
	const Uint32 *data;		/* Pixel data */
	AG_Surface *s;			/* Initialized surface */
} AG_StaticIcon;

/* Begin generated block */
__BEGIN_DECLS
extern DECLSPEC void AG_InitStaticIcon(AG_StaticIcon *);
extern DECLSPEC AG_Surface *AG_ObjectIcon(void *);
__END_DECLS
/* Close generated block */

#include <agar/gui/close.h>
#endif	/* _AGAR_GUI_ICONMGR_H_ */
