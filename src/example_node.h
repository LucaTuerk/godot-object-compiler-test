#pragma once

#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/classes/resource.hpp"
#include "godot_cpp/variant/aabb.hpp"
#include "godot_cpp/variant/typed_array.hpp"
#include "godot_cpp/variant/typed_dictionary.hpp"

using namespace godot;

#include "example_node.generated.h"
#include "godot_object_compiler/macros.h"

GODOT_CLASS();
class ExampleNode : public Node {
	GODOT_GENERATED_BODY();

public:
	GODOT_ENUM();
	enum Enum { ENUM_VALUE };

	GODOT_PROPERTY();
	AABB aabb_property;

	GODOT_PROPERTY();
	Array array_property;

	GODOT_PROPERTY();
	TypedArray<Resource> typed_array_property;

	GODOT_PROPERTY();
	Basis basis_property;

	GODOT_PROPERTY();
	bool bool_property = false;

	GODOT_PROPERTY();
	Callable callable_property;

	GODOT_PROPERTY();
	Color color_property;

	GODOT_PROPERTY();
	Dictionary dictionary_property;

	GODOT_PROPERTY();
	TypedDictionary<int, Resource> typed_dictionary_property;

	GODOT_PROPERTY();
	float float_property = 0.0;

	GODOT_PROPERTY();
	real_t real_t_property = 0.0;

	GODOT_PROPERTY();
	double double_property = 0.0;

	GODOT_PROPERTY();
	int int_property = 0;

	GODOT_PROPERTY();
	long long_property = 0;

	GODOT_PROPERTY();
	NodePath node_path_property;

	GODOT_PROPERTY();
	Object *object_property = nullptr;

	GODOT_PROPERTY();
	PackedByteArray packed_byte_array_property;

	GODOT_PROPERTY();
	PackedColorArray packed_color_array_property;

	GODOT_PROPERTY();
	PackedFloat32Array packed_float32_array_property;

	GODOT_PROPERTY();
	PackedFloat64Array packed_float64_array_property;

	GODOT_PROPERTY();
	PackedInt32Array packed_int32_array_property;

	GODOT_PROPERTY();
	PackedInt64Array packed_int64_array_property;

	GODOT_PROPERTY();
	PackedStringArray packed_string_array_property;

	GODOT_PROPERTY();
	PackedVector2Array packed_vector2_array_property;

	GODOT_PROPERTY();
	PackedVector3Array packed_vector3_array_property;

	GODOT_PROPERTY();
	PackedVector4Array packed_vector4_array_property;

	GODOT_PROPERTY();
	Plane plane_property;

	GODOT_PROPERTY();
	Projection projection_property;

	GODOT_PROPERTY();
	Quaternion quaternion_property;

	GODOT_PROPERTY();
	Rect2 rect2_property;

	GODOT_PROPERTY();
	Rect2i rect2i_property;

	GODOT_PROPERTY();
	Signal signal_property;

	GODOT_PROPERTY();
	String string_property;

	GODOT_PROPERTY();
	StringName string_name_property;

	GODOT_PROPERTY();
	Transform2D transform2D_property;

	GODOT_PROPERTY();
	Transform3D transform3D_property;

	GODOT_PROPERTY();
	Vector2 vector2_property;

	GODOT_PROPERTY();
	Vector2i vector2i_property;

	GODOT_PROPERTY();
	Vector3 vector3_property;

	GODOT_PROPERTY();
	Vector3i vector3i_property;

	GODOT_PROPERTY();
	Vector4 vector4_property;

	GODOT_PROPERTY();
	Vector4i vector4i_property;

	GODOT_PROPERTY(Name("custom_aabb_property"), Get("get_custom_aabb_property"), Set("set_custom_aabb_property"));
	AABB get_custom_aabb_property() const;
	void set_custom_aabb_property(const AABB &p_value);

	GODOT_PROPERTY(Name("custom_array_property"), Get("get_custom_array_property"), Set("set_custom_array_property"));
	Array get_custom_array_property() const;
	void set_custom_array_property(const Array &p_value);

	GODOT_PROPERTY(Name("custom_typed_array_property"), Get("get_custom_typed_array_property"), Set("set_custom_typed_array_property"));
	TypedArray<Resource> get_custom_typed_array_property() const;
	void set_custom_typed_array_property(const TypedArray<Resource> &p_value);

	GODOT_PROPERTY(Name("custom_basis_property"), Get("get_custom_basis_property"), Set("set_custom_basis_property"));
	Basis get_custom_basis_property() const;
	void set_custom_basis_property(const Basis &p_value);

