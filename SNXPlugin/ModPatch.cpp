#include "ModPatch.h"
#include "Signature.h"
#include <filesystem>
#include "Util.h"
#include "magic_enum.hpp"

SDK::FTextDataCell ModPatch::MergeMessage;
std::map<std::string, SDK::FItemDataCell> ModPatch::DT_ItemData;
std::map<std::string, SDK::FFPlayerCostumeData> ModPatch::DT_Costume_ch0100;
std::map<std::string, SDK::FFPlayerCostumeData> ModPatch::DT_Costume_ch0200;
std::map<std::string, SDK::FFPlayerCostumeData> ModPatch::DT_Costume_ch0300;
std::map<std::string, SDK::FFPlayerCostumeData> ModPatch::DT_Costume_ch0400;
std::map<std::string, SDK::FFPlayerCostumeData> ModPatch::DT_Costume_ch0500;
std::map<std::string, SDK::FFPlayerCostumeData> ModPatch::DT_Costume_ch0600;
std::map<std::string, SDK::FFPlayerCostumeData> ModPatch::DT_Costume_ch0700;
std::map<std::string, SDK::FFPlayerCostumeData> ModPatch::DT_Costume_ch0800;
std::map<std::string, SDK::FFPlayerCostumeData> ModPatch::DT_Costume_ch0900;
std::map<std::string, SDK::FFPlayerCostumeData> ModPatch::DT_Costume_ch1000;
std::map<std::string, SDK::FTextDataCell> ModPatch::DT_ItemName;
std::map<std::string, SDK::FTextDataCell> ModPatch::DT_ItemDescription;
std::map<std::string, SDK::FAddContentRefDataCell> ModPatch::AddContentDataTable;
std::map<std::string, SDK::FAddContentsPresentList> ModPatch::DT_AddContentsPresentList;
std::vector<std::string> ModPatch::AddContentsNameList;
std::map<std::string, SDK::FShopLineupCell> ModPatch::ShopList;
std::map<std::string, SDK::FFAttachmentData> ModPatch::DT_AttachmentData;
std::map<std::string, SDK::FFAttachmentEquipData> ModPatch::DT_AttachmentEquip_ch0100;
std::map<std::string, SDK::FFAttachmentEquipData> ModPatch::DT_AttachmentEquip_ch0200;
std::map<std::string, SDK::FFAttachmentEquipData> ModPatch::DT_AttachmentEquip_ch0300;
std::map<std::string, SDK::FFAttachmentEquipData> ModPatch::DT_AttachmentEquip_ch0400;
std::map<std::string, SDK::FFAttachmentEquipData> ModPatch::DT_AttachmentEquip_ch0500;
std::map<std::string, SDK::FFAttachmentEquipData> ModPatch::DT_AttachmentEquip_ch0600;
std::map<std::string, SDK::FFAttachmentEquipData> ModPatch::DT_AttachmentEquip_ch0700;
std::map<std::string, SDK::FFAttachmentEquipData> ModPatch::DT_AttachmentEquip_ch0800;
std::map<std::string, SDK::FFAttachmentEquipData> ModPatch::DT_AttachmentEquip_ch0900;
std::map<std::string, SDK::FFAttachmentEquipData> ModPatch::DT_AttachmentEquip_ch1000;

void ModPatch::ProccessCostumeTable(toml::table table, std::map<std::string, SDK::FFPlayerCostumeData>* DataTable)
{
	for (auto& [key, value] : table)
	{
		std::string name = key.str().data();
		toml::array* data = nullptr;

		if (value.is_array())
			data = value.as_array();
		else
		{
			printf("[SNXPlugin] [TOML] entry \"%s\" in toml is not an array", name);
			continue;
		}

		if (data->size() <= 0)
		{
			printf("[SNXPlugin] [TOML] entry data for \"%s\" is empty in toml\n", name.c_str());
			continue;
		}
		if (DataTable->contains(name.c_str()))
		{
			printf("[SNXPlugin] [TOML] Duplicate entry for \"%s\" found in toml\n", name.c_str());
			continue;
		}
		
		std::string assetname = data->get(1)->value_or("");
		if (assetname == "") {
			printf("[SNXPlugin] [TOML] Asset name for entry \"%s\" is empty or could not be phrased\n", name.c_str());
			continue;
		}
		SDK::TSoftObjectPtr<SDK::USkeletalMesh> newpath;
		newpath.ObjectID = { .AssetPathName = FNameHelper::FNameFromString(assetname, SDK::FNAME_Add)};

		SDK::FFPlayerCostumeData Costume = *new SDK::FFPlayerCostumeData();
		Costume.ID_4_DF2CE6B345C20FBAE156B5847D6A2D59 = data->get(0)->value_or(0);
		Costume.Mesh_7_58409C4B439C67A2DE8AB98C95B89EC0 = newpath;
		Costume.bHood_9_D88FF6B14A8DB7EC229F659FB92D1858 = data->get(2)->value_or(false);

		DataTable->insert({name, Costume});
	}
}

