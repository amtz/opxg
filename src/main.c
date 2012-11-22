#include <stdio.h>

#include <gtk/gtk.h>

gboolean on_button_press (GtkWidget* widget, GdkEventButton * event, GdkWindowEdge edge);

int main(int argc, char *argv[])
{
    GtkWidget *window;

    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_default_size(GTK_WINDOW(window), 230, 150);
    gtk_widget_add_events(window, GDK_BUTTON_PRESS_MASK);

    g_signal_connect(G_OBJECT(window), "button-press-event", G_CALLBACK(on_button_press), 0);
    gtk_widget_show(window);

    gtk_main();

    return 0;
}

gboolean on_button_press(GtkWidget* widget, GdkEventButton * event, GdkWindowEdge edge)
{
    g_print("You won! Game over!\n");

    return FALSE;
}
