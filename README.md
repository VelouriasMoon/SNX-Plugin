# SNX-Plugin
A code plugin for Scarlet Nexus to extend to modability with a main focus on live DataTable merging.

> [!WARNING]
> This Plugin was made off of the latest(v1.08) of the **Steam** version of the game, other versions are not actively supported.  

## Navigation
[Installation](#installation)
[Features](#features)
[Credits](#credits)

## Installation
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

## Credits
[Dumper-7](https://github.com/Encryqed/Dumper-7) - For SDK creation  
[TOML++](https://marzer.github.io/tomlplusplus/) - Toml parsing  
[magic_enum](https://github.com/Neargye/magic_enum) - Converting strings into enums
