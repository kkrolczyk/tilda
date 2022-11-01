#ifndef TILDA_DBUS_ACTIONS_H
#define TILDA_DBUS_ACTIONS_H

#include "tilda_window.h"

guint  tilda_dbus_actions_init (tilda_window *window);

gchar *tilda_dbus_actions_get_bus_name (tilda_window *window);

void   tilda_dbus_actions_finish (guint bus_identifier);

#define TILDA_DBUS_ACTIONS_BUS_NAME "com.github.lanoxx.tilda.Actions"
#define TILDA_DBUS_ACTIONS_OBJECT_PATH "/com/github/lanoxx/tilda/Actions"

#endif
