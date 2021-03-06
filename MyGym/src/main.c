/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *Connection;
  GtkWidget *EspaceAdmin;
  GtkWidget *comptes;
  GtkWidget *adherent;
  GtkWidget *ajoutadh;
  GtkWidget *modifadh;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  Connection = create_Connection ();
  gtk_widget_show (Connection);
  EspaceAdmin = create_EspaceAdmin ();
  gtk_widget_show (EspaceAdmin);
  comptes = create_comptes ();
  gtk_widget_show (comptes);
  adherent = create_adherent ();
  gtk_widget_show (adherent);
  ajoutadh = create_ajoutadh ();
  gtk_widget_show (ajoutadh);
  modifadh = create_modifadh ();
  gtk_widget_show (modifadh);

  gtk_main ();
  return 0;
}

