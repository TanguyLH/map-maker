# map-maker

1. Creating a format in JSON, a specification for this.


# Tricks
For LSP on vscode:
```sh
cmake -S . -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
cmake --build build
```

This will create a compile_commands under build for clangd.