// Lifecycle Node Class Definition

/**
Instead of inheritign from Node, you inherit from Lifecycle Node
- You'll have overwrite of several methods in there (checkout leg_filter, locations_utils or shelf_docking_controller for reference)
    - on_configure
    - on_activate
    - on_cleanup
    - on_shutdown
And basically what on_configure does is all the configuration parts
On activate means that you can now use the scanner (lifecycle publishers can be activated or deactivated for ex)
Etc etc
**/