void ModPatch::ProccessItemTable(toml::table table, std::map<std::string, SDK::FItemDataCell>* DataTable)
{
	for (auto& [key, value] : table)
	{
		std::string name = key.str().data();
		toml::array* data = nullptr;

		if (value.is_array())
			data = value.as_array();
		else {
			printf("[SNXPlugin] [TOML] entry \"%s\" in toml is not an array", name);
			continue;
		}

		if (data->size() <= 0) {
			printf("[SNXPlugin] [TOML] entry data for \"%s\" is empty in toml\n", name.c_str());
			continue;
		}
		if (DataTable->contains(name.c_str())) {
			printf("[SNXPlugin] [TOML] Duplicate entry for \"%s\" found in toml\n", name.c_str());
			continue;
		}

		SDK::FItemDataCell Item = *new SDK::FItemDataCell();
		Item.NameId = FNameHelper::FNameFromString(data->get(0)->value_or("None"), SDK::FNAME_Add);
		Item.DescriptionId = FNameHelper::FNameFromString(data->get(1)->value_or("None"), SDK::FNAME_Add);
		Item.Icon = magic_enum::enum_cast<SDK::EItemIcon>(data->get(2)->value_or("NONE")).value_or(SDK::EItemIcon::NONE);
		Item.Category = magic_enum::enum_cast<SDK::EItemCategory>(data->get(3)->value_or("")).value_or(SDK::EItemCategory::Invalid);
		Item.Rarity = magic_enum::enum_cast<SDK::EItemRarity>(data->get(4)->value_or("")).value_or(SDK::EItemRarity::None);
		Item.CarryMax = data->get(5)->value_or(0);
		Item.BuyPrice = data->get(6)->value_or(0);
		Item.SellPrice = data->get(7)->value_or(0);
		Item.IsConsumption = data->get(8)->value_or(false);
		Item.EffecacyRange = magic_enum::enum_cast<SDK::EEffecacyRange>(data->get(9)->value_or("Invalid")).value_or(SDK::EEffecacyRange::Invalid);
		Item.EffecacyId = magic_enum::enum_cast<SDK::EEffecacyType>(data->get(10)->value_or("Invalid")).value_or(SDK::EEffecacyType::Invalid);
		Item.ParameterValue = data->get(11)->value_or(0);
		Item.ParameterAttack = data->get(12)->value_or(0);
		Item.ParameterESP = data->get(13)->value_or(0);
		Item.ParameterVitality = data->get(14)->value_or(0);
		Item.ParameterDefense = data->get(15)->value_or(0);
		Item.IsEquipmentable_ch0100 = data->get(16)->value_or(false);
		Item.IsEquipmentable_ch0200 = data->get(17)->value_or(false);
		Item.IsEquipmentable_ch0300 = data->get(18)->value_or(false);
		Item.IsEquipmentable_ch0400 = data->get(19)->value_or(false);
		Item.IsEquipmentable_ch0500 = data->get(20)->value_or(false);
		Item.IsEquipmentable_ch0600 = data->get(21)->value_or(false);
		Item.IsEquipmentable_ch0700 = data->get(22)->value_or(false);
		Item.IsEquipmentable_ch0800 = data->get(23)->value_or(false);
		Item.IsEquipmentable_ch0900 = data->get(24)->value_or(false);
		Item.IsEquipmentable_ch1000 = data->get(25)->value_or(false);
		Item.Favorability_ch0100 = magic_enum::enum_cast<SDK::EItemFavorability>(data->get(26)->value_or("Normal")).value_or(SDK::EItemFavorability::Normal);
		Item.Favorability_ch0200 = magic_enum::enum_cast<SDK::EItemFavorability>(data->get(27)->value_or("Normal")).value_or(SDK::EItemFavorability::Normal);
		Item.Favorability_ch0300 = magic_enum::enum_cast<SDK::EItemFavorability>(data->get(28)->value_or("Normal")).value_or(SDK::EItemFavorability::Normal);
		Item.Favorability_ch0400 = magic_enum::enum_cast<SDK::EItemFavorability>(data->get(29)->value_or("Normal")).value_or(SDK::EItemFavorability::Normal);
		Item.Favorability_ch0500 = magic_enum::enum_cast<SDK::EItemFavorability>(data->get(30)->value_or("Normal")).value_or(SDK::EItemFavorability::Normal);
		Item.Favorability_ch0600 = magic_enum::enum_cast<SDK::EItemFavorability>(data->get(31)->value_or("Normal")).value_or(SDK::EItemFavorability::Normal);
		Item.Favorability_ch0700 = magic_enum::enum_cast<SDK::EItemFavorability>(data->get(32)->value_or("Normal")).value_or(SDK::EItemFavorability::Normal);
		Item.Favorability_ch0800 = magic_enum::enum_cast<SDK::EItemFavorability>(data->get(33)->value_or("Normal")).value_or(SDK::EItemFavorability::Normal);
		Item.Favorability_ch0900 = magic_enum::enum_cast<SDK::EItemFavorability>(data->get(34)->value_or("Normal")).value_or(SDK::EItemFavorability::Normal);
		Item.Favorability_ch1000 = magic_enum::enum_cast<SDK::EItemFavorability>(data->get(35)->value_or("Normal")).value_or(SDK::EItemFavorability::Normal);
		Item.IsItPossibleToPresent = data->get(36)->value_or(0);
		Item.PresentSender = magic_enum::enum_cast<SDK::EItemPresentSender>(data->get(37)->value_or("")).value_or(SDK::EItemPresentSender::Both);
		Item.PresentSortNo = data->get(38)->value_or(0);
		Item.CanitPresentManyTimes = data->get(39)->value_or(false);
		Item.EnemyLibraryID = FNameHelper::FNameFromString(data->get(40)->value_or("None"), SDK::FNAME_Add);
		Item.EquipCameraID = magic_enum::enum_cast<SDK::EUIMain3DEquipCameraID>(data->get(41)->value_or("")).value_or(SDK::EUIMain3DEquipCameraID::MEC_Default);
		Item.SortListM = data->get(42)->value_or(0);
		Item.SortListF = data->get(43)->value_or(0);
		Item.WhichBondsMessageID = FNameHelper::FNameFromString(data->get(44)->value_or("None"), SDK::FNAME_Add);

		DataTable->insert({ name, Item });
	}
}

