.PHONY: build

build:
	mkdir -p ./build
	cmake -B ./build -S . -G Ninja
	ninja -C ./build

run: build
	./build/main

clean:
	rm -rf ./build
