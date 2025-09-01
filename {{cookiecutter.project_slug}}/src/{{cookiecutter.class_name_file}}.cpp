#include "{{cookiecutter.class_name_file}}.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/godot.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/classes/engine.hpp>

using namespace godot;

void {{cookiecutter.class_name}}::_bind_methods()
{
    // Here we define a property with its getter and setter called name 
    ClassDB::bind_method(D_METHOD("get_name"), &{{cookiecutter.class_name}}::get_name);
	ClassDB::bind_method(D_METHOD("set_name", "p_name"), &{{cookiecutter.class_name}}::set_name);
    // Here we @export our property in godot inspector
	ADD_PROPERTY(PropertyInfo(Variant::STRING, "name"), "set_name", "get_name");

    // Here we bind our hello_world method to gdscript
	ClassDB::bind_method(D_METHOD("hello_world", "p_word"), &{{cookiecutter.class_name}}::hello_world);

    // We also can create some signals for our class/node
    // the first parameter is the signal name
    // other parameters are the parameters of the signal itself
    ADD_SIGNAL(MethodInfo("hello_signal", PropertyInfo(Variant::STRING, "p_word")));
}

{{cookiecutter.class_name}}::{{cookiecutter.class_name}}()
{
    // if you inherits Node2D you need to uncomment below:
    /*
    if (Engine::get_singleton()->is_editor_hint()){
        set_process_mode(Node::ProcessMode::PROCESS_MODE_DISABLED);
    }
    */

    // Initialize any variables here.
    name = "This name variable is filled in C++!";
}

{{cookiecutter.class_name}}::~{{cookiecutter.class_name}}()
{
    // Add your cleanup here.
}


void {{cookiecutter.class_name}}::hello_world(String p_word)
{
    UtilityFunctions::print(p_word);
    emit_signal("hello_signal", p_word);
}

// ================================
/*
For each variable you want to use in gdscript, you need to 
define setter and getter
*/

// setter for name
void {{cookiecutter.class_name}}::set_name(const String p_name)
{
    this->name = p_name;
}
// getter for name
String {{cookiecutter.class_name}}::get_name() const
{
    return this->name;
}
// ================================

