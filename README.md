# ECDSA

This project implements ECDSA using the `libsodium` library.

## File Structure

- `include/`: Header files directory
- `src/`: Source code directory
- `Makefile`: Makefile for managing project builds
- `obj/`: Object files directory (generated during build)
- `bin/`: Executable files directory (generated during build)

---

```sh
# Build and Start Container
docker compose up -d --build

# Access the Container
docker compose exec ubuntu /bin/bash

# Stop and Remove Container
docker compose down
```
