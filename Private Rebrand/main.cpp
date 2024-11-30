#include "requirements/includes.h"
#include "anti_db.cpp"
//#include "render/render.hpp"
//#include "kernel/kernel.h"


//memory_event(fvector(-target.y / 5, target.x / 5, 0));

//auto cr3loop() -> void {
//
//	while (true) {
//		mem::CR3();
//		pointer->uworld = read<uintptr_t>(offset::uworld + base_address);
//
//		if (pointer->uworld) {
//			if (cr3loop == 0) {
//				auto new_cr3 = mem::CR3();
//
//				if (new_cr3 != 0) {
//					new_cr3 = new_cr3;
//				}
//				else {
//					std::cerr << "Warnung: mem::pml4() konnte keinen gültigen Wert liefern.\n";
//				}
//			}
//		}
//		Sleep(100);
//	}
//}
//struct unrealengine
//{
//	struct FQ
//	{
//		double x;
//		double y;
//		double z;
//		double w;
//	};
//

void Crypt();
__forceinline std::string platform(uint64_t PlayerState)
{
	DWORD_PTR test_platform = read<DWORD_PTR>(PlayerState + 0x408);
	wchar_t platform[64];
	mem::read_physical((PVOID)test_platform, (uint8_t*)platform, sizeof(platform));
	std::wstring platform_wstr(platform);
	std::string platform_str(platform_wstr.begin(), platform_wstr.end());
	return platform_str;
}
int main()
{
	/*std::thread(a).detach();
	std::thread(b).detach();
	
	std::thread(c).detach();*/
	
	Console console;

	console.SetConsoleSize(85, 15);
	console.CenterConsole(85 * 8, 15 * 16);
	console.AdjustConsole(false); // adjust console so you can print color codes

	Crypt();

	mouse_interface();
	//SonyDriverHelper::api::Init();

	const char* username = std::getenv("USERNAME");


	std::string welcomeMessage = "welcome " + std::string(username) + " ! " + __DATE__ + "\n";


	console.PrintColoredText(welcomeMessage, "GREEN", false, true);

	console.PrintColoredText("waiting for fortnite...\n", "PINK", false, true);
	//handler::find_driver();
	if (mem::find_driver()) {
		std::cout << skCrypt("\n driver found") << std::endl;
	}
	else
	{
		std::cout << skCrypt("\n Error 0x1 (try again)") << std::endl;
		Sleep(50000);
		exit(0);
	}

	HWND fn_win = NULL;





	

	while (fn_win == NULL) {
		fn_win = FindWindowA(0, "Fortnite  ");
	}

	console.PrintColoredText("found fortnite !\n", "GREEN", false, true);

	Sleep(2000);

	console.PrintColoredText("loading...", "PURPLE", false, true);


	Sleep(2000);

	mem::process_id = mem::find_process(("FortniteClient-Win64-Shipping.exe"));

	//std::thread cr3_refresh_thread([]() {
	//	uintptr_t last_cr3 = mem::CR3();

	//	while (true)
	//	{
	//		uintptr_t new_cr3 = mem::CR3();

	//		if (new_cr3 != last_cr3)
	//		{
	//			last_cr3 = new_cr3;
	//		}

	//		std::this_thread::sleep_for(std::chrono::microseconds(50));
	//	}
	//	});
	//cr3_refresh_thread.detach();

	virtualaddy = mem::find_image();
	/*std::thread([&]() { for (;;) { cr3loop(); } }).detach();*/

	width = GetSystemMetrics(SM_CXSCREEN); height = GetSystemMetrics(SM_CYSCREEN);
	std::cout << skCrypt("Found Local Image Base Have Fun and Stay UD!: ") << virtualaddy << std::endl;


	if (Render->Setup() != true) ExitProcess(0);

	if (Hook->Setup() != true) ExitProcess(0);
	//Sleep(2000);

	Render->Render();
	//Sleep(2000);

}
//inline ImVec4 get_loot_color(EFortRarity tier) {
//	if (tier == EFortRarity::EFortRarity__Common)
//		return ImVec4(180 / 255.0f, 180 / 255.0f, 180 / 255.0f, 1.f);
//	else if (tier == EFortRarity::EFortRarity__Uncommon)
//		return ImVec4(100 / 255.0f, 200 / 255.0f, 50 / 255.0f, 1.f);
//	else if (tier == EFortRarity::EFortRarity__Rare)
//		return ImVec4(50 / 255.0f, 150 / 255.0f, 255 / 255.0f, 1.f);
//	else if (tier == EFortRarity::EFortRarity__Epic)
//		return ImVec4(255 / 255.0f, 100 / 255.0f, 255 / 255.0f, 1.f);
//	else if (tier == EFortRarity::EFortRarity__Legendary)
//		return ImVec4(255 / 255.0f, 180 / 255.0f, 50 / 255.0f, 1.f);
//	else if (tier == EFortRarity::EFortRarity__Mythic)
//		return ImVec4(255 / 255.0f, 220 / 255.0f, 80 / 255.0f, 1.f);
//	else if (tier == EFortRarity::EFortRarity__Transcendent)
//		return ImVec4(50 / 255.0f, 255 / 255.0f, 255 / 255.0f, 1.f);
//
//	return ImVec4(180 / 255.0f, 180 / 255.0f, 180 / 255.0f, 1.f);
//}
//
//enum class EFortRarity : uint8_t
//{
//	EFortRarity__Common = 0,
//	EFortRarity__Uncommon = 1,
//	EFortRarity__Rare = 2,
//	EFortRarity__Epic = 3,
//	EFortRarity__Legendary = 4,
//	EFortRarity__Mythic = 5,
//	EFortRarity__Transcendent = 6,
//	EFortRarity__Unattainable = 7,
//	EFortRarity__NumRarityValues = 8,
//};
//class Vector2 {
//public:
//	Vector2() : x(0.f), y(0.f) {}
//	Vector2(double _x, double _y) : x(_x), y(_y) {}
//	~Vector2() {}
//
//	double x, y;
//};
//void draw_player_weapon(Vector2 location, std::string weapon_name, uint64_t current_weapon, uint64_t weapon_data, EFortRarity tier)
//{
//	ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(weapon_name.c_str()).x / 2 + -1, location.y + -1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), weapon_name.c_str());
//	ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(weapon_name.c_str()).x / 2 + 1, location.y + -1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), weapon_name.c_str());
//	ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(weapon_name.c_str()).x / 2 + -1, location.y + 1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), weapon_name.c_str());
//	ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(weapon_name.c_str()).x / 2 + 1, location.y + 1), ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), weapon_name.c_str());
//
//	ImGui::GetBackgroundDrawList()->AddText(ImVec2(location.x - ImGui::CalcTextSize(weapon_name.c_str()).x / 2, location.y), ImGui::ColorConvertFloat4ToU32(get_loot_color(tier)), weapon_name.c_str());
//}