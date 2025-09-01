#ifndef {{cookiecutter.class_name_header_guard}}_H
#define {{cookiecutter.class_name_header_guard}}_H

#include <godot_cpp/classes/control.hpp>

namespace godot
{
    class {{cookiecutter.class_name}}: public Control 
    {
        // our class + the class we want to inherit from it (GDCLASS is a #define)
        GDCLASS({{cookiecutter.class_name}}, Control)
    private:
        // Our variables like: Vector2 velocity;
        String name;

    protected:
        // this will make our methods be visible inside the gdscript
        static void _bind_methods();

    public:
        {{cookiecutter.class_name}}();
        ~{{cookiecutter.class_name}}();
        void hello_world(String p_word);
        void set_name(const String p_name);
        String get_name() const;
    };
}
#endif