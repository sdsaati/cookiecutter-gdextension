DEBUG ?= true


all: build

ifeq ($(OS),Windows_NT)
    #Windows stuff
	@echo "We are in Windows"
else
    #Linux stuff
	@echo "We are in Linux or Mac"
endif

init: SConstruct
	@echo "================================="
	@echo "Try to clone godot-cpp from the github... "
	@echo "================================="
	git clone -b {{cookiecutter.godot_version_only_major_and_minor}} https://github.com/godotengine/godot-cpp.git
	cd "godot-cpp"
	@echo "================================="
	@echo "start building the godot-cpp with scons"
	@echo "================================="
	scons -j{{cookiecutter.number_of_parallel_threads_for_compile}} platform={{cookiecutter.platform}}
	cd ..
	@echo "================================="
	@echo "Building of godot-cpp is finished. ✅"
	@echo "================================="

build: init 
	@echo "================================="
	@echo "Building the C++ extension you wrote"
	@echo "================================="
ifeq ($(DEBUG),true)
		scons platform={{cookiecutter.platform}} -j{{cookiecutter.number_of_parallel_threads_for_compile}}
else
		scons platform={{cookiecutter.platform}} target=template_release -j{{cookiecutter.number_of_parallel_threads_for_compile}}
endif
	@echo "================================="
	@echo "Extension built ✅"
	@echo "================================="

