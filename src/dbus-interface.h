/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __DBUS_INTERFACE_H__
#define __DBUS_INTERFACE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for net.sapples.LiveCaptions.External */

#define DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL (dblcap_net_sapples_live_captions_external_get_type ())
#define DBLCAP_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL, DBLCapNetSapplesLiveCaptionsExternal))
#define DBLCAP_IS_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL))
#define DBLCAP_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL, DBLCapNetSapplesLiveCaptionsExternalIface))

struct _DBLCapNetSapplesLiveCaptionsExternal;
typedef struct _DBLCapNetSapplesLiveCaptionsExternal DBLCapNetSapplesLiveCaptionsExternal;
typedef struct _DBLCapNetSapplesLiveCaptionsExternalIface DBLCapNetSapplesLiveCaptionsExternalIface;

struct _DBLCapNetSapplesLiveCaptionsExternalIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_allow_keep_above) (
    DBLCapNetSapplesLiveCaptionsExternal *object,
    GDBusMethodInvocation *invocation);

  gboolean  (*get_keep_above) (DBLCapNetSapplesLiveCaptionsExternal *object);

  gboolean  (*get_text_stream_active) (DBLCapNetSapplesLiveCaptionsExternal *object);

  void (*text_stream) (
    DBLCapNetSapplesLiveCaptionsExternal *object,
    const gchar *arg_text);

};

GType dblcap_net_sapples_live_captions_external_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *dblcap_net_sapples_live_captions_external_interface_info (void);
guint dblcap_net_sapples_live_captions_external_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void dblcap_net_sapples_live_captions_external_complete_allow_keep_above (
    DBLCapNetSapplesLiveCaptionsExternal *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void dblcap_net_sapples_live_captions_external_emit_text_stream (
    DBLCapNetSapplesLiveCaptionsExternal *object,
    const gchar *arg_text);



/* D-Bus method calls: */
void dblcap_net_sapples_live_captions_external_call_allow_keep_above (
    DBLCapNetSapplesLiveCaptionsExternal *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean dblcap_net_sapples_live_captions_external_call_allow_keep_above_finish (
    DBLCapNetSapplesLiveCaptionsExternal *proxy,
    GAsyncResult *res,
    GError **error);

gboolean dblcap_net_sapples_live_captions_external_call_allow_keep_above_sync (
    DBLCapNetSapplesLiveCaptionsExternal *proxy,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
gboolean dblcap_net_sapples_live_captions_external_get_keep_above (DBLCapNetSapplesLiveCaptionsExternal *object);
void dblcap_net_sapples_live_captions_external_set_keep_above (DBLCapNetSapplesLiveCaptionsExternal *object, gboolean value);

gboolean dblcap_net_sapples_live_captions_external_get_text_stream_active (DBLCapNetSapplesLiveCaptionsExternal *object);
void dblcap_net_sapples_live_captions_external_set_text_stream_active (DBLCapNetSapplesLiveCaptionsExternal *object, gboolean value);


/* ---- */

#define DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY (dblcap_net_sapples_live_captions_external_proxy_get_type ())
#define DBLCAP_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY, DBLCapNetSapplesLiveCaptionsExternalProxy))
#define DBLCAP_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY, DBLCapNetSapplesLiveCaptionsExternalProxyClass))
#define DBLCAP_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY, DBLCapNetSapplesLiveCaptionsExternalProxyClass))
#define DBLCAP_IS_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY))
#define DBLCAP_IS_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_PROXY))

typedef struct _DBLCapNetSapplesLiveCaptionsExternalProxy DBLCapNetSapplesLiveCaptionsExternalProxy;
typedef struct _DBLCapNetSapplesLiveCaptionsExternalProxyClass DBLCapNetSapplesLiveCaptionsExternalProxyClass;
typedef struct _DBLCapNetSapplesLiveCaptionsExternalProxyPrivate DBLCapNetSapplesLiveCaptionsExternalProxyPrivate;

struct _DBLCapNetSapplesLiveCaptionsExternalProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  DBLCapNetSapplesLiveCaptionsExternalProxyPrivate *priv;
};

struct _DBLCapNetSapplesLiveCaptionsExternalProxyClass
{
  GDBusProxyClass parent_class;
};

GType dblcap_net_sapples_live_captions_external_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DBLCapNetSapplesLiveCaptionsExternalProxy, g_object_unref)
#endif

void dblcap_net_sapples_live_captions_external_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
DBLCapNetSapplesLiveCaptionsExternal *dblcap_net_sapples_live_captions_external_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
DBLCapNetSapplesLiveCaptionsExternal *dblcap_net_sapples_live_captions_external_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void dblcap_net_sapples_live_captions_external_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
DBLCapNetSapplesLiveCaptionsExternal *dblcap_net_sapples_live_captions_external_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
DBLCapNetSapplesLiveCaptionsExternal *dblcap_net_sapples_live_captions_external_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON (dblcap_net_sapples_live_captions_external_skeleton_get_type ())
#define DBLCAP_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON, DBLCapNetSapplesLiveCaptionsExternalSkeleton))
#define DBLCAP_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON, DBLCapNetSapplesLiveCaptionsExternalSkeletonClass))
#define DBLCAP_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON, DBLCapNetSapplesLiveCaptionsExternalSkeletonClass))
#define DBLCAP_IS_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON))
#define DBLCAP_IS_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), DBLCAP_TYPE_NET_SAPPLES_LIVE_CAPTIONS_EXTERNAL_SKELETON))

typedef struct _DBLCapNetSapplesLiveCaptionsExternalSkeleton DBLCapNetSapplesLiveCaptionsExternalSkeleton;
typedef struct _DBLCapNetSapplesLiveCaptionsExternalSkeletonClass DBLCapNetSapplesLiveCaptionsExternalSkeletonClass;
typedef struct _DBLCapNetSapplesLiveCaptionsExternalSkeletonPrivate DBLCapNetSapplesLiveCaptionsExternalSkeletonPrivate;

struct _DBLCapNetSapplesLiveCaptionsExternalSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  DBLCapNetSapplesLiveCaptionsExternalSkeletonPrivate *priv;
};

struct _DBLCapNetSapplesLiveCaptionsExternalSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType dblcap_net_sapples_live_captions_external_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (DBLCapNetSapplesLiveCaptionsExternalSkeleton, g_object_unref)
#endif

DBLCapNetSapplesLiveCaptionsExternal *dblcap_net_sapples_live_captions_external_skeleton_new (void);


G_END_DECLS

#endif /* __DBUS_INTERFACE_H__ */
