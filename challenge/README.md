# Login Challenge

**Category:** Reverse Engineering 
**Difficulty:** Easy 
**Flag format:** Flag{...}

## Description

A small program asks for a password. Enter the right one and it reveals the flag. The password is never checked directly, recover it by reverse engineering the binary.

## To play

Run the binary directly:

    ./login

Enter a password when prompted. The correct input reveals the flag; anything else produces garbage.

Recommended tools: Ghidra, objdump, gdb, or a short script.

## To rebuild from source

The Dockerfile reproducibly compiles the (stripped) binary:

    docker build -t login .
    docker run --rm -it login ./login

## Files

- `login`      — the compiled challenge binary (this is what you attack)
- `login.c`    — source (for building / verification)
- `Dockerfile` — reproducible build recipe