	GODOT_PROPERTY(Name("custom_bool_property"), Get("get_custom_bool_property"), Set("set_custom_bool_property"));
	bool get_custom_bool_property() const;
	void set_custom_bool_property(const bool &p_value);

	GODOT_PROPERTY(Name("custom_callable_property"), Get("get_custom_callable_property"), Set("set_custom_callable_property"));
	Callable get_custom_callable_property() const;
	void set_custom_callable_property(const Callable &p_value);

	GODOT_PROPERTY(Name("custom_color_property"), Get("get_custom_color_property"), Set("set_custom_color_property"));
	Color get_custom_color_property() const;
	void set_custom_color_property(const Color &p_value);

	GODOT_PROPERTY(Name("custom_dictionary_property"), Get("get_custom_dictionary_property"), Set("set_custom_dictionary_property"));
	Dictionary get_custom_dictionary_property() const;
	void set_custom_dictionary_property(const Dictionary &p_value);

	GODOT_PROPERTY(Name("custom_typed_dictionary_property"), Get("get_custom_typed_dictionary_property"), Set("set_custom_typed_dictionary_property"));
	TypedDictionary<int, Resource> get_custom_typed_dictionary_property() const;
	void set_custom_typed_dictionary_property(const TypedDictionary<int, Resource> &p_value);

	GODOT_PROPERTY(Name("custom_float_property"), Get("get_custom_float_property"), Set("set_custom_float_property"));
	float get_custom_float_property() const;
	void set_custom_float_property(const float &p_value);

	GODOT_PROPERTY(Name("custom_real_t_property"), Get("get_custom_real_t_property"), Set("set_custom_real_t_property"));
	real_t get_custom_real_t_property() const;
	void set_custom_real_t_property(const real_t &p_value);

	GODOT_PROPERTY(Name("custom_double_property"), Get("get_custom_double_property"), Set("set_custom_double_property"));
	double get_custom_double_property() const;
	void set_custom_double_property(const double &p_value);

	GODOT_PROPERTY(Name("custom_int_property"), Get("get_custom_int_property"), Set("set_custom_int_property"));
	int get_custom_int_property() const;
	void set_custom_int_property(const int &p_value);

	GODOT_PROPERTY(Name("custom_long_property"), Get("get_custom_long_property"), Set("set_custom_long_property"));
	long get_custom_long_property() const;
	void set_custom_long_property(const long &p_value);

	GODOT_PROPERTY(Name("custom_node_path_property"), Get("get_custom_node_path_property"), Set("set_custom_node_path_property"));
	NodePath get_custom_node_path_property() const;
	void set_custom_node_path_property(const NodePath &p_value);

	GODOT_PROPERTY(Name("custom_object_property"), Get("get_custom_object_property"), Set("set_custom_object_property"));
	Object *get_custom_object_property() const;
	void set_custom_object_property(Object *p_value);

	GODOT_PROPERTY(Name("custom_packed_byte_array_property"), Get("get_custom_packed_byte_array_property"), Set("set_custom_packed_byte_array_property"));
	PackedByteArray get_custom_packed_byte_array_property() const;
	void set_custom_packed_byte_array_property(const PackedByteArray &p_value);

	GODOT_PROPERTY(Name("custom_packed_color_array_property"), Get("get_custom_packed_color_array_property"), Set("set_custom_packed_color_array_property"));
	PackedColorArray get_custom_packed_color_array_property() const;
	void set_custom_packed_color_array_property(const PackedColorArray &p_value);

	GODOT_PROPERTY(Name("custom_packed_float32_array_property"), Get("get_custom_packed_float32_array_property"), Set("set_custom_packed_float32_array_property"));
	PackedFloat32Array get_custom_packed_float32_array_property() const;
	void set_custom_packed_float32_array_property(const PackedFloat32Array &p_value);

	GODOT_PROPERTY(Name("custom_packed_float64_array_property"), Get("get_custom_packed_float64_array_property"), Set("set_custom_packed_float64_array_property"));
	PackedFloat64Array get_custom_packed_float64_array_property() const;
	void set_custom_packed_float64_array_property(const PackedFloat64Array &p_value);

	GODOT_PROPERTY(Name("custom_packed_int32_array_property"), Get("get_custom_packed_int32_array_property"), Set("set_custom_packed_int32_array_property"));
	PackedInt32Array get_custom_packed_int32_array_property() const;
	void set_custom_packed_int32_array_property(const PackedInt32Array &p_value);