void ModPatch::ProccessTextTable(toml::table table, std::map<std::string, SDK::FTextDataCell>* DataTable)
{
	for (auto& [key, value] : table)
	{
		std::string name = key.str().data();
		const std::string text = value.value_or("");

		if (DataTable->contains(name.c_str()))
		{
			printf("[SNXPlugin] [TOML] Duplicate entry for \"%s\" found in toml\n", name.c_str());
			continue;
		}

		SDK::FTextDataCell TextCell = *new SDK::FTextDataCell();
		TextCell.Text = FNameHelper::FStringFromString(text);

		DataTable->insert({ name, TextCell });
	}
}

void ModPatch::ProccessAddContentTable(toml::table table, std::map<std::string, SDK::FAddContentRefDataCell>* DataTable) 
{
	for (auto& [key, value] : table)
	{
		std::string name = key.str().data();
		toml::array* data = nullptr;

		if (value.is_array())
			data = value.as_array();
		else
		{
			printf("[SNXPlugin] [TOML] entry \"%s\" in toml is not an array", name);
			continue;
		}

		if (data->size() <= 0)
		{
			printf("[SNXPlugin] [TOML] entry data for \"%s\" is empty in toml\n", name.c_str());
			continue;
		}
		if (DataTable->contains(name.c_str()))
		{
			printf("[SNXPlugin] [TOML] Duplicate entry for \"%s\" found in toml\n", name.c_str());
			continue;
		}

		SDK::FAddContentRefDataCell AddContent = *new SDK::FAddContentRefDataCell();
		std::string AddContentName = data->get(0)->value_or("");
		AddContentName.append("_MOD");
		AddContent.AddContentName = FNameHelper::FNameFromString(AddContentName);
		AddContent.IsValid = data->get(1)->value_or(true);
		AddContent.IsFreeGoods = data->get(2)->value_or(true);
		AddContent.IsLossConfirmation = data->get(3)->value_or(true);
		AddContent.TitleID = FNameHelper::FStringFromString(data->get(4)->value_or("None"));
		AddContent.ExplanationID = FNameHelper::FStringFromString(data->get(5)->value_or("None"));
		AddContent.EntitlementLabel = FNameHelper::FStringFromString(data->get(6)->value_or("None"));
		AddContent.ContentId = FNameHelper::FStringFromString(data->get(7)->value_or("None"));
		AddContent.StoreId = FNameHelper::FStringFromString(data->get(8)->value_or("None"));
		AddContent.AppId = FNameHelper::FStringFromString(data->get(9)->value_or("None"));

		DataTable->insert({ name, AddContent });
		AddContentsNameList.push_back(AddContentName);
	}
}

