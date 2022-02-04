//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <flatpak/flatpak_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) flatpak_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FlatpakPlugin");
  flatpak_plugin_register_with_registrar(flatpak_registrar);
}
