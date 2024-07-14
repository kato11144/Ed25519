# ECDSA

This project implements ECDSA using the `libsodium` library.

## Setting Up Environment Variables and Building the Project

1. Grant execute permissions to `setup.sh`.

    ```sh
    chmod +x setup.sh
    ```

2. Execute `setup.sh` to set the environment variables.

    ```sh
    source ./setup.sh
    ```

3. Run the `make` command to build the project.

    ```sh
    make
    ```

4. Execute the built executable file.

    ```sh
    ./bin/main
    ```

5. Run the `make clean` command to clean up build artifacts.

    ```sh
    make clean
    ```

## File Structure

- `include/`: Header files directory
- `src/`: Source code directory
- `Makefile`: Makefile for managing project builds
- `setup.sh`: Script for setting environment variables
- `obj/`: Object files directory (generated during build)
- `bin/`: Executable files directory (generated during build)

## Dependencies

- `libsodium`: Secure cryptography library

### Installation Method (using Homebrew)

```sh
brew install libsodium
```