void ModPatch::ProccessAddContentGiftsTable(toml::table table, std::map<std::string, SDK::FAddContentsPresentList>* DataTable)
{
	for (auto& [key, value] : table)
	{
		std::string name = key.str().data();
		toml::array* data = nullptr;

		if (value.is_array())
			data = value.as_array();
		else
		{
			printf("[SNXPlugin] [TOML] entry \"%s\" in toml is not an array", name);
			continue;
		}

		if (data->size() <= 0)
		{
			printf("[SNXPlugin] [TOML] entry data for \"%s\" is empty in toml\n", name.c_str());
			continue;
		}
		if (DataTable->contains(name.c_str()))
		{
			printf("[SNXPlugin] [TOML] Duplicate entry for \"%s\" found in toml\n", name.c_str());
			continue;
		}

		if (!data->get(1)->is_array())
		{
			printf("[SNXPlugin] [TOML] Could not phrase PresentInfos array for \"%s\"\n", name.c_str());
			continue;
		}

		SDK::FAddContentsPresentList AddContent = *new SDK::FAddContentsPresentList();
		std::string AddContentName = data->get(0)->value_or("");
		AddContentName.append("_MOD");
		AddContent.AddContentName = FNameHelper::FNameFromString(AddContentName);
		AddContent.PresentInfos = *new SDK::TAllocatedArray<SDK::FAddContentsPresentInfo>(50);
		toml::array* Infos = data->get(1)->as_array();
		for (auto& Info : *Infos)
		{
			SDK::FAddContentsPresentInfo PresentInfo = *new SDK::FAddContentsPresentInfo();
			PresentInfo.DLCType = magic_enum::enum_cast<SDK::EAddContentsType>(Info.as_array()->get(0)->value_or("None")).value_or(SDK::EAddContentsType::None);
			PresentInfo.ID = FNameHelper::FStringFromString(Info.as_array()->get(1)->value_or(""));
			PresentInfo.Num = Info.as_array()->get(2)->value_or(1);
			if (!AddContent.PresentInfos.Add(PresentInfo))
			{
				TArrayHelper::ResizeTArray(&AddContent.PresentInfos, AddContent.PresentInfos.Max() + 1);
				if (!AddContent.PresentInfos.Add(PresentInfo))
				{
					printf("[SNXPlugin] [TOML] [Error] Could not add to Present List, Size %i/%i\n", AddContent.PresentInfos.Num(), AddContent.PresentInfos.Max());
					continue;
				}
			}
		}
		DataTable->insert({ name, AddContent });
	}
}

void ModPatch::ProccessShopTable(toml::table table, std::map<std::string, SDK::FShopLineupCell>* DataTable)
{
	for (auto& [key, value] : table)
	{
		std::string name = key.str().data();
		const std::string text = value.value_or("");

		if (DataTable->contains(text.c_str()))
		{
			printf("[SNXPlugin] [TOML] Duplicate entry for \"%s\" found in toml\n", name.c_str());
			continue;
		}

		SDK::FShopLineupCell ShopCell = *new SDK::FShopLineupCell();
		ShopCell.ItemId = FNameHelper::FNameFromString(text);

		DataTable->insert({ name, ShopCell });
	}
}

