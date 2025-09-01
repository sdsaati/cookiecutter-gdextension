/*
We can have many class like {{ cookiecutter.class_name }} and we need to register these classes
for godot, this file does this.
We need to register each class we define for godot here.
*/

#ifndef {{cookiecutter.class_name_header_guard}}_REGISTER_TYPES_H
#define {{cookiecutter.class_name_header_guard}}_REGISTER_TYPES_H

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void initialize_example_module(ModuleInitializationLevel p_level);
void uninitialize_example_module(ModuleInitializationLevel p_level);

#endif // {{cookiecutter.class_name_header_guard}}_REGISTER_TYPES_H