	GODOT_PROPERTY(Name("custom_packed_int64_array_property"), Get("get_custom_packed_int64_array_property"), Set("set_custom_packed_int64_array_property"));
	PackedInt64Array get_custom_packed_int64_array_property() const;
	void set_custom_packed_int64_array_property(const PackedInt64Array &p_value);

	GODOT_PROPERTY(Name("custom_packed_string_array_property"), Get("get_custom_packed_string_array_property"), Set("set_custom_packed_string_array_property"));
	PackedStringArray get_custom_packed_string_array_property() const;
	void set_custom_packed_string_array_property(const PackedStringArray &p_value);

	GODOT_PROPERTY(Name("custom_packed_vector2_array_property"), Get("get_custom_packed_vector2_array_property"), Set("set_custom_packed_vector2_array_property"));
	PackedVector2Array get_custom_packed_vector2_array_property() const;
	void set_custom_packed_vector2_array_property(const PackedVector2Array &p_value);

	GODOT_PROPERTY(Name("custom_packed_vector3_array_property"), Get("get_custom_packed_vector3_array_property"), Set("set_custom_packed_vector3_array_property"));
	PackedVector3Array get_custom_packed_vector3_array_property() const;
	void set_custom_packed_vector3_array_property(const PackedVector3Array &p_value);

	GODOT_PROPERTY(Name("custom_packed_vector4_array_property"), Get("get_custom_packed_vector4_array_property"), Set("set_custom_packed_vector4_array_property"));
	PackedVector4Array get_custom_packed_vector4_array_property() const;
	void set_custom_packed_vector4_array_property(const PackedVector4Array &p_value);

	GODOT_PROPERTY(Name("custom_plane_property"), Get("get_custom_plane_property"), Set("set_custom_plane_property"));
	Plane get_custom_plane_property() const;
	void set_custom_plane_property(const Plane &p_value);

	GODOT_PROPERTY(Name("custom_projection_property"), Get("get_custom_projection_property"), Set("set_custom_projection_property"));
	Projection get_custom_projection_property() const;
	void set_custom_projection_property(const Projection &p_value);

	GODOT_PROPERTY(Name("custom_quaternion_property"), Get("get_custom_quaternion_property"), Set("set_custom_quaternion_property"));
	Quaternion get_custom_quaternion_property() const;
	void set_custom_quaternion_property(const Quaternion &p_value);

	GODOT_PROPERTY(Name("custom_rect2_property"), Get("get_custom_rect2_property"), Set("set_custom_rect2_property"));
	Rect2 get_custom_rect2_property() const;
	void set_custom_rect2_property(const Rect2 &p_value);

	GODOT_PROPERTY(Name("custom_rect2i_property"), Get("get_custom_rect2i_property"), Set("set_custom_rect2i_property"));
	Rect2i get_custom_rect2i_property() const;
	void set_custom_rect2i_property(const Rect2i &p_value);

	GODOT_PROPERTY(Name("custom_signal_property"), Get("get_custom_signal_property"), Set("set_custom_signal_property"));
	Signal get_custom_signal_property() const;
	void set_custom_signal_property(const Signal &p_value);

	GODOT_PROPERTY(Name("custom_string_property"), Get("get_custom_string_property"), Set("set_custom_string_property"));
	String get_custom_string_property() const;
	void set_custom_string_property(const String &p_value);

	GODOT_PROPERTY(Name("custom_string_name_property"), Get("get_custom_string_name_property"), Set("set_custom_string_name_property"));
	StringName get_custom_string_name_property() const;
	void set_custom_string_name_property(const StringName &p_value);

	GODOT_PROPERTY(Name("custom_transform2D_property"), Get("get_custom_transform2D_property"), Set("set_custom_transform2D_property"));
	Transform2D get_custom_transform2D_property() const;
	void set_custom_transform2D_property(const Transform2D &p_value);

	GODOT_PROPERTY(Name("custom_transform3D_property"), Get("get_custom_transform3D_property"), Set("set_custom_transform3D_property"));
	Transform3D get_custom_transform3D_property() const;
	void set_custom_transform3D_property(const Transform3D &p_value);

	GODOT_PROPERTY(Name("custom_vector2_property"), Get("get_custom_vector2_property"), Set("set_custom_vector2_property"));
	Vector2 get_custom_vector2_property() const;
	void set_custom_vector2_property(const Vector2 &p_value);

	GODOT_PROPERTY(Name("custom_vector2i_property"), Get("get_custom_vector2i_property"), Set("set_custom_vector2i_property"));
	Vector2i get_custom_vector2i_property() const;
	void set_custom_vector2i_property(const Vector2i &p_value);

