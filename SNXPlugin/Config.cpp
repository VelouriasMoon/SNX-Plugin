#include "Config.h"

bool Config::DebugConsole;
bool Config::GameConsole;
bool Config::SaveCleanNoti;

bool Config::init()
{
	toml::table config;
	std::string fileString = "";

	try
	{
		std::ifstream file("Plugins\\SNXPluginConfig.toml");
		std::string str;
		while (std::getline(file, str))
			fileString += str + "\n";
		config = toml::parse(fileString);
	}
	catch (std::exception& exception)
	{
		char text[1024];
		sprintf_s(text, "Failed to parse config.toml:\n%s", exception.what());
		MessageBoxA(nullptr, text, "SNXPlugin", MB_OK | MB_ICONERROR);
	}

	DebugConsole = config["General"]["Enable_Console"].value_or(false);
	GameConsole = config["General"]["Enable_Game_Console"].value_or(false);
	SaveCleanNoti = config["General"]["Save_Clean_Notification"].value_or(false);

	return true;
}