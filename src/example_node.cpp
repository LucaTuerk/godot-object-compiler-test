#include "example_node.h"

AABB ExampleNode::get_custom_aabb_property() const {
	return aabb_property;
}

void ExampleNode::set_custom_aabb_property(const AABB &p_value) {
	aabb_property = p_value;
}

Array ExampleNode::get_custom_array_property() const {
	return array_property;
}

void ExampleNode::set_custom_array_property(const Array &p_value) {
	array_property = p_value;
}

TypedArray<Resource> ExampleNode::get_custom_typed_array_property() const {
	return typed_array_property;
}

void ExampleNode::set_custom_typed_array_property(const TypedArray<Resource> &p_value) {
	typed_array_property = p_value;
}

Basis ExampleNode::get_custom_basis_property() const {
	return basis_property;
}

void ExampleNode::set_custom_basis_property(const Basis &p_value) {
	basis_property = p_value;
}

bool ExampleNode::get_custom_bool_property() const {
	return bool_property;
}

void ExampleNode::set_custom_bool_property(const bool &p_value) {
	bool_property = p_value;
}

Callable ExampleNode::get_custom_callable_property() const {
	return callable_property;
}

void ExampleNode::set_custom_callable_property(const Callable &p_value) {
	callable_property = p_value;
}

Color ExampleNode::get_custom_color_property() const {
    return color_property;
}

void ExampleNode::set_custom_color_property(const Color &p_value) {
    color_property = p_value;
}

Dictionary ExampleNode::get_custom_dictionary_property() const {
    return dictionary_property;
}

void ExampleNode::set_custom_dictionary_property(const Dictionary &p_value) {
    dictionary_property = p_value;
}

TypedDictionary<int, Resource> ExampleNode::get_custom_typed_dictionary_property() const {
    return typed_dictionary_property;
}

void ExampleNode::set_custom_typed_dictionary_property(const TypedDictionary<int, Resource> &p_value) {
    typed_dictionary_property = p_value;
}

float ExampleNode::get_custom_float_property() const {
    return float_property;
}

void ExampleNode::set_custom_float_property(const float &p_value) {
    float_property = p_value;
}

real_t ExampleNode::get_custom_real_t_property() const {
    return real_t_property;
}

void ExampleNode::set_custom_real_t_property(const real_t &p_value) {
    real_t_property = p_value;
}

double ExampleNode::get_custom_double_property() const {
    return double_property;
}

void ExampleNode::set_custom_double_property(const double &p_value) {
    double_property = p_value;
}

int ExampleNode::get_custom_int_property() const {
    return int_property;
}

void ExampleNode::set_custom_int_property(const int &p_value) {
    int_property = p_value;
}

long ExampleNode::get_custom_long_property() const {
    return long_property;
}

void ExampleNode::set_custom_long_property(const long &p_value) {
    long_property = p_value;
}

NodePath ExampleNode::get_custom_node_path_property() const {
    return node_path_property;
}

void ExampleNode::set_custom_node_path_property(const NodePath &p_value) {
    node_path_property = p_value;
}

Object* ExampleNode::get_custom_object_property() const {
    return object_property;
}

void ExampleNode::set_custom_object_property(Object * p_value) {
    object_property = p_value;
}

PackedByteArray ExampleNode::get_custom_packed_byte_array_property() const {
    return packed_byte_array_property;
}

void ExampleNode::set_custom_packed_byte_array_property(const PackedByteArray &p_value) {
    packed_byte_array_property = p_value;
}

PackedColorArray ExampleNode::get_custom_packed_color_array_property() const {
    return packed_color_array_property;
}

void ExampleNode::set_custom_packed_color_array_property(const PackedColorArray &p_value) {
    packed_color_array_property = p_value;
}

PackedFloat32Array ExampleNode::get_custom_packed_float32_array_property() const {
    return packed_float32_array_property;
}

void ExampleNode::set_custom_packed_float32_array_property(const PackedFloat32Array &p_value) {
    packed_float32_array_property = p_value;
}

PackedFloat64Array ExampleNode::get_custom_packed_float64_array_property() const {
    return packed_float64_array_property;
}

void ExampleNode::set_custom_packed_float64_array_property(const PackedFloat64Array &p_value) {
    packed_float64_array_property = p_value;
}

PackedInt32Array ExampleNode::get_custom_packed_int32_array_property() const {
    return packed_int32_array_property;
}

void ExampleNode::set_custom_packed_int32_array_property(const PackedInt32Array &p_value) {
    packed_int32_array_property = p_value;
}

PackedInt64Array ExampleNode::get_custom_packed_int64_array_property() const {
    return packed_int64_array_property;
}

void ExampleNode::set_custom_packed_int64_array_property(const PackedInt64Array &p_value) {
    packed_int64_array_property = p_value;
}

PackedStringArray ExampleNode::get_custom_packed_string_array_property() const {
    return packed_string_array_property;
}