	GODOT_PROPERTY(Name("custom_vector3_property"), Get("get_custom_vector3_property"), Set("set_custom_vector3_property"));
	Vector3 get_custom_vector3_property() const;
	void set_custom_vector3_property(const Vector3 &p_value);

	GODOT_PROPERTY(Name("custom_vector3i_property"), Get("get_custom_vector3i_property"), Set("set_custom_vector3i_property"));
	Vector3i get_custom_vector3i_property() const;
	void set_custom_vector3i_property(const Vector3i &p_value);

	GODOT_PROPERTY(Name("custom_vector4_property"), Get("get_custom_vector4_property"), Set("set_custom_vector4_property"));
	Vector4 get_custom_vector4_property() const;
	void set_custom_vector4_property(const Vector4 &p_value);

	GODOT_PROPERTY(Name("custom_vector4i_property"), Get("get_custom_vector4i_property"), Set("set_custom_vector4i_property"));
	Vector4i get_custom_vector4i_property() const;
	void set_custom_vector4i_property(const Vector4i &p_value);

	GODOT_PROPERTY(Name("custom_node_property"), Get("get_custom_node_property"), Set("set_custom_node_property"));
	Node *get_custom_node_property() const;
	void set_custom_node_property(Node *p_value);

	GODOT_PROPERTY(Name("custom_resource_property"), Get("get_custom_resource_property"), Set("set_custom_resource_property"));
	Ref<Resource> get_custom_resource_property() const;
	void set_custom_resource_property(const Ref<Resource> &p_value);

	GODOT_PROPERTY(Name("custom_enum_property"), Get("get_custom_enum_property"), Set("set_custom_enum_property"));
	Enum get_custom_enum_property() const;
	void set_custom_enum_property(Enum p_value);

	GODOT_FUNCTION();
	AABB aabb_function() { return {}; }

	GODOT_FUNCTION();
	Array array_function() { return {}; }

	GODOT_FUNCTION();
	TypedArray<Resource> typed_array_function() { return {}; }

	GODOT_FUNCTION();
	Basis basis_function() { return {}; }

	GODOT_FUNCTION();
	bool bool_function() { return {}; }

	GODOT_FUNCTION();
	Callable callable_function() { return {}; }

	GODOT_FUNCTION();
	Color color_function() { return {}; }

	GODOT_FUNCTION();
	Dictionary dictionary_function() { return {}; }

	GODOT_FUNCTION();
	TypedDictionary<int, Resource> typed_dictionary_function() { return {}; }

	GODOT_FUNCTION();
	float float_function() { return {}; }

	GODOT_FUNCTION();
	real_t real_t_function() { return {}; }

	GODOT_FUNCTION();
	double double_function() { return {}; }

	GODOT_FUNCTION();
	int int_function() { return {}; }

	GODOT_FUNCTION();
	long long_function() { return {}; }

	GODOT_FUNCTION();
	NodePath node_path_function() { return {}; }

	GODOT_FUNCTION();
	Object *object_function() { return {}; }

	GODOT_FUNCTION();
	PackedByteArray packed_byte_array_function() { return {}; }

	GODOT_FUNCTION();
	PackedColorArray packed_color_array_function() { return {}; }

	GODOT_FUNCTION();
	PackedFloat32Array packed_float32_array_function() { return {}; }

	GODOT_FUNCTION();
	PackedFloat64Array packed_float64_array_function() { return {}; }

	GODOT_FUNCTION();
	PackedInt32Array packed_int32_array_function() { return {}; }

	GODOT_FUNCTION();
	PackedInt64Array packed_int64_array_function() { return {}; }

	GODOT_FUNCTION();
	PackedStringArray packed_string_array_function() { return {}; }

	GODOT_FUNCTION();
	PackedVector2Array packed_vector2_array_function() { return {}; }

	GODOT_FUNCTION();
	PackedVector3Array packed_vector3_array_function() { return {}; }

	GODOT_FUNCTION();
	PackedVector4Array packed_vector4_array_function() { return {}; }

	GODOT_FUNCTION();
	Plane plane_function() { return {}; }

	GODOT_FUNCTION();
	Projection projection_function() { return {}; }

	GODOT_FUNCTION();
	Quaternion quaternion_function() { return {}; }

	GODOT_FUNCTION();
	Rect2 rect2_function() { return {}; }

	GODOT_FUNCTION();
	Rect2i rect2i_function() { return {}; }

	GODOT_FUNCTION();
	Signal signal_function() { return {}; }

	GODOT_FUNCTION();
	String string_function() { return {}; }

	GODOT_FUNCTION();
	StringName string_name_function() { return {}; }

