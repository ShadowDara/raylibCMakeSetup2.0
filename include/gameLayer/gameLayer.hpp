#pragma once

#include <string>

#include "raylib.h"
#include "imgui.h"

#include "macros.hpp"
#include "version.hpp"
#include "imguiTools.h"


void initGame();

void updateGame(float deltaTime);

void closeGame();
