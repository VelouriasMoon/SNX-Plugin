#pragma once
#include "pch.h"
#include "SDK.hpp"

class ModPatch
{
public:
	static SDK::FTextDataCell MergeMessage;

	static std::map<std::string, SDK::FItemDataCell> DT_ItemData;
	static std::map<std::string, SDK::FTextDataCell> DT_ItemName;
	static std::map<std::string, SDK::FTextDataCell> DT_ItemDescription;

	//Costume Tables
	static std::map<std::string, SDK::FFPlayerCostumeData> DT_Costume_ch0100;
	static std::map<std::string, SDK::FFPlayerCostumeData> DT_Costume_ch0200;
	static std::map<std::string, SDK::FFPlayerCostumeData> DT_Costume_ch0300;
	static std::map<std::string, SDK::FFPlayerCostumeData> DT_Costume_ch0400;
	static std::map<std::string, SDK::FFPlayerCostumeData> DT_Costume_ch0500;
	static std::map<std::string, SDK::FFPlayerCostumeData> DT_Costume_ch0600;
	static std::map<std::string, SDK::FFPlayerCostumeData> DT_Costume_ch0700;
	static std::map<std::string, SDK::FFPlayerCostumeData> DT_Costume_ch0800;
	static std::map<std::string, SDK::FFPlayerCostumeData> DT_Costume_ch0900;
	static std::map<std::string, SDK::FFPlayerCostumeData> DT_Costume_ch1000;

	//Add-on Content
	static std::map<std::string, SDK::FAddContentRefDataCell> AddContentDataTable;
	static std::map<std::string, SDK::FAddContentsPresentList> DT_AddContentsPresentList;
	static std::vector<std::string> AddContentsNameList;

private:
	static void ProccessCostumeTable(toml::table table, std::map<std::string, SDK::FFPlayerCostumeData>* DataTable);
	static void ProccessItemTable(toml::table table, std::map<std::string, SDK::FItemDataCell>* DataTable);
	static void ProccessTextTable(toml::table table, std::map<std::string, SDK::FTextDataCell>* DataTable);
	static void ProccessAddContentTable(toml::table table, std::map<std::string, SDK::FAddContentRefDataCell>* DataTable);
	static void ProccessAddContentGiftsTable(toml::table table, std::map<std::string, SDK::FAddContentsPresentList>* DataTable);

public:
	static bool init();

};