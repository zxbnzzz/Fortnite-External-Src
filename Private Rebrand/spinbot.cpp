//#include <cstdint>
//#include <string>
//#include <basetsd.h>
//#include "kernel/kernel.h"
//////#include "requirements/ui/imgui.h"
//////#include "game/defines.h"
//////
//////#include <string>
//////#include "kernel/kernel.h"
//////#include "game/sdk/offsets.h"
//////#include "game/sdk/sdk.h"
////#include "requirements/ui/imgui.h"
////#include <string>
////#include "game/sdk/sdk.h"
////#include "game/defines.h"
////#include "game/sdk/offsets.h"
////#include "kernel/kernel.h"
//#include <cstdint>
//#include <string>
//#include "game/defines.h"
//#include "requirements/ui/imgui.h"
//#include "game/sdk/offsets.h"
//template <typename T>
//T read(uintptr_t address) {
//	// Speicherlese-Funktion implementieren
//	T value;
//	return value;
//}
//
//namespace mem {
//	void read_physical(void* source, void* destination, size_t size) {
//		// Speicherlese-Logik hier implementieren
//	}
//}
//
//struct fvector2d {
//	float x;
//	float y;
//};
//void draw_player_platform(fvector2d location, std::string player_platform)
//{
//	if (esp::username)
//	{
//		location.y -= 20;
//
//		ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2 + -1, location.y + -1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), player_platform.c_str());
//		ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2 + 1, location.y + -1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), player_platform.c_str());
//		ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2 + -1, location.y + 1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), player_platform.c_str());
//		ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2 + 1, location.y + 1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), player_platform.c_str());
//
//		ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2, location.y), ImColor(250, 250, 250), player_platform.c_str());
//	}
//	else
//	{
//		location.y -= 50;
//
//		ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2 + -1, location.y + -1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), player_platform.c_str());
//		ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2 + 1, location.y + -1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), player_platform.c_str());
//		ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2 + -1, location.y + 1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), player_platform.c_str());
//		ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2 + 1, location.y + 1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), player_platform.c_str());
//
//		ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2, location.y), ImColor(250, 250, 250), player_platform.c_str());
//	}
//}
//std::string get_player_platform(uintptr_t player_state)
//{
//	std::string result;
//	uintptr_t test_platform = read<uintptr_t>(player_state + PLATFORM);
//
//	wchar_t platform[64];
//	mem::read_physical((void*)test_platform, platform, sizeof(platform));
//
//	std::wstring platform_wstr(platform);
//	std::string platform_str(platform_wstr.begin(), platform_wstr.end());
//
//	if (platform_str == "XBL")
//	{
//		result = "XBOX ONE";
//	}
//	else if (platform_str == "PSN")
//	{
//		result = "PLAYSTATION 4";
//	}
//	else if (platform_str == "PS5")
//	{
//		result = "PLAYSTATION 5";
//	}
//	else if (platform_str == "XSX")
//	{
//		result = "XBOX SERIES S/X";
//	}
//	else if (platform_str == "SWT")
//	{
//		result = "NINTENDO";
//	}
//	else if (platform_str == "WIN")
//	{
//		result = "WINDOWS";
//	}
//	else
//	{
//		result = "NPC";
//	}
//
//	return result;
//}
//__forceinline std::string platform(uint64_t PlayerState)
//{
//	DWORD_PTR test_platform = read<DWORD_PTR>(PlayerState + 0x408);
//	wchar_t platform[64];
//	mem::read_physical((PVOID)test_platform, (uint8_t*)platform, sizeof(platform));
//	std::wstring platform_wstr(platform);
//	std::string platform_str(platform_wstr.begin(), platform_wstr.end());
//	return platform_str;
//}
