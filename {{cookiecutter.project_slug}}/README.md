# Folder Structure
```sh
{{cookiecutter.project_slug}}/
|
+--{{cookiecutter.godot_project_folder_name}}/   # the game to test the extension
|   |
|   +--main.tscn
|   |
|   +--bin/
|       |
|       +--{{cookiecutter.class_name_file}}.gdextension
|
+--godot-cpp/             # C++ bindings
|
+--src/                   # source code of the extension we are building
|   |
|   +--register_types.cpp
|   +--register_types.h
|   +--{{cookiecutter.class_name_file}}.cpp
|   +--{{cookiecutter.class_name_file}}.h
|
|--README.md
|
|--Makefile
|
|--SConstruct
```
# Installation
You need to install python and then scons(using `pip install scons`), and also make sure you have installed git.

Just run
```sh
make
```
everytime you change your .cpp and .h files.

# Description
* **{{cookiecutter.project_slug}}/**
    * is the root of the whole project including your godot project and gdextension project and the libraries you need.
* **{{cookiecutter.godot_project_folder_name}}/**
    * is your godot project, you can put the content of your godot project here. there is a bin folder inside here that is important fo your godot project.
* **godot-cpp/**
    * is the .cpp and .h files that godot provided for you so that you can create your gdextension. (this will be automatically downloaded using the `make` command that I described it aboe).
* **src/**
    * Your actual .cpp and .h files of the gdextension project. this is what you need to change and develop.