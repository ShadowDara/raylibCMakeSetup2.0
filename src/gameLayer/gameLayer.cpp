#include "gameLayer.hpp"

struct GameData
{
	// ADD YOUR GAME DATA HERE
};


// Function to initialize the game
void initGame()
{
	// INITIALIZE YOUR GAME DATA HERE
}


// Function to update the game state
void updateGame(float deltaTime)
{
	// Begin drawing and end drawing are called externally in the main loop,
	// so we only need to clear the background here

	ClearBackground(RAYWHITE);

	DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

#pragma region imgui
#if REMOVE_IMGUI == 0
	ImGui::PushStyleColor(ImGuiCol_WindowBg, {});
	ImGui::PushStyleColor(ImGuiCol_DockingEmptyBg, {});
	ImGui::DockSpaceOverViewport(ImGui::GetMainViewport());
	ImGui::PopStyleColor(2);


	ImGui::Begin("Test");

	ImGui::Text("Hello");
	ImGui::Button("Button");
	ImGui::Button("Button2");

	ImGui::End();
#endif
#pragma endregion

	// ADD YOUR GAME LOGIC HERE
}


// Function which runs after the game is closed
// use it to save your data, free memory, etc.
void closeGame()
{
	// FREE YOUR GAME DATA HERE
}
