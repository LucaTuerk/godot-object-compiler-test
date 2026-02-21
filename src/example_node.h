#pragma once

#include "godot_cpp/classes/node.hpp"

using namespace godot;

#include "macros.h"
#include "example_node.generated.h"

GODOT_CLASS();
class ExampleNode : public Node {
    GODOT_GENERATED_BODY();

	GODOT_PROPERTY();
	int int_property;

	GODOT_PROPERTY();
	String string_property;
};
GODOT_GENERATED_GLOBAL();