void ExampleNode::set_custom_packed_string_array_property(const PackedStringArray &p_value) {
    packed_string_array_property = p_value;
}

PackedVector2Array ExampleNode::get_custom_packed_vector2_array_property() const {
    return packed_vector2_array_property;
}

void ExampleNode::set_custom_packed_vector2_array_property(const PackedVector2Array &p_value) {
    packed_vector2_array_property = p_value;
}

PackedVector3Array ExampleNode::get_custom_packed_vector3_array_property() const {
    return packed_vector3_array_property;
}

void ExampleNode::set_custom_packed_vector3_array_property(const PackedVector3Array &p_value) {
    packed_vector3_array_property = p_value;
}

PackedVector4Array ExampleNode::get_custom_packed_vector4_array_property() const {
    return packed_vector4_array_property;
}

void ExampleNode::set_custom_packed_vector4_array_property(const PackedVector4Array &p_value) {
    packed_vector4_array_property = p_value;
}

Plane ExampleNode::get_custom_plane_property() const {
    return plane_property;
}

void ExampleNode::set_custom_plane_property(const Plane &p_value) {
    plane_property = p_value;
}

Projection ExampleNode::get_custom_projection_property() const {
    return projection_property;
}

void ExampleNode::set_custom_projection_property(const Projection &p_value) {
    projection_property = p_value;
}

Quaternion ExampleNode::get_custom_quaternion_property() const {
    return quaternion_property;
}

void ExampleNode::set_custom_quaternion_property(const Quaternion &p_value) {
    quaternion_property = p_value;
}

Rect2 ExampleNode::get_custom_rect2_property() const {
    return rect2_property;
}

void ExampleNode::set_custom_rect2_property(const Rect2 &p_value) {
    rect2_property = p_value;
}

Rect2i ExampleNode::get_custom_rect2i_property() const {
    return rect2i_property;
}

void ExampleNode::set_custom_rect2i_property(const Rect2i &p_value) {
    rect2i_property = p_value;
}

Signal ExampleNode::get_custom_signal_property() const {
    return signal_property;
}

void ExampleNode::set_custom_signal_property(const Signal &p_value) {
    signal_property = p_value;
}

String ExampleNode::get_custom_string_property() const {
    return string_property;
}

void ExampleNode::set_custom_string_property(const String &p_value) {
    string_property = p_value;
}

StringName ExampleNode::get_custom_string_name_property() const {
    return string_name_property;
}

void ExampleNode::set_custom_string_name_property(const StringName &p_value) {
    string_name_property = p_value;
}

Transform2D ExampleNode::get_custom_transform2D_property() const {
    return transform2D_property;
}

void ExampleNode::set_custom_transform2D_property(const Transform2D &p_value) {
    transform2D_property = p_value;
}

Transform3D ExampleNode::get_custom_transform3D_property() const {
    return transform3D_property;
}

void ExampleNode::set_custom_transform3D_property(const Transform3D &p_value) {
    transform3D_property = p_value;
}

Vector2 ExampleNode::get_custom_vector2_property() const {
    return vector2_property;
}

void ExampleNode::set_custom_vector2_property(const Vector2 &p_value) {
    vector2_property = p_value;
}

Vector2i ExampleNode::get_custom_vector2i_property() const {
    return vector2i_property;
}

void ExampleNode::set_custom_vector2i_property(const Vector2i &p_value) {
    vector2i_property = p_value;
}

Vector3 ExampleNode::get_custom_vector3_property() const {
    return vector3_property;
}

void ExampleNode::set_custom_vector3_property(const Vector3 &p_value) {
    vector3_property = p_value;
}

Vector3i ExampleNode::get_custom_vector3i_property() const {
    return vector3i_property;
}

void ExampleNode::set_custom_vector3i_property(const Vector3i &p_value) {
    vector3i_property = p_value;
}

Vector4 ExampleNode::get_custom_vector4_property() const {
    return vector4_property;
}

void ExampleNode::set_custom_vector4_property(const Vector4 &p_value) {
    vector4_property = p_value;
}

Vector4i ExampleNode::get_custom_vector4i_property() const {
    return vector4i_property;
}

void ExampleNode::set_custom_vector4i_property(const Vector4i &p_value) {
    vector4i_property = p_value;
}

Node *ExampleNode::get_custom_node_property() const {
    return node_property;
}

void ExampleNode::set_custom_node_property(Node *p_value) {
    node_property = p_value;
}

Ref<Resource> ExampleNode::get_custom_resource_property() const {
    return resource_property;
}

void ExampleNode::set_custom_resource_property(const Ref<Resource> &p_value) {
    resource_property = p_value;
}

ExampleNode::Enum ExampleNode::get_custom_enum_property() const {
    return enum_property;
}

void ExampleNode::set_custom_enum_property(Enum p_value) {
    enum_property = p_value;
}