void ModPatch::ProccessAttachmentTable(toml::table table, std::map<std::string, SDK::FFAttachmentData>* DataTable)
{
	for (auto& [key, value] : table)
	{
		std::string name = key.str().data();
		toml::array* data = nullptr;

		if (value.is_array())
			data = value.as_array();
		else
		{
			printf("[SNXPlugin] [TOML] entry \"%s\" in toml is not an array", name);
			continue;
		}
		if (data->size() <= 0) {
			printf("[SNXPlugin] [TOML] entry data for \"%s\" is empty in toml\n", name.c_str());
			continue;
		}
		if (DataTable->contains(name.c_str())) {
			printf("[SNXPlugin] [TOML] Duplicate entry for \"%s\" found in toml\n", name.c_str());
			continue;
		}

		SDK::TArray<SDK::FFAttachmentMaterialData> MatData = *new SDK::TAllocatedArray<SDK::FFAttachmentMaterialData>(5);
		for (auto& entry : *data->get(4)->as_array())
		{
			toml::array* subarr = entry.as_array();
			SDK::FFAttachmentMaterialData Mat = *new SDK::FFAttachmentMaterialData();
			Mat.Index_2_F0E0CE394BBC4C011AF948B7827140F8 = subarr->get(0)->value_or(0);

			SDK::TSoftObjectPtr<SDK::UMaterialInstance> newpath;
			newpath.ObjectID = { .AssetPathName = FNameHelper::FNameFromString(subarr->get(1)->value_or(""), SDK::FNAME_Add)};
			Mat.Material_5_8A6AB60947AAB71B31FCF3B55E7C045E = newpath;

			if (!MatData.Add(Mat))
			{
				TArrayHelper::ResizeTArray(&MatData, MatData.Max() + 2);
				MatData.Add(Mat);
			}
			
		}

		SDK::FFAttachmentData Attach = *new SDK::FFAttachmentData();
		Attach.Category_36_C40BBD6745AD6D8FA52A6EB6838AC260 = magic_enum::enum_cast<SDK::EAttachmentCategory>(data->get(0)->value_or("Head")).value_or(SDK::EAttachmentCategory::Head);
		Attach.Variation_9_116523494A7CECE38EB2C1A2C195E751 = data->get(1)->value_or(0);
		Attach.bUseAnimation_31_3C166736430B2AE7D0B90587EDC972AC = data->get(2)->value_or(false);
		Attach.EquipDataIndex_39_3799DF4345234ADF332299AC3C324385 = data->get(3)->value_or(0);
		Attach.MaterialData_43_56C799EC43832C9C78A679B25AD9ED1E = MatData;

		DataTable->insert({ name, Attach });
	}
}

