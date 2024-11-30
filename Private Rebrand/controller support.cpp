//#include <string>
//#include "game/sdk/sdk.h"
//#include "requirements/ui/imgui.h"
////#pragma once
//#include <XInput.h>
//#include <Windows.h>
//#pragma comment(lib, "XInput.lib")
//namespace Controller
//{
//	class XboxController
//	{
//	private:
//		XINPUT_STATE _controllerState;
//		int _controllerNum;
//	public:
//		XboxController(int playerNumber);
//		XINPUT_STATE GetControllerState();
//		bool CheckConnection();
//	};
//
//	XboxController::XboxController(int playerNumber)
//	{
//		// Set the Controller Number
//		_controllerNum = playerNumber - 1;
//	}
//
//	XINPUT_STATE XboxController::GetControllerState()
//	{
//		// Zeroise the state
//		ZeroMemory(&_controllerState, sizeof(XINPUT_STATE));
//
//		// Get the state
//		XInputGetState(_controllerNum, &_controllerState);
//
//		return _controllerState;
//	}
//
//	bool XboxController::CheckConnection()
//	{
//		// Zeroise the state
//		ZeroMemory(&_controllerState, sizeof(XINPUT_STATE));
//
//		// Get the state
//		DWORD Result = XInputGetState(_controllerNum, &_controllerState);
//
//		if (Result == ERROR_SUCCESS)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//
//
//#define XINPUT_GAMEPAD_TRIGGER_THRESHOLD    30
//	XboxController* Player1 = new XboxController(1);
//	void POC()
//	{
//		while (true)
//		{
//			if (Player1->CheckConnection())
//			{
//				if (Player1->GetControllerState().Gamepad.bRightTrigger)
//				{
//					//std::cout << "	[+] Right Trigger Pulled\n";
//				}
//				if (Player1->GetControllerState().Gamepad.bLeftTrigger)
//				{
//					//std::cout << "	[+] Left Trigger Pulled\n";
//
//				}
//			}
//		}
//	}
//	bool IsPressingRightTrigger()
//	{
//		if (Player1->GetControllerState().Gamepad.bRightTrigger)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool IsPressingLeftTrigger()
//	{
//		if (Player1->GetControllerState().Gamepad.bLeftTrigger)
//		{
//			return true;
//		}
//		return false;
//	}
//}



//void draw_player_platform(fvector2d location, const std::string& player_platform)
//{
//	// Deep blue color for text
//	ImU32 color = ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.55f, 1.0f));
//
//	// Draw thick black outline for text
//	for (int x = -1; x <= 1; x++) {
//		for (int y = -1; y <= 1; y++) {
//			if (x == 0 && y == 0) continue;
//			ImGui::GetBackgroundDrawList()->AddText(
//				ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2 + x, location.y + y),
//				ImGui::ColorConvertFloat4ToU32(ImColor(0, 0, 0)), player_platform.c_str());
//		}
//	}
//
//	// Draw the main text in deep blue
//	ImGui::GetBackgroundDrawList()->AddText(
//		ImVec2(location.x - ImGui::CalcTextSize(player_platform.c_str()).x / 2, location.y),
//		color, player_platform.c_str());
//}
//

