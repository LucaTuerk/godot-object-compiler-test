extends Node

var example_node : Node

func quit(result_code : int) -> void:
	get_tree().quit(result_code)
	queue_free()

func _ready() -> void:
	example_node = ClassDB.instantiate("ExampleNode")
	
	if example_node == null:
		return quit(1)
	add_child(example_node)
	
func _process(delta: float) -> void:
	return quit(0)