	GODOT_FUNCTION();
	Transform2D transform2D_function() { return {}; }

	GODOT_FUNCTION();
	Transform3D transform3D_function() { return {}; }

	GODOT_FUNCTION();
	Vector2 vector2_function() { return {}; }

	GODOT_FUNCTION();
	Vector2i vector2i_function() { return {}; }

	GODOT_FUNCTION();
	Vector3 vector3_function() { return {}; }

	GODOT_FUNCTION();
	Vector3i vector3i_function() { return {}; }

	GODOT_FUNCTION();
	Vector4 vector4_function() { return {}; }

	GODOT_FUNCTION();
	Vector4i vector4i_function() { return {}; }

	GODOT_SIGNAL();
	void aabb_signal(AABB p_param);

	GODOT_SIGNAL();
	void array_signal(Array p_param);

	GODOT_SIGNAL();
	void typed_array_signal(TypedArray<Resource> p_param);

	GODOT_SIGNAL();
	void basis_signal(Basis p_param);

	GODOT_SIGNAL();
	void bool_signal(bool p_param);

	GODOT_SIGNAL();
	void callable_signal(Callable p_param);

	GODOT_SIGNAL();
	void color_signal(Color p_param);

	GODOT_SIGNAL();
	void dictionary_signal(Dictionary p_param);

	GODOT_SIGNAL();
	void typed_dictionary_signal(TypedDictionary<int, Resource> p_param);

	GODOT_SIGNAL();
	void float_signal(float p_param);

	GODOT_SIGNAL();
	void real_t_signal(real_t p_param);

	GODOT_SIGNAL();
	void double_signal(double p_param);

	GODOT_SIGNAL();
	void int_signal(int p_param);

	GODOT_SIGNAL();
	void long_signal(long p_param);

	GODOT_SIGNAL();
	void node_path_signal(NodePath p_param);

	GODOT_SIGNAL();
	void object_signal(Object *p_param);

	GODOT_SIGNAL();
	void packed_byte_array_signal(PackedByteArray p_param);

	GODOT_SIGNAL();
	void packed_color_array_signal(PackedColorArray p_param);

	GODOT_SIGNAL();
	void packed_float32_array_signal(PackedFloat32Array p_param);

	GODOT_SIGNAL();
	void packed_float64_array_signal(PackedFloat64Array p_param);

	GODOT_SIGNAL();
	void packed_int32_array_signal(PackedInt32Array p_param);

	GODOT_SIGNAL();
	void packed_int64_array_signal(PackedInt64Array p_param);

	GODOT_SIGNAL();
	void packed_string_array_signal(PackedStringArray p_param);

	GODOT_SIGNAL();
	void packed_vector2_array_signal(PackedVector2Array p_param);

	GODOT_SIGNAL();
	void packed_vector3_array_signal(PackedVector3Array p_param);

	GODOT_SIGNAL();
	void packed_vector4_array_signal(PackedVector4Array p_param);

	GODOT_SIGNAL();
	void plane_signal(Plane p_param);

	GODOT_SIGNAL();
	void projection_signal(Projection p_param);

	GODOT_SIGNAL();
	void quaternion_signal(Quaternion p_param);

	GODOT_SIGNAL();
	void rect2_signal(Rect2 p_param);

	GODOT_SIGNAL();
	void rect2i_signal(Rect2i p_param);

	GODOT_SIGNAL();
	void signal_signal(Signal p_param);

	GODOT_SIGNAL();
	void string_signal(String p_param);

	GODOT_SIGNAL();
	void string_name_signal(StringName p_param);

	GODOT_SIGNAL();
	void transform2D_signal(Transform2D p_param);

	GODOT_SIGNAL();
	void transform3D_signal(Transform3D p_param);

	GODOT_SIGNAL();
	void vector2_signal(Vector2 p_param);

	GODOT_SIGNAL();
	void vector2i_signal(Vector2i p_param);

	GODOT_SIGNAL();
	void vector3_signal(Vector3 p_param);

	GODOT_SIGNAL();
	void vector3i_signal(Vector3i p_param);

	GODOT_SIGNAL();
	void vector4_signal(Vector4 p_param);

	GODOT_SIGNAL();
	void vector4i_signal(Vector4i p_param);

	GODOT_SIGNAL();
	void node_signal(Node *p_param);

	GODOT_SIGNAL();
	void resource_signal(Ref<Resource> p_param);

	Enum enum_property = ENUM_VALUE;

	Ref<Resource> resource_property;

	Node *node_property;
};
GODOT_GENERATED_GLOBAL();
