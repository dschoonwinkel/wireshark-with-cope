#ifndef __RESOURCE_main_H__
#define __RESOURCE_main_H__

#include <gio/gio.h>

extern GResource *main_get_resource (void);

extern void main_register_resource (void);
extern void main_unregister_resource (void);

#endif
