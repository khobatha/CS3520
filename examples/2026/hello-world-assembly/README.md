# Hello World Assembly

RISC-V assembly example used in class to print `Hello world!`.

## Files

- `hello-world.s`: RISC-V assembly source file.

## Run

Open `hello-world.s` in a RISC-V teaching simulator such as RARS or Venus, assemble it, and run it.

The program:

- stores the message in the data section
- loads the message address into `a0`
- uses an environment call to print the string
- uses another environment call to exit

## Notes

The environment call numbers used here are intended for a teaching simulator. They are not Linux system call numbers.

