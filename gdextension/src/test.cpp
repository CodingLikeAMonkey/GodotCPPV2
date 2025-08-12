#include "test.h"
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

void Test::_ready() 
{
    if (Engine::get_singleton()->is_editor_hint()) 
    {
        return;
    }
    UtilityFunctions::print("Test class is ready!");
}