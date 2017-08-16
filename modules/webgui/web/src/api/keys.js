// eslint-disable import/prefer-default-export

// key for setting/getting the Origin (focus) node
export const OriginKey = 'NavigationHandler.Origin';
// key to get all scene graph nodes
export const SceneGraphKey = '__allNodes';
// script to toggle pause
export const TogglePauseScript = 'openspace.time.togglePause()';
// key for getting current time subscription
export const TimeKey = 'special:currentTime';
// script to toggle shutdown
export const ShutdownScript = 'openspace.toggleShutdown()';
// toggle console
export const ToggleConsoleScript = 'openspace.setPropertyValue("Global Properties.ImGUI.Main.Enabled", ' +
                                   'not openspace.getPropertyValue("Global Properties.ImGUI.Main.Enabled"))';