void ModPatch::ProccessAttachmentEquipTable(toml::table table, std::map<std::string, SDK::FFAttachmentEquipData>* DataTable)
{
	for (auto& [key, value] : table)
	{
		std::string name = key.str().data();
		toml::array* data = nullptr;

		if (value.is_array())
			data = value.as_array();
		else
		{
			printf("[SNXPlugin] [TOML] entry \"%s\" in toml is not an array", name);
			continue;
		}
		if (data->size() <= 0) {
			printf("[SNXPlugin] [TOML] entry data for \"%s\" is empty in toml\n", name.c_str());
			continue;
		}
		if (DataTable->contains(name.c_str())) {
			printf("[SNXPlugin] [TOML] Duplicate entry for \"%s\" found in toml\n", name.c_str());
			continue;
		}

		SDK::TArray<SDK::TSoftObjectPtr<SDK::UObject>> MeshList = *new SDK::TAllocatedArray<SDK::TSoftObjectPtr<SDK::UObject>>(5);
		for (auto& entry : *data->get(0)->as_array())
		{
			SDK::TSoftObjectPtr<SDK::UObject> newpath;
			newpath.ObjectID = { .AssetPathName = FNameHelper::FNameFromString(entry.value_or(""), SDK::FNAME_Add)};

			if (!MeshList.Add(newpath))
			{
				TArrayHelper::ResizeTArray(&MeshList, MeshList.Max() + 2);
				if (!MeshList.Add(newpath));
				{
					printf("[SNXPlugin] [TOML] [Error] Could not add to Mesh List, Size %i/%i\n", MeshList.Num(), MeshList.Max());
					continue;
				}
			}
		}

		SDK::TArray<SDK::FFAttachmentPartsData> PartsDataList = *new SDK::TAllocatedArray<SDK::FFAttachmentPartsData>(5);
		for (auto& entry : *data->get(1)->as_array())
		{
			SDK::FFAttachmentPartsData PartsData = *new SDK::FFAttachmentPartsData();
			toml::array* subarr = entry.as_array();

			PartsData.MeshIndex_5_56552C2043B8E41B4FC86791862B758B = subarr->get(0)->value_or(0);
			PartsData.SocketName_15_E3C50981433F47A29025B8A802252813 = FNameHelper::FNameFromString(subarr->get(1)->value_or(""), SDK::FNAME_Add);
			PartsData.Offset_9_369657DF4B7AC8E84D3DC3A03BDD2994 = *new SDK::FVector();
			PartsData.Offset_9_369657DF4B7AC8E84D3DC3A03BDD2994.X = subarr->get(2)->as_array()->get(0)->value_or(0.0);
			PartsData.Offset_9_369657DF4B7AC8E84D3DC3A03BDD2994.Y = subarr->get(2)->as_array()->get(1)->value_or(0.0);
			PartsData.Offset_9_369657DF4B7AC8E84D3DC3A03BDD2994.Z = subarr->get(2)->as_array()->get(2)->value_or(0.0);
			PartsData.Rotate_10_2DD784894E499799D340DBA8757A1A8F = *new SDK::FRotator();
			PartsData.Rotate_10_2DD784894E499799D340DBA8757A1A8F.Pitch = subarr->get(3)->as_array()->get(0)->value_or(0.0);
			PartsData.Rotate_10_2DD784894E499799D340DBA8757A1A8F.Yaw = subarr->get(3)->as_array()->get(1)->value_or(0.0);
			PartsData.Rotate_10_2DD784894E499799D340DBA8757A1A8F.Roll = subarr->get(3)->as_array()->get(2)->value_or(0.0);
			PartsData.Scale_11_BB3B1F2943D1D5BDB361BA868B08435D = *new SDK::FVector();
			PartsData.Scale_11_BB3B1F2943D1D5BDB361BA868B08435D.X = subarr->get(4)->as_array()->get(0)->value_or(1.0);
			PartsData.Scale_11_BB3B1F2943D1D5BDB361BA868B08435D.Y = subarr->get(4)->as_array()->get(1)->value_or(1.0);
			PartsData.Scale_11_BB3B1F2943D1D5BDB361BA868B08435D.Z = subarr->get(4)->as_array()->get(2)->value_or(1.0);

			if (!PartsDataList.Add(PartsData))
			{
				TArrayHelper::ResizeTArray(&PartsDataList, PartsDataList.Max() + 2);
				if (!PartsDataList.Add(PartsData)) {
					printf("[SNXPlugin] [TOML] [Error] Could not add to Parts Data List, Size %i/%i\n", PartsDataList.Num(), PartsDataList.Max());
					continue;
				}
			}
		}

		SDK::FFAttachmentEquipData Equip = *new SDK::FFAttachmentEquipData();
		Equip.MeshList_18_BBC82E92488929EB09E41C9D91AD7A32 = MeshList;
		Equip.PartsDataList_21_E909A6EE436F74F1833547800184F825 = PartsDataList;

		DataTable->insert({ name, Equip });
	}
}

