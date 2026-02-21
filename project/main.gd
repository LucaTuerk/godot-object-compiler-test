extends Node

var example_node : ExampleNode

func _ready() -> void:
	example_node = ClassDB.instantiate("ExampleNode")
	
	if example_node == null:
		printerr("Failed to create ExampleNode")
		get_tree().quit(1)
	
	add_child(example_node)
	
func _process(delta: float) -> void:
	printerr("Success!")
	get_tree().quit(0)
