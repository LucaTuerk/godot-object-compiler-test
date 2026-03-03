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

func _process(_delta: float) -> void:
	if not "aabb_property" in example_node:
		print("property not found")
		return quit(1)

	if not "array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "typed_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "basis_property" in example_node:
		print("property not found")
		return quit(1)

	if not "bool_property" in example_node:
		print("property not found")
		return quit(1)

	if not "callable_property" in example_node:
		print("property not found")
		return quit(1)

	if not "color_property" in example_node:
		print("property not found")
		return quit(1)

	if not "dictionary_property" in example_node:
		print("property not found")
		return quit(1)

	if not "typed_dictionary_property" in example_node:
		print("property not found")
		return quit(1)

	if not "float_property" in example_node:
		print("property not found")
		return quit(1)

	if not "real_t_property" in example_node:
		print("property not found")
		return quit(1)

	if not "double_property" in example_node:
		print("property not found")
		return quit(1)

	if not "int_property" in example_node:
		print("property not found")
		return quit(1)

	if not "long_property" in example_node:
		print("property not found")
		return quit(1)

	if not "node_path_property" in example_node:
		print("property not found")
		return quit(1)

	if not "object_property" in example_node:
		print("property not found")
		return quit(1)

	if not "packed_byte_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "packed_color_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "packed_float32_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "packed_float64_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "packed_int32_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "packed_int64_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "packed_string_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "packed_vector2_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "packed_vector3_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "packed_vector4_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "plane_property" in example_node:
		print("property not found")
		return quit(1)

	if not "projection_property" in example_node:
		print("property not found")
		return quit(1)

	if not "quaternion_property" in example_node:
		print("property not found")
		return quit(1)

	if not "rect2_property" in example_node:
		print("property not found")
		return quit(1)

	if not "rect2i_property" in example_node:
		print("property not found")
		return quit(1)

	if not "signal_property" in example_node:
		print("property not found")
		return quit(1)

	if not "string_property" in example_node:
		print("property not found")
		return quit(1)

	if not "string_name_property" in example_node:
		print("property not found")
		return quit(1)

	if not "transform2D_property" in example_node:
		print("property not found")
		return quit(1)

	if not "transform3D_property" in example_node:
		print("property not found")
		return quit(1)

	if not "vector2_property" in example_node:
		print("property not found")
		return quit(1)

	if not "vector2i_property" in example_node:
		print("property not found")
		return quit(1)

	if not "vector3_property" in example_node:
		print("property not found")
		return quit(1)

	if not "vector3i_property" in example_node:
		print("property not found")
		return quit(1)

	if not "vector4_property" in example_node:
		print("property not found")
		return quit(1)

	if not "vector4i_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_aabb_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_typed_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_basis_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_bool_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_callable_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_color_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_dictionary_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_typed_dictionary_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_float_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_real_t_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_double_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_int_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_long_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_node_path_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_object_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_packed_byte_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_packed_color_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_packed_float32_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_packed_float64_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_packed_int32_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_packed_int64_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_packed_string_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_packed_vector2_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_packed_vector3_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_packed_vector4_array_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_plane_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_projection_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_quaternion_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_rect2_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_rect2i_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_signal_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_string_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_string_name_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_transform2D_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_transform3D_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_vector2_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_vector2i_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_vector3_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_vector3i_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_vector4_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_vector4i_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_object_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_resource_property" in example_node:
		print("property not found")
		return quit(1)

	if not "custom_enum_property" in example_node:
		print("property not found")
		return quit(1)

	if example_node.aabb_property != example_node.custom_aabb_property:
		print("properties do not match")
		return quit(1)

	if example_node.array_property != example_node.custom_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.typed_array_property != example_node.custom_typed_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.basis_property != example_node.custom_basis_property:
		print("properties do not match")
		return quit(1)

	if example_node.bool_property != example_node.custom_bool_property:
		print("properties do not match")
		return quit(1)

	if example_node.callable_property != example_node.custom_callable_property:
		print("properties do not match")
		return quit(1)

	if example_node.color_property != example_node.custom_color_property:
		print("properties do not match")
		return quit(1)

	if example_node.dictionary_property != example_node.custom_dictionary_property:
		print("properties do not match")
		return quit(1)

	if example_node.typed_dictionary_property != example_node.custom_typed_dictionary_property:
		print("properties do not match")
		return quit(1)

	if example_node.float_property != example_node.custom_float_property:
		print("properties do not match")
		return quit(1)

	if example_node.real_t_property != example_node.custom_real_t_property:
		print("properties do not match")
		return quit(1)

	if example_node.double_property != example_node.custom_double_property:
		print("properties do not match")
		return quit(1)

	if example_node.int_property != example_node.custom_int_property:
		print("properties do not match")
		return quit(1)

	if example_node.long_property != example_node.custom_long_property:
		print("properties do not match")
		return quit(1)

	if example_node.node_path_property != example_node.custom_node_path_property:
		print("properties do not match")
		return quit(1)

	if example_node.object_property != example_node.custom_object_property:
		print("properties do not match")
		return quit(1)

	if example_node.packed_byte_array_property != example_node.custom_packed_byte_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.packed_color_array_property != example_node.custom_packed_color_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.packed_float32_array_property != example_node.custom_packed_float32_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.packed_float64_array_property != example_node.custom_packed_float64_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.packed_int32_array_property != example_node.custom_packed_int32_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.packed_int64_array_property != example_node.custom_packed_int64_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.packed_string_array_property != example_node.custom_packed_string_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.packed_vector2_array_property != example_node.custom_packed_vector2_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.packed_vector3_array_property != example_node.custom_packed_vector3_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.packed_vector4_array_property != example_node.custom_packed_vector4_array_property:
		print("properties do not match")
		return quit(1)

	if example_node.plane_property != example_node.custom_plane_property:
		print("properties do not match")
		return quit(1)

	if example_node.projection_property != example_node.custom_projection_property:
		print("properties do not match")
		return quit(1)

	if example_node.quaternion_property != example_node.custom_quaternion_property:
		print("properties do not match")
		return quit(1)

	if example_node.rect2_property != example_node.custom_rect2_property:
		print("properties do not match")
		return quit(1)

	if example_node.rect2i_property != example_node.custom_rect2i_property:
		print("properties do not match")
		return quit(1)

	if example_node.signal_property != example_node.custom_signal_property:
		print("properties do not match")
		return quit(1)

	if example_node.string_property != example_node.custom_string_property:
		print("properties do not match")
		return quit(1)

	if example_node.string_name_property != example_node.custom_string_name_property:
		print("properties do not match")
		return quit(1)

	if example_node.transform2D_property != example_node.custom_transform2D_property:
		print("properties do not match")
		return quit(1)

	if example_node.transform3D_property != example_node.custom_transform3D_property:
		print("properties do not match")
		return quit(1)

	if example_node.vector2_property != example_node.custom_vector2_property:
		print("properties do not match")
		return quit(1)

	if example_node.vector2i_property != example_node.custom_vector2i_property:
		print("properties do not match")
		return quit(1)

	if example_node.vector3_property != example_node.custom_vector3_property:
		print("properties do not match")
		return quit(1)

	if example_node.vector3i_property != example_node.custom_vector3i_property:
		print("properties do not match")
		return quit(1)

	if example_node.vector4_property != example_node.custom_vector4_property:
		print("properties do not match")
		return quit(1)

	if example_node.vector4i_property != example_node.custom_vector4i_property:
		print("properties do not match")
		return quit(1)

	if not "aabb_function" in example_node:
		print("function not found")
		return quit(1)

	if not "array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "typed_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "basis_function" in example_node:
		print("function not found")
		return quit(1)

	if not "bool_function" in example_node:
		print("function not found")
		return quit(1)

	if not "callable_function" in example_node:
		print("function not found")
		return quit(1)

	if not "color_function" in example_node:
		print("function not found")
		return quit(1)

	if not "dictionary_function" in example_node:
		print("function not found")
		return quit(1)

	if not "typed_dictionary_function" in example_node:
		print("function not found")
		return quit(1)

	if not "float_function" in example_node:
		print("function not found")
		return quit(1)

	if not "real_t_function" in example_node:
		print("function not found")
		return quit(1)

	if not "double_function" in example_node:
		print("function not found")
		return quit(1)

	if not "int_function" in example_node:
		print("function not found")
		return quit(1)

	if not "long_function" in example_node:
		print("function not found")
		return quit(1)

	if not "node_path_function" in example_node:
		print("function not found")
		return quit(1)

	if not "object_function" in example_node:
		print("function not found")
		return quit(1)

	if not "packed_byte_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "packed_color_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "packed_float32_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "packed_float64_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "packed_int32_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "packed_int64_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "packed_string_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "packed_vector2_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "packed_vector3_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "packed_vector4_array_function" in example_node:
		print("function not found")
		return quit(1)

	if not "plane_function" in example_node:
		print("function not found")
		return quit(1)

	if not "projection_function" in example_node:
		print("function not found")
		return quit(1)

	if not "quaternion_function" in example_node:
		print("function not found")
		return quit(1)

	if not "rect2_function" in example_node:
		print("function not found")
		return quit(1)

	if not "rect2i_function" in example_node:
		print("function not found")
		return quit(1)

	if not "signal_function" in example_node:
		print("function not found")
		return quit(1)

	if not "string_function" in example_node:
		print("function not found")
		return quit(1)

	if not "string_name_function" in example_node:
		print("function not found")
		return quit(1)

	if not "transform2D_function" in example_node:
		print("function not found")
		return quit(1)

	if not "transform3D_function" in example_node:
		print("function not found")
		return quit(1)

	if not "vector2_function" in example_node:
		print("function not found")
		return quit(1)

	if not "vector2i_function" in example_node:
		print("function not found")
		return quit(1)

	if not "vector3_function" in example_node:
		print("function not found")
		return quit(1)

	if not "vector3i_function" in example_node:
		print("function not found")
		return quit(1)

	if not "vector4_function" in example_node:
		print("function not found")
		return quit(1)

	if not "vector4i_function" in example_node:
		print("function not found")
		return quit(1)

	if not "aabb_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "typed_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "basis_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "bool_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "callable_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "color_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "dictionary_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "typed_dictionary_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "float_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "real_t_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "double_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "int_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "long_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "node_path_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "object_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "packed_byte_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "packed_color_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "packed_float32_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "packed_float64_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "packed_int32_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "packed_int64_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "packed_string_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "packed_vector2_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "packed_vector3_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "packed_vector4_array_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "plane_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "projection_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "quaternion_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "rect2_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "rect2i_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "signal_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "string_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "string_name_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "transform2D_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "transform3D_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "vector2_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "vector2i_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "vector3_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "vector3i_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "vector4_signal" in example_node:
		print("signal not found")
		return quit(1)

	if not "vector4i_signal" in example_node:
		print("signal not found")
		return quit(1)

	example_node.connect("aabb_signal", func( _param : AABB ) : pass)
	if example_node.emit_signal("aabb_signal", example_node.aabb_function()) != Error.OK:
		print("Failed to emit aabb_signal")
		return quit(1)

	example_node.connect("array_signal", func( _param : Array ) : pass)
	if example_node.emit_signal("array_signal", example_node.array_function()) != Error.OK:
		print("Failed to emit array_signal")
		return quit(1)

	example_node.connect("typed_array_signal", func( _param : Array[Resource] ) : pass)
	if example_node.emit_signal("typed_array_signal", example_node.typed_array_function()) != Error.OK:
		print("Failed to emit typed_array_signal")
		return quit(1)

	example_node.connect("basis_signal", func( _param : Basis ) : pass)
	if example_node.emit_signal("basis_signal", example_node.basis_function()) != Error.OK:
		print("Failed to emit basis_signal")
		return quit(1)

	example_node.connect("bool_signal", func( _param : bool ) : pass)
	if example_node.emit_signal("bool_signal", example_node.bool_function()) != Error.OK:
		print("Failed to emit bool_signal")
		return quit(1)

	example_node.connect("callable_signal", func( _param : Callable ) : pass)
	if example_node.emit_signal("callable_signal", example_node.callable_function()) != Error.OK:
		print("Failed to emit callable_signal")
		return quit(1)

	example_node.connect("color_signal", func( _param : Color ) : pass)
	if example_node.emit_signal("color_signal", example_node.color_function()) != Error.OK:
		print("Failed to emit color_signal")
		return quit(1)

	example_node.connect("dictionary_signal", func( _param : Dictionary ) : pass)
	if example_node.emit_signal("dictionary_signal", example_node.dictionary_function()) != Error.OK:
		print("Failed to emit dictionary_signal")
		return quit(1)

	example_node.connect("typed_dictionary_signal", func( _param : Dictionary[int, Resource] ) : pass)
	if example_node.emit_signal("typed_dictionary_signal", example_node.typed_dictionary_function()) != Error.OK:
		print("Failed to emit typed_dictionary_signal")
		return quit(1)

	example_node.connect("float_signal", func( _param : float ) : pass)
	if example_node.emit_signal("float_signal", example_node.float_function()) != Error.OK:
		print("Failed to emit float_signal")
		return quit(1)

	example_node.connect("real_t_signal", func( _param : float ) : pass)
	if example_node.emit_signal("real_t_signal", example_node.real_t_function()) != Error.OK:
		print("Failed to emit real_t_signal")
		return quit(1)

	example_node.connect("double_signal", func( _param : float ) : pass)
	if example_node.emit_signal("double_signal", example_node.double_function()) != Error.OK:
		print("Failed to emit double_signal")
		return quit(1)

	example_node.connect("int_signal", func( _param : int ) : pass)
	if example_node.emit_signal("int_signal", example_node.int_function()) != Error.OK:
		print("Failed to emit int_signal")
		return quit(1)

	example_node.connect("long_signal", func( _param : int ) : pass)
	if example_node.emit_signal("long_signal", example_node.long_function()) != Error.OK:
		print("Failed to emit long_signal")
		return quit(1)

	example_node.connect("node_path_signal", func( _param : NodePath ) : pass)
	if example_node.emit_signal("node_path_signal", example_node.node_path_function()) != Error.OK:
		print("Failed to emit node_path_signal")
		return quit(1)

	example_node.connect("object_signal", func( _param : Object ) : pass)
	if example_node.emit_signal("object_signal", example_node.object_function()) != Error.OK:
		print("Failed to emit object_signal")
		return quit(1)

	example_node.connect("packed_byte_array_signal", func( _param : PackedByteArray ) : pass)
	if example_node.emit_signal("packed_byte_array_signal", example_node.packed_byte_array_function()) != Error.OK:
		print("Failed to emit packed_byte_array_signal")
		return quit(1)

	example_node.connect("packed_color_array_signal", func( _param : PackedColorArray ) : pass)
	if example_node.emit_signal("packed_color_array_signal", example_node.packed_color_array_function()) != Error.OK:
		print("Failed to emit packed_color_array_signal")
		return quit(1)

	example_node.connect("packed_float32_array_signal", func( _param : PackedFloat32Array ) : pass)
	if example_node.emit_signal("packed_float32_array_signal", example_node.packed_float32_array_function()) != Error.OK:
		print("Failed to emit packed_float32_array_signal")
		return quit(1)

	example_node.connect("packed_float64_array_signal", func( _param : PackedFloat64Array ) : pass)
	if example_node.emit_signal("packed_float64_array_signal", example_node.packed_float64_array_function()) != Error.OK:
		print("Failed to emit packed_float64_array_signal")
		return quit(1)

	example_node.connect("packed_int32_array_signal", func( _param : PackedInt32Array ) : pass)
	if example_node.emit_signal("packed_int32_array_signal", example_node.packed_int32_array_function()) != Error.OK:
		print("Failed to emit packed_int32_array_signal")
		return quit(1)

	example_node.connect("packed_int64_array_signal", func( _param : PackedInt64Array ) : pass)
	if example_node.emit_signal("packed_int64_array_signal", example_node.packed_int64_array_function()) != Error.OK:
		print("Failed to emit packed_int64_array_signal")
		return quit(1)

	example_node.connect("packed_string_array_signal", func( _param : PackedStringArray ) : pass)
	if example_node.emit_signal("packed_string_array_signal", example_node.packed_string_array_function()) != Error.OK:
		print("Failed to emit packed_string_array_signal")
		return quit(1)

	example_node.connect("packed_vector2_array_signal", func( _param : PackedVector2Array ) : pass)
	if example_node.emit_signal("packed_vector2_array_signal", example_node.packed_vector2_array_function()) != Error.OK:
		print("Failed to emit packed_vector2_array_signal")
		return quit(1)

	example_node.connect("packed_vector3_array_signal", func( _param : PackedVector3Array ) : pass)
	if example_node.emit_signal("packed_vector3_array_signal", example_node.packed_vector3_array_function()) != Error.OK:
		print("Failed to emit packed_vector3_array_signal")
		return quit(1)

	example_node.connect("packed_vector4_array_signal", func( _param : PackedVector4Array ) : pass)
	if example_node.emit_signal("packed_vector4_array_signal", example_node.packed_vector4_array_function()) != Error.OK:
		print("Failed to emit packed_vector4_array_signal")
		return quit(1)

	example_node.connect("plane_signal", func( _param : Plane ) : pass)
	if example_node.emit_signal("plane_signal", example_node.plane_function()) != Error.OK:
		print("Failed to emit plane_signal")
		return quit(1)

	example_node.connect("projection_signal", func( _param : Projection ) : pass)
	if example_node.emit_signal("projection_signal", example_node.projection_function()) != Error.OK:
		print("Failed to emit projection_signal")
		return quit(1)

	example_node.connect("quaternion_signal", func( _param : Quaternion ) : pass)
	if example_node.emit_signal("quaternion_signal", example_node.quaternion_function()) != Error.OK:
		print("Failed to emit quaternion_signal")
		return quit(1)

	example_node.connect("rect2_signal", func( _param : Rect2 ) : pass)
	if example_node.emit_signal("rect2_signal", example_node.rect2_function()) != Error.OK:
		print("Failed to emit rect2_signal")
		return quit(1)

	example_node.connect("rect2i_signal", func( _param : Rect2i ) : pass)
	if example_node.emit_signal("rect2i_signal", example_node.rect2i_function()) != Error.OK:
		print("Failed to emit rect2i_signal")
		return quit(1)

	example_node.connect("signal_signal", func( _param : Signal ) : pass)
	if example_node.emit_signal("signal_signal", example_node.signal_function()) != Error.OK:
		print("Failed to emit signal_signal")
		return quit(1)

	example_node.connect("string_signal", func( _param : String ) : pass)
	if example_node.emit_signal("string_signal", example_node.string_function()) != Error.OK:
		print("Failed to emit string_signal")
		return quit(1)

	example_node.connect("string_name_signal", func( _param : StringName ) : pass)
	if example_node.emit_signal("string_name_signal", example_node.string_name_function()) != Error.OK:
		print("Failed to emit string_name_signal")
		return quit(1)

	example_node.connect("transform2D_signal", func( _param : Transform2D ) : pass)
	if example_node.emit_signal("transform2D_signal", example_node.transform2D_function()) != Error.OK:
		print("Failed to emit transform2D_signal")
		return quit(1)

	example_node.connect("transform3D_signal", func( _param : Transform3D ) : pass)
	if example_node.emit_signal("transform3D_signal", example_node.transform3D_function()) != Error.OK:
		print("Failed to emit transform3D_signal")
		return quit(1)

	example_node.connect("vector2_signal", func( _param : Vector2 ) : pass)
	if example_node.emit_signal("vector2_signal", example_node.vector2_function()) != Error.OK:
		print("Failed to emit vector2_signal")
		return quit(1)

	example_node.connect("vector2i_signal", func( _param : Vector2i ) : pass)
	if example_node.emit_signal("vector2i_signal", example_node.vector2i_function()) != Error.OK:
		print("Failed to emit vector2i_signal")
		return quit(1)

	example_node.connect("vector3_signal", func( _param : Vector3 ) : pass)
	if example_node.emit_signal("vector3_signal", example_node.vector3_function()) != Error.OK:
		print("Failed to emit vector3_signal")
		return quit(1)

	example_node.connect("vector3i_signal", func( _param : Vector3i ) : pass)
	if example_node.emit_signal("vector3i_signal", example_node.vector3i_function()) != Error.OK:
		print("Failed to emit vector3i_signal")
		return quit(1)

	example_node.connect("vector4_signal", func( _param : Vector4 ) : pass)
	if example_node.emit_signal("vector4_signal", example_node.vector4_function()) != Error.OK:
		print("Failed to emit vector4_signal")
		return quit(1)

	example_node.connect("vector4i_signal", func( _param : Vector4i ) : pass)
	if example_node.emit_signal("vector4i_signal", example_node.vector4i_function()) != Error.OK:
		print("Failed to emit vector4i_signal")
		return quit(1)

	print("Success!")
	return quit(0)