bool ModPatch::init()
{
	printf("[SNXPlugin] [TOML] Processing toml patches...\n");

	if (!std::filesystem::exists("..\\..\\Content\\Paks")) {
		printf("[SNXPlugin] [Error] Could not find mods path\n");
		return false;
	}

	MergeMessage.Text = SDK::FString(L"<AUTO_WRAP>Merging DataTables and<BR>checking add-on data.");

	int i = 0;
	for (const auto& entry : std::filesystem::recursive_directory_iterator("..\\..\\Content\\Paks"))
	{
		if (std::filesystem::path(entry.path()).extension() != ".toml")
			continue;

		printf("[SNXPlugin] [TOML] processing: %S\n", entry.path().filename().c_str());

		toml::table config;
		std::string fileString = "";
		try
		{
			std::ifstream file(entry.path());
			std::string str;
			while (std::getline(file, str))
				fileString += str + "\n";
			config = toml::parse(fileString);
		}
		catch (std::exception& exception)
		{
			char text[1024];
			sprintf_s(text, "Failed to parse %S:\n%s", entry.path().c_str(), exception.what());
			MessageBoxA(nullptr, text, "SNXPlugin", MB_OK | MB_ICONERROR);
		}
		toml::table* table;

		table = config["DT_ItemData"].as_table();
		if (table)
			ProccessItemTable(*table, &DT_ItemData);

		table = config["DT_ItemName"].as_table();
		if (table)
			ProccessTextTable(*table, &DT_ItemName);

		table = config["DT_ItemDescription"].as_table();
		if (table)
			ProccessTextTable(*table, &DT_ItemDescription);

		table = config["DT_Costume_ch0100"].as_table();
		if (table)
			ProccessCostumeTable(*table, &DT_Costume_ch0100);

		table = config["DT_Costume_ch0200"].as_table();
		if (table)
			ProccessCostumeTable(*table, &DT_Costume_ch0200);

		table = config["DT_Costume_ch0300"].as_table();
		if (table)
			ProccessCostumeTable(*table, &DT_Costume_ch0300);

		table = config["DT_Costume_ch0400"].as_table();
		if (table)
			ProccessCostumeTable(*table, &DT_Costume_ch0400);

		table = config["DT_Costume_ch0500"].as_table();
		if (table)
			ProccessCostumeTable(*table, &DT_Costume_ch0500);

		table = config["DT_Costume_ch0600"].as_table();
		if (table)
			ProccessCostumeTable(*table, &DT_Costume_ch0600);

		table = config["DT_Costume_ch0700"].as_table();
		if (table)
			ProccessCostumeTable(*table, &DT_Costume_ch0700);

		table = config["DT_Costume_ch0800"].as_table();
		if (table)
			ProccessCostumeTable(*table, &DT_Costume_ch0800);

		table = config["DT_Costume_ch0900"].as_table();
		if (table)
			ProccessCostumeTable(*table, &DT_Costume_ch0900);

		table = config["DT_Costume_ch1000"].as_table();
		if (table)
			ProccessCostumeTable(*table, &DT_Costume_ch1000);

		table = config["AddContentDataTable"].as_table();
		if (table)
			ProccessAddContentTable(*table, &AddContentDataTable);

		table = config["DT_AddContentsPresentList"].as_table();
		if (table)
			ProccessAddContentGiftsTable(*table, &DT_AddContentsPresentList);

		table = config["ShopTable"].as_table();
		if (table)
			ProccessShopTable(*table, &ShopList);

		table = config["DT_AttachmentData"].as_table();
		if (table)
			ProccessAttachmentTable(*table, &DT_AttachmentData);

		table = config["DT_AttachmentEquip_ch0100"].as_table();
		if (table)
			ProccessAttachmentEquipTable(*table, &DT_AttachmentEquip_ch0100);

		table = config["DT_AttachmentEquip_ch0200"].as_table();
		if (table)
			ProccessAttachmentEquipTable(*table, &DT_AttachmentEquip_ch0200);

		table = config["DT_AttachmentEquip_ch0300"].as_table();
		if (table)
			ProccessAttachmentEquipTable(*table, &DT_AttachmentEquip_ch0300);

		table = config["DT_AttachmentEquip_ch0400"].as_table();
		if (table)
			ProccessAttachmentEquipTable(*table, &DT_AttachmentEquip_ch0400);

		table = config["DT_AttachmentEquip_ch0500"].as_table();
		if (table)
			ProccessAttachmentEquipTable(*table, &DT_AttachmentEquip_ch0500);

		table = config["DT_AttachmentEquip_ch0600"].as_table();
		if (table)
			ProccessAttachmentEquipTable(*table, &DT_AttachmentEquip_ch0600);

		table = config["DT_AttachmentEquip_ch0700"].as_table();
		if (table)
			ProccessAttachmentEquipTable(*table, &DT_AttachmentEquip_ch0700);

		table = config["DT_AttachmentEquip_ch0800"].as_table();
		if (table)
			ProccessAttachmentEquipTable(*table, &DT_AttachmentEquip_ch0800);

		table = config["DT_AttachmentEquip_ch0900"].as_table();
		if (table)
			ProccessAttachmentEquipTable(*table, &DT_AttachmentEquip_ch0900);

		table = config["DT_AttachmentEquip_ch1000"].as_table();
		if (table)
			ProccessAttachmentEquipTable(*table, &DT_AttachmentEquip_ch1000);

		i++;
	}

	printf("[SNXPlugin] [TOML] Finished proccessing %i toml patches\n", i);
	return true;
}