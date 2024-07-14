#!/bin/sh

export C_INCLUDE_PATH=/opt/homebrew/Cellar/libsodium/1.0.20/include:$C_INCLUDE_PATH
export LIBRARY_PATH=/opt/homebrew/Cellar/libsodium/1.0.20/lib:$LIBRARY_PATH

echo "Environment variables set for the project."
