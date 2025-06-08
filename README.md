# SNX-Plugin
A code plugin for Scarlet Nexus to extend to modability with a main focus on live DataTable merging.

> [!IMPORTANT]
> This Plugin was made off of the latest(v1.08) of the **Steam** version of the game, other versions are not actively supported.  

> [!WARNING]
> This Plugin **ONLY** works for Scarlet Nexus, this will not work for any other unreal games. Many structures, function hooks, and signatures are specific to Scarlet Nexus. DataTable merging is done on a per table bases, this is not and will never be a generic DataTable merger for unreal.

## Navigation
[Installation](#installation)  
[Features](#features)  
[Credits](#credits)  
[Plugin Config](#plugin-config)  
[Mod Patches](#mod-patches)  

## Installation
Download the lastest release of [SNX-Plugin](https://github.com/VelouriasMoon/SNX-Plugin/releases/latest).  
SNX-Plugin requires [Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader/releases) to load, however if you already use [UTOC Signature Bypass patch](https://www.nexusmods.com/scarletnexus/mods/18) this should already be installed. put the SNXPlugin.asi file in your plugins folder.

## Features
Currently the main feature is live DataTable merging focusing on adding new costumes into the game, the supported tables are  
- DT_ItemData (Data for all the items in the game)
- DT_ItemName (Text for item and addon names)
- DT_ItemDescription (Text for item and addon descriptions)
- DT_Costume_ch[##]00 (Costume Tables for each character 01 through 10)  
- shopTable (shop[##] tables, adds to called shop table while loading the shop)
- DT_AttachmentData (Used to define basic accessory info)
- DT_AttachmentEquip_ch[##]00 (Used for character specific accessory info, for each character 01 through 10)
- AddContentDataTable (Used for giving player gifts via the addon system)
- DT_AddContentsPresentList (Contains list of items to be given in addon gifts)

SNX-plugin also supports an option to enable the unreal console in the config toml. However it's cutoff and you can't read what you're typing making it less useful.  

## Plugin Config
The plugin config named `config.toml` is stored in the same folder as the plugin asi. this can be used to tweek some settings of the plugin, details about those settings are below.
| Option | type | Default | Info |
| ------ | ---- | ------- | ---- |
| Enable_Console | bool | true | Opens a windows terminal to display debug information from the plugin. |
| Enable_Game_Console | bool | false | Enables the ingame unreal console. |
| Save_Clean_Notification | bool | false | Shows an in game notification whenever the game save is cleaned of mod flags, only applies when using the addon contents method. left over mod flags will prevent a save from loading just like having dlc you don't own. |
| LoadAddShopTables | bool | false | *Can be changed while playing.* <br>Instead of trying to load a single shop table and patching that, this will load all the shop tables and patch them all. useful if the plugin cannot correctly determine what shop level your game is at. |

## Mod Patches
Mod Patches are toml files defined by mod makers which hold all the infomation which SNX-Plugin will merge into the game's DataTables. These toml files go along with pak mods in your `~mods` folder. The toml name does not have to match the mods name but I recommend it.  

Each table is defined by a section in the toml, so adding a new item you'll need to add it to a section called `[DT_ItemData]`, then each item is added in standard toml fashion with a Key and Value. The Key will be the same as the RowName on an Unreal DataTable, for most DataTables this name is important and should be unique. The Value depends on which table is being edited, an item will need a whole item structure but and item name or shop just uses a string.  
For detailed information about the structure formating of patches check out [https://github.com/VelouriasMoon/SNX-Plugin/wiki](https://github.com/VelouriasMoon/SNX-Plugin/wiki).  

## Credits
[Dumper-7](https://github.com/Encryqed/Dumper-7) - For SDK creation  
[TOML++](https://marzer.github.io/tomlplusplus/) - Toml parsing  
[magic_enum](https://github.com/Neargye/magic_enum) - Converting strings into enums
